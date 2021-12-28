#ifndef INT_TREE
#define INT_TREE

class BST
{
private:

    struct node{
        int data;
        node *r_ptr;
        node *l_ptr;
    };

    node *root;

    void insert(node *&, node *&);
    
public:

    BST();
    void insert_node(int);
    bool search_node(int);

};

#endif