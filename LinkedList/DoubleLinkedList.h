#pragma once
#include "NodeD.h"
#include <iostream>
class DoubleLinkedList {

public:
	NodeD* head;

	DoubleLinkedList();
	~DoubleLinkedList();

	void appendAtHead(int data);
	void remove(int data);
	void printList() const;

};