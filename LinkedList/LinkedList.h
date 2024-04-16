#pragma once
#include "Node.h"
#include <iostream>

class LinkedList {
public:
	Node* head;
	LinkedList() : head(nullptr) {}


	void insertAtBeggining(int new_data) {
		Node * n = new Node(new_data);
		
		n->next = head;
		head = n;	
	}

	void deleteFromBeggining() {
		if (head) {
			std::cout << "The list is empty, no nodes to delete.\n";
			return;
		}

	}

	~LinkedList() {
		Node* current = head;
		while (current != nullptr) {
			Node* next = current->next;
			delete current;
			current = next;
		}
		head = nullptr;
	}

	friend std::ostream& operator<< (std::ostream& out, LinkedList& list);

};

