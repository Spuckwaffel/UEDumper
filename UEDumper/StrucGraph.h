#pragma once

#include <vector>
#include "Engine/Core/EngineStructs.h"

typedef EngineStructs::Struct* Node;
typedef std::pair<Node, std::string> NodeAndMember;
typedef Node DestinationNode;


class StrucGraph
{
	StrucGraph() {}
	static inline StrucGraph* instancePtr = nullptr;

	std::vector<Node> vNodes;
	std::map<NodeAndMember, std::vector<DestinationNode>> mEdges;

	void addNodeNoCheck(Node newNode)
	{
		vNodes.push_back(newNode);
	}

public:
	StrucGraph(const StrucGraph& obj) = delete;
	static StrucGraph* getInstance()
	{
		if (instancePtr == nullptr) instancePtr = new StrucGraph();

		return instancePtr;
	}

	void clear()
	{
		vNodes.clear();
		mEdges.clear();
	}

	bool addNode(Node newNode)
	{
		if (!containsNode(newNode))
		{
			addNodeNoCheck(newNode);
			return true;
		}

		return false;
	}

	bool containsNode(Node searchNode) const
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

	bool addEdge(NodeAndMember from, DestinationNode to)
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

	bool containsEdge(NodeAndMember from, DestinationNode to) const
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
	std::vector<std::vector<NodeAndMember>> findAllPaths(Node start, NodeAndMember destination) {
		std::vector<std::vector<NodeAndMember>> allPaths;
		std::vector<NodeAndMember> path;
		std::unordered_set<Node> visited;

		std::vector<std::pair<NodeAndMember, std::vector<NodeAndMember>>> stack;
		for (auto member : start->definedMembers)
			stack.push_back(std::pair<NodeAndMember, std::vector<NodeAndMember>>(
				NodeAndMember(start, member.name),
				{ NodeAndMember(start, member.name) }
			));

		//if (destination->cppName == "ULevel") DebugBreak();

		while (stack.size() > 0)
		{
			auto [node, path] = stack[stack.size() - 1];
			stack.pop_back();

			if (visited.contains(node.first)) continue;

			if (node.first == destination.first && node.second == destination.second)
			{
				allPaths.push_back(path);
			}
			else
			{
				if (visited.find(node.first) == visited.end()) {
					visited.insert(node.first);

					if (mEdges.contains(node)) {
						for (auto neighbour : mEdges[node])
						{
							for (auto neighbourMember : neighbour->definedMembers)
							{
								std::vector<NodeAndMember> newPath = path;
								newPath.push_back(NodeAndMember(neighbour, neighbourMember.name));
								stack.push_back({ NodeAndMember(neighbour, neighbourMember.name), newPath });
							}
						}
					}
				}
			}

			visited.erase(node.first);
		}

		return allPaths;
	}

	std::vector<Node>* nodes()
	{
		return &vNodes;
	}

	std::map<NodeAndMember, std::vector<DestinationNode>>* edges()
	{
		return &mEdges;
	}
};