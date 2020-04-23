//Program implementing a Linear Queue using a singly linked list.
//AUTHOR: rapteon; DATE; 20200131
#include<iostream>

using namespace std;

class Node{
	public:
		int data;
		Node* next;
		Node(){
			next = NULL;	
		}
		Node(int n){
			data = n;
			next = NULL;
		}
};
class Queue{
	Node* front;
	Node* rear;
	int len;
	
	public:
		void initQueue(){
			front = new Node();
			rear = new Node();
			rear = front;
			len = 0;
		}
		void enqueue(int);
		void dequeue();
		void display();
};

void Queue::enqueue(int n){
	Node *newNode = new Node(n);

	if(front->next != NULL){
		rear->next = newNode;
		rear = rear->next;	
	}
	else{
		front->next = newNode;
		rear = front->next;	
	}
}
void Queue::dequeue(){
	Node *toDelete = front->next;
	if(!toDelete){
		cout<<"Empty queue.\n";
	}
	else{
		front->next = toDelete->next;
		cout<<"Dequeueing "<<toDelete->data<<endl;
		delete(toDelete);
	}
}
void Queue::display(){
	Node* traverser = front->next;
	while(traverser != NULL){
		cout<<traverser->data<<":";
		traverser = traverser->next;
	}
	cout<<"\b \n";
}
int main(){
	int option, element;
	Queue fifoQueue;
	fifoQueue.initQueue();

	while(true){
		cout<<"Queue operations:\n";
		cout<<"1\tEnqueue\n";
		cout<<"2\tDequeue\n";
		cout<<"3\tDisplay\n";
		cout<<"4\tExit\n";
		cout<<"[1/2/3/4]?\n: ";
		cin>>option;

		switch(option){
			case 1: cout<<"Element: ";
				cin>>element;
				fifoQueue.enqueue(element);
				break;
			case 2: fifoQueue.dequeue();
				break;
			case 3: fifoQueue.display();
				break;
			case 4: exit(0);
				break;
			default:cout<<"Invalid option.\n";
		}
	}

	return 0;
}
