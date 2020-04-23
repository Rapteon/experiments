#include<iostream>

class Node{
	public:
		Node(){next = NULL;}
		Node(int n){data = n; next = NULL;}
		int data;
		Node *next;
};

class List{
	Node *listPtr;
	Node *tail;
	int length;
	public:
		List(){length = 0; listPtr = new Node(); tail = new Node();}
		void insert(int);
		void display();
		void deleteAtBegin();
		void deleteAtEnd();
		void deleteAtPos(int);
		int len();
		int search(int);
};

void List::insert(int n){
	Node *createdNode = new Node(n);
	if(listPtr->next != NULL){
		tail->next = createdNode;
		tail = tail->next;
	}
	else{
		listPtr->next = createdNode;
		tail = createdNode;
	}
	length++;
}

void List::display(){
	Node *temp = listPtr->next;
	while(temp->next != NULL){
		std::cout<<temp->data<<"->";
		temp = temp->next;
	}
	std::cout<<temp->data<<std::endl;
}
void List::deleteAtBegin(){
	Node *temp = listPtr->next;
	listPtr->next = temp->next;
	delete(temp);
	length--;
}

void List::deleteAtEnd(){
	Node *t = listPtr;
	Node *end= new Node();
	while(t->next->next != NULL)
		t = t->next;
	
	end = t->next;
	t->next = NULL;
	delete(end);
	length--;
}

void List::deleteAtPos(int pos){
	if(pos < 2 || pos > length){
		std::cout<<"Invalid range detected.\n";
		return;
	}
	else{
		Node *temp = listPtr->next;
		Node *toDelete = new Node();
		int count = 1;
		while(++count < pos-1)
			temp = temp->next;
		// for(int i = 1; i < pos-1; i++){
		// 	temp = temp->next;
		// }
		toDelete = temp->next;
		temp->next = toDelete->next;
		delete(toDelete);
		length--;
	}
}
int List::len(){
	return length;
}

int List::search(int data){
	Node *temp = listPtr->next;
	for(int i = 1; i <= length && temp->next != NULL; i++, temp = temp->next){
		if(temp->data == data){
			std::cout<<"Found at index: "<<i<<"\n";
			return i;
		}
	}
	return -1;
}
int main(){
	List l1;
	int element;
	for(int i = 1; i < 6; i++){
		std::cout<<"Element: "<<i<<": ";
		std::cin>>element;
		l1.insert(element);
	}
	
	l1.display();
	std::cout<<"Deleting at the beginning.\n";
	l1.deleteAtBegin();
	l1.display();
	std::cout<<"Deleting at the end.\n";
	l1.deleteAtEnd();
	l1.display();
	std::cout<<"Length="<<l1.len()<<std::endl;
	std::cout<<"deleting at pos 2\n";
	l1.deleteAtPos(2);
	l1.display();
	std::cout<<"Searching for element 4\n";
	std::cout<<l1.search(4);
	return 0;
}
