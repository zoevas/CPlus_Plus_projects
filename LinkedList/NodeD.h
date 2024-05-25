#pragma once
#pragma once
class NodeD {

public:
	int data;
	NodeD* prev;
	NodeD* next;

	NodeD(int val) : data(val), next(nullptr), prev(nullptr) {}

};
