#include<bits/stdc++.h>
using namespace std;
#define f(i,a,b) for(int i=a;i<b;i++)
int sum=0;
class node{
	public:
		int data;
		node* next;
		node(int val)
		{
			data=val;
			next=NULL;
		}
};
int iah(node* &head,int val)
{
	node* n=new node(val);
	n->next=head;
	head=n;
}

int iat(node* &head,int val)
{
	node* n=new node(val);
	if(head==NULL)
	{
		head=n;
		return 0;
	}
	
	node* temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=n;
}
void delh(node*  &head)
{
	node* todel=head;
	head=head->next;
	delete  todel;
}

void del(node* &head,int key)
{
	node* temp=head;
	while(temp->next->data!=key)
	{
		temp=temp->next;
	}
	node* todel=temp->next;
	temp->next=temp->next->next;
	delete todel;
}


void dis(node* head)
{
	while(head!=NULL)
	{
		printf("%d ->",head->data);
		head=head->next;
	}printf("null\n");
}
signed main()
{
	node* head=NULL;
	iat(head,1);
	iat(head,2);
	iat(head,3);
	
	iah(head,4);
	dis(head);
	delh(head);
	dis(head);
	
 } 
