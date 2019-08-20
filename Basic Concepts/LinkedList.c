/*
       Author:  Gideon Asare
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

struct Node*head =NULL; // assign the Head to null because it's empty now

/*insertion function */
void Insert(int x){
    Node* temp = (Node*)malloc(sizeof (struct Node));
    (*temp).data = x;
    (*temp).link = NULL;
    if(head !=NULL){
        (*temp).link = head;
        head = temp;
    }
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
    int lengthoflinkedlist;
    int elementsoflist;
    printf("Enter the length  of linked list\t:");
    scanf("%d",&lengthoflinkedlist);
    int i;
    for(i=0; i<lengthoflinkedlist;i++){
    printf("Enter some elements of  the  list\t:");
    scanf("%d",&elementsoflist);
    Insert(elementsoflist);
    Print();
    }
    return 0;
}