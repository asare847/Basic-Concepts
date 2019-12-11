/*
       Author:  Gideon Asare
       Email: gideonasare847@outlook.com
       Topic: linkedlist implemetation in C (inserting at the beginning of the list)
       Date : 20-08-2019
*/
#include <sdio.h>
/*
Declaring the struct
*/
struct Node{
    int data;  // the data part
    struct Node* link; // pointer to node 
};

struct Node*head; // assign the Head to null because it's empty now

/*insertion function */
void Insert(int x){
    Node* temp = (Node*)malloc(sizeof (struct Node)); // assigning size of node on dynamic memory
    (*temp).data = x;
    (*temp).link = head;
}

/*Read the inserted data function */
void Print(){
  struct Node*temp = head;
  while(temp!=NULL){
      printf("%d ",(*temp).data);
      temp = (*temp).link;
  }
}

int main()
{
   
    Insert(4);
    Insert(5);
    Insert(9);
    Print();
    
    return 0;
}
