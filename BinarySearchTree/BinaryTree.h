#pragma once
#include "Node.h"
namespace BinaryTree {
	template <typename T>
	class BinaryTree
	{
		Node<T>* root;


	public:
		BinaryTree() : root(nullptr) {}
		~BinaryTree() {
			delete root;
			root = nullptr;
		}

		Node<T>* insertInTree(T value) {
			if (root == nullptr) {
				root = new Node<T>(value);
			}
			else {
				root->insert(value);
			}

			return root;
		}
		void inOrder() {
			root->inOrderPrint();
		}

		int heightTree() {
			return root->height();
		}

		bool contains(T data) {
			return root->contains(data);
		}
	};
}

