#include "int_tree.h"


BST::BST() {root = nullptr;}

void BST::insert_node(int data){
    
    node *new_node = nullptr;

    new_node = new node;
    new_node->data = data;
    new_node->l_ptr = nullptr;
    new_node->r_ptr = nullptr;

    insert(root, new_node);
}

void BST::insert(node *&node_ptr, node *&new_node_ptr){
    
    if(node_ptr == nullptr){
        node_ptr = new_node_ptr;
    }
    //if data in new node is less than the parent go left
    else if (new_node_ptr->data < node_ptr->data)
    {
        insert(node_ptr->l_ptr, new_node_ptr);
    }
    //go right down the tree if not
    else
    {
        insert(node_ptr->r_ptr, new_node_ptr);
    } 
}


bool BST::search_node(int value){


    //starts at the root
    node *traversal_ptr = root;

    while (traversal_ptr){

        //this will break the loop
        if(traversal_ptr->data == value)
        {
            return true;
        }
        else if (traversal_ptr->data > value)
        {
            //go down left tree
            traversal_ptr = traversal_ptr->l_ptr;
        }
        else
        {
            //go down right tree
            traversal_ptr = traversal_ptr->r_ptr;
        }
        
        
    }//while

    return false;
}