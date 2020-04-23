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
	int a[10][10];
	int n;
	public:
		list()
		{
			n;
			for(int i=0;i<n;i++)
			{
			for(int j=0;j<n;j++)
            {
			a[i][j]=0;
		}
	}
	
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
			node *newnode = new node();
			if(ans=='y'||ans=='Y')
			{
				newnode->vertex=1;
			}
			else 
			  newnode->vertex=0;
				
				a[i][j]=newnode->vertex;
				
			
		}
	}
}
void list::display(int b)
{
	node *temp;
	int i,j;
	n=b;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	int c;
	int b;
	list t;
	do
	{
		cout<<"\nChoose task to be performed :\n 1.Create \n 2.Display\n\n";
		cin>>c;
		switch(c)
		{
			case 1:
				{
					cout<<"Enter no of elements you want : ";
					cin>>b;
					cout<<"\n";
					t.create(b);
				}
				break;
			case 2:
				{
					cout<<"\nDisplaying the Adjacency Matrix\n";
					t.display(b);
				}
				break;
		}
	}while(1);
}
