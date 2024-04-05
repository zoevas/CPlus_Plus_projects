#pragma once
#include <iostream>
#include <algorithm>


namespace BinaryTree {
template <typename T>
class Node {
        public:
            T data;
			Node<T>* left;
			Node<T>* right;
        public:

            Node(T data) : data(data), left(nullptr), right(nullptr) {
                this->data = data;
            }

            ~Node() {
                if (left != nullptr) {
                    delete left;
                    left = nullptr;
                }
                if (right !=nullptr) {
                    delete right;
                    right = nullptr;
                }
            }

            // Member function definitions
            void insert(int data) {
                if (this->data == data) {
                    return; // no duplicates are allowed 
                } else if (data < this->data) {
                    if (left == nullptr) {
                        Node* node = new Node(data);
                        left = node;
                    }
                    else {
                        left->insert(data);
                    }
                } else {
                    if (right == nullptr) {
                        Node* node = new Node(data);
                        right = node;
                    } else {
                        right->insert(data);
                    }
                }
             }

            bool contains(int value) {
                if (this->data = value)
                    return true;
                else if (value < this->data) {
                    if (left != nullptr) {
                       contains(left->contains(value));
                    } else {
                       return false;
                    }
                } else {
                    if (right != nullptr)
                       right->contains(value);
                    else
                       return false;
                }
            }

            void inOrderPrint() {
                if (left != nullptr) {
                    left->inOrderPrint();
                } 
                std::cout << data << " ";
                
                if (right != nullptr) {
                    right->inOrderPrint();
                }
            }

            int height() {
                if ((left == nullptr) && (right == nullptr))
                    return 0;
                
                int leftheight = (left != nullptr) ? left->height() : -1;
                int rightheight = (right != nullptr) ? right->height() : -1;

                int max = std::max(leftheight, rightheight);

                return  max + 1;
            }

        };

}
