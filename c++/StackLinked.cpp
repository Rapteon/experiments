//Program implementing a stack using a linkedList;
//AUTHOR: rapteon; DATE: 20200129
#include<iostream>
class Node{
	public:
		int data;
		Node *next;
		Node(){
			next = NULL;
		}
		Node(int n){
			data = n;
			next = NULL;
		}
};

class Stack{
	Node *start;
	Node *top;

	public:
		void push(int);
		void display();
		int pop();
		int peek();
		Stack(){
			start = new Node();
			top = new Node();
			top = start->next;
		}
};

void Stack::push(int n){
	Node *newNode = new Node(n);
	if(start->next != NULL){
		top->next = newNode;
		top = top->next;
	}
	else{
		start->next = newNode;
		top = start->next;
	}
}

void Stack::display(){
	Node *traverser = start->next;
	std::cout<<"|";
	while(traverser != NULL){
		std::cout<<traverser->data<<"|";
		traverser = traverser->next;
	}
	std::cout<<"\b\n";
}

int Stack::pop(){
	Node *traverser = start->next, *toReturn;
	int dat;
	if(traverser == NULL){
		std::cout<<"Cannot pop from empty stack.\n";
		return -1;
	}
	if(traverser->next == NULL){
		start->next = NULL;
		return traverser->data;
		delete(traverser);
//		std::cout<<"Insufficient elements to pop.\n";
//		return -2;
	}
	while(traverser->next->next != NULL)
		traverser = traverser->next;

	toReturn = traverser->next;
	dat = toReturn->data;
	traverser->next = NULL;

	delete(toReturn);
	return dat;
}

int Stack::peek(){
	Node *traverser = start->next;
	if(traverser == NULL){
		std::cout<<"Cannot peek from empty stack.\n";
		return -1;
	}
	while(traverser->next != NULL)
		traverser = traverser->next;
	return traverser->data;

}

int main(){
	int option, element;
	Stack s;
	while(true){
		std::cout<<"Options:\n";
		std::cout<<"1\tPush\n";
		std::cout<<"2\tDisplay\n";
		std::cout<<"3\tPop\n";
		std::cout<<"4\tPeek\n";
		std::cout<<"[1/2/3/4]?\n: ";
		std::cin>>option;
	
		switch(option){
			case 1: std::cout<<"Element: ";
				std::cin>>element;
				s.push(element);
				break;
			case 2: break;
			case 3: std::cout<<"Popped: "<<s.pop()<<std::endl;
				break;
			case 4: std::cout<<"Element at top: "<<s.peek()<<std::endl;
				break;
			default:std::cout<<"Invalid option selected.\n";
		}
		s.display();
	}
}
