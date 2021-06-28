#include<bits/stdc++.h>
using namespace std;


struct Node{
	Node *left;
	Node *right;
	int data;
	Node(int x){
		data=x;
		left=NULL;
		right=NULL;

	}

};

int sizeOfBinarytree(Node *root){
	if (root==NULL){
		return 0;
	}
	return 1+(sizeOfBinarytree(root->left)+sizeOfBinarytree(root->right));

}


int main(){



	Node *root=new Node(3);
	root->left=new Node(4);
	root->right=new Node(5);
	root->left->left=new Node(6);
	root->left->right=new Node(66);
	root->right->left=new Node(7);
	root->right->right=new Node(8);
	// root->left->left->left=new Node(9);
	cout<<sizeOfBinarytree(root);


	return 0;
}