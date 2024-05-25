#include "DoubleLinkedList.h"


DoubleLinkedList::DoubleLinkedList() : head(nullptr) {

}
DoubleLinkedList::~DoubleLinkedList() {
	NodeD* current = head;
	while (current != nullptr) {
		NodeD* next = current->next;
		delete current;
		current =next;
	}
}

void DoubleLinkedList::appendAtHead(int data) {
	NodeD* newNode = new NodeD(data);
	if (head == nullptr) {
		head = newNode;
	} else {
		newNode->next = head;
		head->prev = newNode;
		head = newNode;	
	}
}
	
void DoubleLinkedList::remove(int data) {
	NodeD * current = head;
	for (NodeD* current = head; current != nullptr; current = current->next) {
		if (current->data == data) {
			if (head->next == nullptr) {
				delete head;
				head = nullptr;
			} else {
				if (current->prev != nullptr && current->next != nullptr) {
					current->prev->next = current->next;
					delete current;
					break;
				}
			}
		}
	
	}
}

void DoubleLinkedList::printList() const {
	NodeD* current = head;
	while (current != nullptr) {
		std::cout << current->data << ", ";
		current = current->next;
	}
	std::cout << std::endl;
}