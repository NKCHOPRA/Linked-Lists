#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node* next;
};

struct node* head=NULL;

void insert(int new_data)
{
	
	struct node* new_node=new node;
	new_node->data=new_data;
	new_node->next=NULL;
	
	if(head==NULL)
	{
		head=new_node;
	}
	else
	{
		struct node* ptr=head;
		while(ptr->next != NULL)
		{
			ptr=ptr->next;
			
		}
		ptr->next=new_node;
	}
	
}

void display()
{
	struct node* ptr=head;
		while(ptr != NULL)
		{
			cout<<ptr->data<<endl;
			ptr=ptr->next;
			
		}
	
}

main()
{
insert(3);
insert(4);
insert(5);
insert(6);
	
  	
 display(); 
}
