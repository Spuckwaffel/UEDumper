#pragma once

#include "Frontend/StrucGraph.h"

StrucGraph* StrucGraph::getInstance()
{
	if (instancePtr == nullptr) instancePtr = new StrucGraph();

	return instancePtr;
}

void StrucGraph::clear()
{
	vNodes.clear();
	mEdges.clear();
}

void StrucGraph::addNodeNoCheck(Node newNode)
{
	vNodes.push_back(newNode);
}

bool StrucGraph::addNode(Node newNode)
{
	if (!containsNode(newNode))
	{
		addNodeNoCheck(newNode);
		return true;
	}

	return false;
}

bool StrucGraph::removeNode(Node nodeToRemove)
{
	for (auto node = vNodes.begin(); node != vNodes.end(); node++)
	{
		if (*node == nodeToRemove)
		{
			vNodes.erase(node);

			std::vector<NodeAndMember> edgesToRemove;
			for (auto edge = mEdges.begin(); edge != mEdges.end(); edge++)
			{
				if (edge->first.first == nodeToRemove)
				{
					edgesToRemove.push_back(edge->first);
				}
				else
				{
					auto destinations = edge->second;
					for (auto destinationNode = destinations.begin(); destinationNode != destinations.end(); destinationNode++)
					{
						if (*destinationNode == nodeToRemove) {
							edgesToRemove.push_back(edge->first);
						}
					}
				}
			}
			for (auto edge : edgesToRemove)
			{
				mEdges.erase(edge);
			}
			return true;
		}
	}

	return false;
}

bool StrucGraph::containsNode(Node searchNode) const
{
	bool bExists = false;
	for (auto& node : vNodes)
	{
		if (node == searchNode) {
			bExists = true;
			break;
		}
	}

	return bExists;
}

bool StrucGraph::addEdge(NodeAndMember from, DestinationNode to)
{
	if (!containsNode(from.first)) addNodeNoCheck(from.first);
	if (!containsNode(to)) addNodeNoCheck(to);

	if (containsEdge(from, to)) return false;

	if (!mEdges.contains(from))
	{
		std::vector<DestinationNode> newVec;
		mEdges.insert(std::pair<NodeAndMember, std::vector<DestinationNode>>(from, newVec));
	}

	mEdges[from].push_back(to);

	return true;
}

bool StrucGraph::containsEdge(NodeAndMember from, DestinationNode to) const
{
	auto nodes = mEdges.find(from);
	if (nodes == mEdges.end()) return false;

	for (auto node : nodes->second)
	{
		if (node == to) {
			return true;
		}
	}

	return false;
}

// Function to find all paths from node A to node B in a DAG
std::vector<std::vector<NodeAndMember>> StrucGraph::findAllPaths(Node start, NodeAndMember destination) {
	std::vector<std::vector<NodeAndMember>> allPaths;
	std::unordered_set<std::string> visitedPaths;
	std::vector<NodeAndMember> path = {};

	auto getUniqueKeyForPath = [&](const std::vector<NodeAndMember>& path)
		{
			std::string key = std::to_string(path.size());
			for (const auto& node : path) {
				key += ":" + node.first->cppName + ":" + node.second;
			}
			return key;
		};

	std::deque<std::pair<NodeAndMember, std::vector<NodeAndMember>>> queue;
	for (auto& member : start->definedMembers)
	{
		auto queuedNode = NodeAndMember(start, member.name);
		queue.push_back(std::pair<NodeAndMember, std::vector<NodeAndMember>>(
			queuedNode, { queuedNode }
		));
	}

	bool dfs = false; // false to use bfs, true to use dfs
	std::tuple<NodeAndMember, std::vector<NodeAndMember>> stackEntry;
	while (queue.size() > 0)
	{
		if (dfs)
		{
			stackEntry = queue[queue.size() - 1];
			queue.pop_back();
		}
		else
		{
			stackEntry = queue[0];
			queue.pop_front();
		}
		auto& [node, path] = stackEntry;

		if (node.first == destination.first && node.second == destination.second)
		{
			if (visitedPaths.contains(getUniqueKeyForPath(path))) continue;

			allPaths.push_back(path);
			visitedPaths.insert(getUniqueKeyForPath(path));
		}
		else if (node.first == destination.first && destination.second == "")
		{
			if (visitedPaths.contains(getUniqueKeyForPath(path))) continue;

			allPaths.push_back(path);
			visitedPaths.insert(getUniqueKeyForPath(path));
		}
		else
		{
			if (mEdges.contains(node)) {
				bool cycleDetected = false;
				for (auto neighbour : mEdges[node])
				{
					for (auto& neighbourMember : neighbour->definedMembers)
					{
						auto nextNode = NodeAndMember(neighbour, neighbourMember.name);

						for (auto& previousNode : path) {
							if (previousNode == nextNode) {
								cycleDetected = true;
								break;
							}
						}
						if (cycleDetected) continue;

						std::vector<NodeAndMember> newPath = path;
						newPath.push_back(nextNode);
						queue.push_back({ nextNode, newPath });
					}
					if (cycleDetected) continue;
				}
			}
		}
	}

	return allPaths;
}

std::vector<Node>* StrucGraph::nodes()
{
	return &vNodes;
}

std::map<NodeAndMember, std::vector<DestinationNode>>* StrucGraph::edges()
{
	return &mEdges;
}