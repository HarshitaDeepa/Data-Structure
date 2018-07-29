#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};
main()
{
	struct node *f1,*head,*ptr,*s,*head1;
	int n,d,ch,count=1,pos,c;
	cout<<"enter the no of elements"<<endl;
	cin>>n;
	cout<<"enter the elements"<<endl;
	f1=new node;
	//s=new node;
	cin>>d;
	f1->data=d;
	f1->next=NULL;
	head=f1;
	ptr=head;
	head1=head;
	for(int i=0;i<n-1;i++)
	{
		cin>>d;
		f1=new node;
		f1->data=d;
		f1->next=NULL;
		ptr->next=f1;
		ptr=ptr->next;	
		count++;	
	}
	cout<<"1: to add element at the begining"<<endl<<"2: to add the element at specific position"<<endl<<"3: to add element at the end of the list"<<endl<<"4: exit";
	cin>>ch;
	while(ch!=4)
	{
		switch(ch)
		{
			case 1:
				{
					ptr=head;
					cout<<"enter the no of elements to be added"<<endl;
					cin>>n;
					for(int i=0;i<n;i++)
					{
						cout<<"enter the element to be added"<<endl;
						cin>>d;
						f1=new node;
						f1->data=d;
						f1->next=ptr;
						ptr=f1;
						count++;
					}
				head=ptr;
	
	
					break;
				}
			case 2:
				{
					c=count;
					s=new node;
					ptr=head;
					cout<<"enter the no of elements to be added"<<endl;
					cin>>n;
					for(int i=0;i<n;i++)
					{
						cout<<"enter the element"<<endl;
						cin>>d;
						cout<<"enter the position"<<endl;
						cin>>pos;
						ptr=head;
						c=1;
						while(c<pos && ptr->next!=NULL)
						{
							ptr=ptr->next;
							c++;
						}
						s->data=d;;
						s->next=ptr->next;
						ptr->next=s;	
						count++;
					}
					break;
				}
			case 3:
				{
					ptr=head;
					while(ptr->next != NULL)
					ptr=ptr->next;
					cout<<"enter the no of elements to be added"<<endl;
					cin>>n;
					for(int i=0;i<n;i++)
					{
						cout<<"enter the element to be add"<<endl;
						cin>>d;
						f1=new node;
						f1->data=d;
						f1->next=NULL;
						ptr->next=f1;
						ptr=f1;
						count++;
	
					}
					break;
				}
		
			default:
				{
					cout<<"enter a right choice"<<endl;
					break;
				}
		}
		cout<<"1: to add element at the begining"<<endl<<"2: to add the element at specific position"<<endl<<"3: to add element at the end of the list"<<endl<<"4: exit";
		cin>>ch;
	}
	ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
	cout<<"total no of nodes "<<count<<endl;
}
