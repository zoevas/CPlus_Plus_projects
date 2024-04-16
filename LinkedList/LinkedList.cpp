#include "LinkedList.h"

std::ostream& operator<< (std::ostream& out, LinkedList& list) {
	for (Node* current = list.head; current != nullptr; current = current->next) {
		out << current->data << ", ";
	}

	return out;
}