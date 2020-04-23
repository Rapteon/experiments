//Program implementing a BinaryTree and its operations.

#include<iostream>

using namespace std;

class TreeNode{
	public:
	TreeNode *left, *right;
	int data;
	
	TreeNode(int data){
		this->data = data;
		left = right = NULL;
	}
	TreeNode(){
		left = right = NULL;
	}
};

class Stack:public TreeNode{
	TreeNode *stackPointer;
	TreeNode *endPointer;
	public:
	int size;
	
	Stack(){
		stackPointer = NULL;
		size = 0;
	}
	void push(TreeNode* t){
		if(!stackPointer){
			stackPointer->right = t;
			stackPointer->left = NULL;
			endPointer = stackPointer->right;
			size++;
		}
		else{
			endPointer->right = t;
			endPointer = endPointer->right;
			size++;
		}
	}

	TreeNode* pop(){
		if(!stackPointer){
			cout<<"Empty stack."<<endl;
			return NULL;
		}
		else{
			TreeNode *temp = stackPointer;
			for(int i = 0; i < size-2; i++)
				temp = temp->right;	
			TreeNode* toReturn = new TreeNode(temp->right->data);
			endPointer = temp;
			temp->right = NULL;
			TreeNode *toDelete = temp->right;
			delete(toDelete);
			return toReturn;
			size--;
		}
	}
};

class BinaryTree:public TreeNode{
	TreeNode *root;
	int nodes;
	public:
	BinaryTree(){
		root = NULL;
		nodes = 0;
	}
	void create();
	void preorderTraverse();
};

void BinaryTree::create(){
	TreeNode *temp = new TreeNode();
	char choice, pos;
	bool inserted;

	
	do{
		inserted = false;
		TreeNode *newNode = new TreeNode();
		cout<<"Data: ";
		cin>>newNode->data;

		if(!root){
			root = newNode;
		}
		else{
			temp = root;
			while(!inserted){
				cout<<"Left or Right? [L/R]: ";
				cin>>pos;
				if(pos == 'L' || pos == 'l'){
					if(temp->left!=NULL)
						temp = temp->left;
					else{
						temp->left = newNode;
						inserted = true;
					}
				}
				else if(pos == 'R' || pos == 'r'){
					if(temp->right!=NULL)
						temp = temp->right;
					else{
						temp->right = newNode;
						inserted = true;
					}
				}
			}
		}
		nodes++;
		cout<<"Insert more nodes? [Y/n]\n: ";
		cin>>choice;
	}
	while(choice == 'Y' || choice == 'y');
}

void BinaryTree::preorderTraverse(){
	Stack *st = new Stack();
	if(!root)
		return;
	st->push(root);
	TreeNode *temp = new TreeNode();
	
	while(st->size > 0){
		temp = st->pop();
		cout<<temp->data<<" ";
		if(temp->left!= NULL){
			if(temp->right != NULL)
				st->push(temp->right);
		}
		else{
			temp = st->pop();
			cout<<temp->data<<" ";
		}
		temp = temp->left;
	}

}
int main(int argc, char **argv){
	BinaryTree *bt = new BinaryTree();
	bt->create();
	bt->preorderTraverse();
}
