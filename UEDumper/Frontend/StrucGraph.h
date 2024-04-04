#pragma once

#include "stdafx.h"
#include <deque>
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

	void addNodeNoCheck(Node newNode);

public:
	StrucGraph(const StrucGraph& obj) = delete;
	static StrucGraph* getInstance();

	void clear();

	bool addNode(Node newNode);

	bool removeNode(Node nodeToRemove);

	bool containsNode(Node searchNode) const;

	bool addEdge(NodeAndMember from, DestinationNode to);

	bool containsEdge(NodeAndMember from, DestinationNode to) const;

	// Function to find all paths from node A to node B in a DAG
	std::vector<std::vector<NodeAndMember>> findAllPaths(Node start, NodeAndMember destination);

	std::vector<Node>* nodes();

	std::map<NodeAndMember, std::vector<DestinationNode>>* edges();
};