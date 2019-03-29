//including library
#include<iostream>

//using namespace
using namespace std;

//defining class for the tree
class Node{
public:
	Node * left;
	Node* right;
	Node * parent;
	int data;
	Node(int value)
	{
	data=value;
	left=NULL;
	right=NULL;
	parent=NULL;
	}
};
//class object bst
class BST{
public:
Node * root;
BST(){
	root=NULL;
	}


//providing function for insertion
void insert(int value,int count=0){
	                    insertA(root,value);
	                    count++;
}
void insertA(Node * curr,int value){
                           //applaying the conditions
                           if(root==NULL){                                 //if else condition
                                     root= new Node(value);
                           }
                          else if(value<curr->data){
	                      if(curr->left==NULL){
		                         curr->left=new Node(value);
                                 curr->left->parent=curr;
		                            }
	                     else insertA(curr->left,value);
                            }
                        else{
	                           if(curr->right==NULL){
	                                 curr->right=new Node(value);
                                     curr->right->parent=curr;
                                                    }
	                    else insertA(curr->right,value);
                       }
                       }
Node * search(int value){
	             searchA(root,value);
                         }
Node * searchA(Node * curr,int value){
                //applays the conditions
                if(curr==NULL ||curr->data==value ){
	                            return curr;
	                                       }
                //if value<curr->data
                else if(value<curr->data) return searchA(curr->left,value);
                //if value>curr->data
                else return searchA(curr->right,value);
                }
//for minimum
Node * find_min(){}


//for display
void Display()
{
display(root);
}


//display function
void display(Node * curr){
                   /*applaying conditions
                  if root =null*/
                  if(root==NULL) return;
                  display(curr->left);
                  //to print in order
                  cout<<curr->data<<" ";
                 display(curr->right);
                       }
//for finding min
Node * findMinA(){
	        findMin(root);
                     }
Node * findMin(Node * curr){
//applaying conditions
            if(curr==NULL){
	             return curr->parent->data;
	               }
else{
	findMin(curr->left);
	}
}
void replace@parent(Node * one,Node * two){
Node * p=one->parent;
Node * p1=two->parent;
}
};
//main function
int main(){
     //declaring class objects
     BST b1;
     //usage of functions
     b1.insert(12);
     b1.insert(10);
     b1.insert(15);
     b1.insert(2);
     b1.insert(4);
     b1.insert(6);
     b1.Display();
/* return function
    ending function*/
return 0;
}
