#include <stdio.h>
#include <stdlib.h>

//node structure
struct Node {
  int data;
  struct Node* next;
  struct Node* prev;
};

// test the code  
int main() {
  //create the head node with name MyList
  struct Node* MyList = NULL;

  //Add first node.
  struct Node* first;
  //allocate second node in the heap
  first = (struct Node*)malloc(sizeof(struct Node));  
  first->data = 10;
  first->next = NULL;
  first->prev = NULL;
  //linking with head node
  MyList = first;
  //linking next of the node with head
  first->next = MyList;  
  //linking prev of the head 
  MyList->prev = first; 

  //Add second node.
  struct Node* second;
  //allocate second node in the heap
  second = (struct Node*)malloc(sizeof(struct Node));  
  second->data = 20;
  second->next = NULL;
  //linking with first node
  second->prev = first;
  first->next = second;
  //linking next of the node with head
  second->next = MyList; 
  //linking prev of the head 
  MyList->prev = second;

  //Add third node.
  struct Node* third;
  //allocate third node in the heap
  third = (struct Node*)malloc(sizeof(struct Node));  
  third->data = 30;
  third->next = NULL;
  //linking with second node
  third->prev = second;
  second->next = third; 
  //linking next of the node with head
  third->next = MyList;
  //linking prev of the head 
  MyList->prev = third; 

  return 0; 
}
