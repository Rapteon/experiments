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

class LinkedList:public Node{
    Node *head;
    Node *tail;
    int len;
    public:
        LinkedList(){
            len = 0;
            head = new Node();
            tail = new Node();
        }
        void insert(int);
        void display();
        int length();
        void insertAtBegin(int);
        void insertAtEnd(int);
        void insertAtPos(int, int);
};

void LinkedList::insert(int element){
    Node *createdNode = new Node(element);
    if(head->next == NULL){
        tail = createdNode;
        head->next = tail;
    }
    else{
        tail->next = createdNode;
        tail = createdNode;
    }
    len++;
}

void LinkedList::display(){
    if(len == 0){
        std::cout<<"Empty list.\n";
        return;
    }
    Node *temp = head;
    while(temp->next != NULL){
        std::cout<<temp->data<<"->";
        temp = temp->next;
    }
    std::cout<<temp->data<<std::endl;
}
int LinkedList::length(){
    return len;
}

void LinkedList::insertAtBegin(int n){
    Node *createdNode = new Node(n);
    createdNode->next = head->next;
    head = createdNode;
}

void LinkedList::insertAtEnd(int n){
    Node *temp = head;
    int element;

    while(temp->next != NULL)
        temp = temp->next;
    Node *newNode = new Node(n);

    // std::cout<<"Element: ";
    // std::cin>>element;
    // newNode->data = element;

    temp->next = newNode;
}
void LinkedList::insertAtPos(int position, int n){
    Node *temp = head;
    int count = 1;

    if(position < 0 || position > len){
        std::cout<<"Invalid position.\n";
        return;
    }
    while(count <= position-1){
        temp = temp->next;
        count++;
    }
    Node *newNode = new Node(n);
    newNode->next = temp->next;
    temp->next = newNode;

}
int main(){
    LinkedList l1;
    int num_of_elements, element, option = 1;

    std::cout<<"Total Elements: ";
    std::cin>>num_of_elements;

    for(int i = 1; i <= num_of_elements; i++){
        std::cout<<"Element::"<<i<<"::";
        std::cin>>element;
        l1.insert(element);
    }
    l1.display();

    while(option > 0 && option < 5){
        std::cout<<"Select operation to perform:\n";
        std::cout<<"1\tInsert at Beginning\n";
        std::cout<<"2\tInsert at Position...\n";
        std::cout<<"3\tInsert at End\n";
        std::cout<<"4\tShow Length\n";
        std::cout<<"[1/2/3/4]?\n: ";
        std::cin>>option;

        switch(option){
            case 1: std::cout<<"Element: ";
                    std::cin>>element;
                    l1.insertAtBegin(element);
                    break;
            case 2: std::cout<<"Element: ";
                    std::cin>>element;
                    std::cout<<"Position: ";
                    int position;
                    std::cin>>position;
                    l1.insertAtPos(position, element);
                    break;
            case 3: std::cout<<"Element: ";
                    std::cin>>element;
                    l1.insertAtEnd(element);
                    break;
            case 4: std::cout<<"Length = "<<l1.length()<<std::endl;
                    break;
            default:std::cout<<"Invalid option selected.\nPLease retry.\n";
        }
        l1.display();
    }
}