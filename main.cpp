#include "int_tree.h"
#include <iostream>

using namespace std;

int main(){

    BST test_tree;
    test_tree.insert_node(3);
    test_tree.insert_node(1);
    test_tree.insert_node(2);
    

    cout << test_tree.search_node(4) << endl;
}