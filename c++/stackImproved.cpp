//Program implementing a stack using a linkedList;
//AUTHOR: rapteon; DATE: 20200129

#include<iostream>

//Definition of Node class.
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

//Definition of Stack class using Node class.
class Stack{
	Node *top;
    //No need for a second variable to traverse the Stack.
	public:
		void push(int);
		void display();
		int pop();
		int peek();
		Stack(){
			top = new Node();
		}
};

void Stack::push(int n){
    //This function is exactly the same as the insertAtFront() function in an ordinary Singly Linked List.
	Node *newNode = new Node(n);
	newNode->next = top->next;
    top->next = newNode;
}

void Stack::display(){
    /*
        In the below function, the 'traverser' pointer is used to traverse the List and print out the 'data' field of each Node.
    */
	Node *traverser = top->next;
	std::cout<<"_\n";
	while(traverser != NULL){
		std::cout<<traverser->data<<"\n_\n";        //The weird looking print statement seems to print the 'data' in a vertical fashion.
		traverser = traverser->next;
	}
	std::cout<<"\b\n";
}

int Stack::pop(){
    /*
        The below function is same as the deleteFromFront function for a Singly Linked List.
        The only change here is the declaration of an additional variable, 'popped' which
        store the 'data' field of the deleted element and returns it after the pointer is
        freed from memory.
    */
    int popped;
    Node* toPop = top->next;
    if(top->next != NULL){
        top->next = toPop->next;
        popped = toPop->data;
        delete(toPop);
        return popped;
    }
    else{
        std::cout<<"Cannot pop from empty List.\n";
        return -998;	//Error code -998 for the condition that the 'pop' function was run when the List was empty.
    }
}

int Stack::peek(){
    //Shows the first Node of the List.
	if(top->next != NULL)
        return top->next->data;
    else{
        std::cout<<"Empty List.\n";
        return -999;	//Error code -999 for condition that the peek() operation was run with an empty List.
    }
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
