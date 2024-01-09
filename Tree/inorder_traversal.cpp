//  itrative inorder travesal 
// inorder(LNR)
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Node{
    public:
    //access modifier
    // Data members
    int data;
    Node *left;
    Node *right;
    // constructor 
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

    vector<int>inorderTraversal(Node *root){
        stack<Node*>st;
        Node *node=root;
        vector<int>inorder;
        while(true){
            if(node!=NULL){
                st.push(node);
                node=node->left;
            }
            else{
                if(st.empty()==true) break;
                node=st.top();
                st.pop();
                inorder.push_back(node->data);
                node=node->right;
            }
        }
        return inorder;
    }

};
int main(){
    // Driver code
Node *root = new Node(10);
root->left= new Node(20);
root->right=new Node(30);
// call the inorderTraversal
}


/*  recursively
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data=dat;
        this->right=NULL;
        this-left= NULL;
    }

    void inorder(node* root){
        vector<int>inorder;
        if(root==NULL) return;
       if(root->left){
        inorder(root->left);
        }
       if(root->right){
        inorder(root->right);
        }
    }
};


*/


