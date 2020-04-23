#include<iostream>

class Node{
	public:
		Node(){
			next = NULL;
		}
		Node(int n){
			data = n;
			next = NULL;
		}
		int data;
		Node *next;
};

class List{
	Node *start;
	Node *head;
	public:
		void createList(){
			start = new Node();
			head = new Node();
		}
		void addElement(int);
		void display();
		int length();
};

void List::addElement(int n){
	Node *newNode = new Node(n);
	if(start->next != NULL){
		head->next = newNode;
		head = newNode;
	}
	else{
		start->next = newNode;
		head->next = newNode;
		head = newNode;
	}
}

void List::display(){
	Node *temp = new Node();
	temp = start->next;

	while(temp->next != NULL){
		std::cout<<"Data: "<<temp->data<<std::endl;
		temp = temp->next;
	}
	std::cout<<"Data: "<<temp->data<<std::endl;
}

int List::length(){
	Node *temp = new Node();
	temp = start->next;

	int len = 0;

	while(temp->next != NULL){
		len++;
		temp = temp->next;
	}
	return ++len;
}
//Main
int main(){
	List newList;
	int num_of_elements, element;

	std::cout<<"Enter the number of elements: ";
	std::cin>>num_of_elements;

	if(num_of_elements == 0){
		std::cout<<"How can I create an empty list?\n";
		return 1;
	}
	else{
		newList.createList();
		for(int i = 0; i < num_of_elements; i++){
			std::cout<<"Element: ";
			std::cin>>element;
			newList.addElement(element);
		}
		newList.display();
		std::cout<<"Length: "<<newList.length()<<std::endl;
		return 0;
	}
}
