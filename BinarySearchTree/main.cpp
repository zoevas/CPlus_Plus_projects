#include "BinaryTree.h"
#include "Node.h"
#include <iostream>

int main() {
    BinaryTree::BinaryTree<int> bst;

    bst.insertInTree(30);
    bst.insertInTree(20);
    bst.insertInTree(40);
    bst.insertInTree(70);
    bst.insertInTree(60);
    bst.insertInTree(80);

    bst.inOrder();
    std::cout << "The height of the tree is : " << bst.heightTree() << "\n";

    std::cout << "Does tree contains the element 40? : " << (bool)bst.contains(50) << "\n";

    return 0;
}