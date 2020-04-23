#include<iostream>
using namespace std;
#define max 100
class node
{
	public:
	int vertex;
	node *next;
};
class list:public node
{
	node *a[max];
	int n;
	public:
		list()
		{
			n;
			for(int j=0;j<n;j++)
			a[j]=NULL;
		}
		void create(int );
		void display(int );
};
void list::create(int b)
{
	node *temp;
	char ans;
	int i,j;
	n=b;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"Is there an edge between vertex "<<i+1<<" & "<<j+1<<" : ";
			cin>>ans;
			if(ans=='y'||ans=='Y')
			{
				node *newnode = new node();
				newnode->vertex=j+1;
				if(a[i]==NULL)
				{
					a[i]=temp=newnode;
				}
				else
				{
					temp->next=newnode;
					temp=newnode;
				}
			}
		}
	}
}
void list::display(int b)
{
	node *temp;
	int i;
	n=b;
	for(i=0;i<n;i++)
	{
		cout<<endl;
		cout<<"vertex"<<i+1<<" -> ";
		temp=a[i];
		while(temp!=NULL)
		{
			cout<<"v"<<temp->vertex<<" -> ";
			temp=temp->next;
		}
		cout<<"NULL";
	}
}
int main()
{
	int c;
	int b;
	list t;
	do
	{
		cout<<"\nChoose task to be Performed :\n1.Create \n2.Display\n";
		cin>>c;
		switch(c)
		{
			case 1:
				{
					cout<<"\nEnter the Number of Elements you want : ";
					cin>>b;
					cout<<"\n";
					t.create(b);
				}
				break;
			case 2:
				{
					cout<<"\nDisplaying Adjacency List\n";
					t.display(b);
				}
				break;
		}
	}while(1);
}