#include<iostream>

class Node{
	public:
		Node(int);
		Node();
		int data;
		Node *next;
};

Node::Node(int n){
	data = n;
	next = NULL;
}

Node::Node(){
	next = NULL;
}

int main(){
	Node *start = new Node();
	Node *temp = new Node();

	//First node creation...
	Node *node_1 = new Node(1);
	start->next = node_1;
	temp->next = node_1;
	temp = node_1;

	//Since first node has been created, use the temp to move to the next node.
	Node *node_2 = new Node(2);
	temp->next = node_2;
	temp = node_2;

	Node *node_3 = new Node(3);
	temp->next = node_3;
	temp = node_3;
	
	Node *traverser = new Node();
	traverser = start->next;

	while(traverser->next != NULL){
		std::cout<<"Data: "<<traverser->data<<std::endl;
		traverser = traverser->next;
	}
	//Printing the last node's data since the last node has "next" value as NULL.
	std::cout<<"Data: "<<traverser->data<<std::endl;
}
