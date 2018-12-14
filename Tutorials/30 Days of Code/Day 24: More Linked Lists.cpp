#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

          Node* removeDuplicates(Node *head){
            //Write your code here
            Node *temp, *temp2, *dup; 
            temp = head; 
          
            /* Pick elements one by one */
            while (temp != NULL && temp->next != NULL) { 
                temp2 = temp; 
          
                /* Compare the picked element with rest 
                  of the elements */
                while (temp2->next != NULL){ 
                    /* If duplicate then delete it */
                    if (temp->data == temp2->next->data) { 
                        /* sequence of steps is important here */
                        dup = temp2->next; 
                        temp2->next = temp2->next->next; 
                        delete(dup); 
                    } 
                    else /* This is tricky */
                        temp2 = temp2->next; 
                } 
                temp = temp->next; 
            } 
            return head;
          }

          Node* insert(Node *head,int data)
          {
               Node* p=new Node(data);
               if(head==NULL){
                   head=p;  

               }
               else if(head->next==NULL){
                   head->next=p;

               }
               else{
                   Node *start=head;
                   while(start->next!=NULL){
                       start=start->next;
                   }
                   start->next=p;   

               }
                    return head;
                
            
          }
          void display(Node *head)
          {
                  Node *start=head;
                    while(start)
                    {
                        cout<<start->data<<" ";
                        start=start->next;
                    }
           }
};
			
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
    head=mylist.removeDuplicates(head);

	mylist.display(head);
		
}
