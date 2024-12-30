#include <iostream>
using namespace std;

struct node
{
	string Name;
	node* next;
	
};

int main()
{
	node* head=new node();
	node* second = new node();
	node* third = new node();
	
	
	head->Name = "Kal";
	second->Name = "Mola";
	third->Name = "Fantu";
	
	head->next = second;
	second->next = third;
	third->next = NULL;
	
	node* temp = new node();
	temp->next = head;
	
	while(temp!=NULL)
	{
		cout<<temp->Name<<endl;
		temp = temp->next;
	}
	
}