#include <iostream>
#include <string>

using namespace std;

struct node {
    string data;
    struct node *left;
    struct node *right;

};

struct node* newNode(string data){

    //allocate memory in order to store that data
    struct  node* node = (struct node*)malloc(sizeof(struct node));

    //assign data to the node
    node->data = data;

    //initialize the left and right children of the root using null
    node->left = nullptr;
    node->right = nullptr;

    return(node);



};
int main() {

    //create a root
    struct node *root = newNode("1");

    root ->left = newNode("2");
    root -> right = newNode("3");

    //if the node below the left or right children do not have
    //any data point that they are connected to, then they are
    //called leafs

    return 0;
}