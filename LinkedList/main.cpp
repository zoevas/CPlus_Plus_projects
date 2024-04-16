#include "LinkedList.h"
#include "Node.h"

int main() {

	LinkedList list;

	list.insertAtBeggining(40);
	list.insertAtBeggining(30);
	list.insertAtBeggining(10);
	list.insertAtBeggining(20);
	list.insertAtBeggining(60);

	std::cout <<  list;

}