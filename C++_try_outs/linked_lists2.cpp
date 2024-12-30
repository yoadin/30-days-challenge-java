 /*Create and Traverse a Linked List
Create a linked list with 3 nodes containing the values 10, 20, and 30.
Print the values of the linked list.*/
 
 #include <iostream>
 using namespace std;
 
 struct Node
 {
 	int Values;
	 Node* next; 
 };

 int main()
 {
	 Node*head = new Node();
	 Node*second = new Node();
	 Node*third = new Node();
	 
	 head->Values = 10;
	 second->Values = 20;
	 third->Values = 30;
	 
	 head->next = second;
	 second->next = third;
	 third->next = NULL;
	 
	 Node* temp = head;
     int count = 0; //to count the number of node in linked list
	 
	 while(temp!=NULL)
	 {
		 cout<<temp->Values<<endl;
         count++;
		 temp = temp->next;
	 } 
     cout<<"The total number of nodes is: "<<count<<endl;
	 return 0;
 }