/*
       Author:  Gideon Asare
       Email: gideonasare847@outlook.com
       Topic: linkedlist implemetation in C (inserting at the beginning of the list)
       Date : 20-08-2019
*/
#include <stdio.h>
#include <stdlib.h>
/*Declaring the struct*/

struct Node{
    int data;  // the data part
    struct Node* next; // pointer to node 
};

struct Node*head; // assign the Head to null because it's empty now

/*insertion function */
void Insert(int x){
    struct Node*temp = (struct Node*)malloc(sizeof (struct Node)); // assigning size of node on dynamic memory
    (*temp).data = x;
    (*temp).next = head;
      head = temp;
}

/*Read / iterating the inserted data function */
void Print(){
  struct Node*temp = head;
  while(temp!=NULL){
      printf("%d ",(*temp).data);
      temp = (*temp).next;
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
