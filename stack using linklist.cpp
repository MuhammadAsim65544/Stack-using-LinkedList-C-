#include <iostream>
using namespace std;
struct Node 
{ 
   int data; 
   struct Node *next; 
}; 
struct Node* top = NULL; 
void push(int val) 
{
   struct Node* newnode= (struct Node*) malloc(sizeof(struct Node)); 
   newnode->data = val; 
   newnode->next = top; 
   top = newnode; 
}
void pop() 
{
   if(top==NULL)
      cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< top->data <<endl;
      top = top->next;
   }
}
int main() {
   int ch, val; 
   do 
   {	
   	cout<<"1) Push in stack"<<endl;
   	cout<<"2) Pop from stack"<<endl;
   	cout<<"4) Exit"<<endl;
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) 
	  {
         case 1: 
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         case 2: 
            pop();
            break;
         case 3: 
         	exit(-1);
            break;
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(1); 
      return 0;
}
