#include <stdio.h>
#include <stdlib.h>

struct LinkedList {
  int data;
  struct LinkedList *next;
};

typedef struct LinkedList node;

node *head = NULL;

//display the list
void printList() {

  node *current = head;

  printf("\n[head] =>");
 //To tranverse until the end of list 
  while(current != NULL) {        
      printf(" %d =>",current->data);
      current = current->next;
  }
  printf(" [null]\n");
}

void createList(int N)
{
    node *current = head;
    for(int i=0;i<N;i++){
        node *newnode = malloc(sizeof(node));
        printf("\n Enter the data at %d ",i+1);
        scanf("%d", &newnode->data);
        
        newnode->next = NULL;
    
        if(head==NULL)  {      //To check if the list is empty and newnode is the first node
            head = newnode;
            current = newnode;}
        else{
            while(current->next != NULL)           //To position the current pointer at the end of the previously created list
             current = current->next;
             
            current->next=newnode;
        }
    }
}

void insertFirst(int data)
{
    node *new = malloc(sizeof(node));
    
    new->next = head;
    new->data = data;
    
    head = new;
}

void insertAfter(int data, int after)
{
  node *current,*new = malloc(sizeof(node));
    
    current = head;
    
    //To search if the element is found or end of list is reached.
    while(current->data!=after && current->next!=NULL){      
        current=current->next;
    } 
    
    //To identify the condition that caused the previous while to terminate
    if(current->data!=after)                                 
      printf("Element %d cannot be found, %d cannot be inserted",after, data);
      else 
      {
   
   //Store the data at new, copy next of current to next of new , and point next of current to new
          new->next = current->next;
          new->data = data;
          current->next=new;
      }
       
}

int deleteFirst(){
    
    node *current=head;
    head = head->next;     //Make next of head as new head
    int d = current->data;
    free(current);     //Release the memory occupied by current.
    return d;
}

int delete(int data){
    
    node *prev,*current=head;
 
 //Store the addresses of current and previous nodes, until the element is found or end of list is reached 
    while(current->data!=data && current->next!=NULL){
        prev = current;
        current=current->next;
    } 
    
   
     if(current->data!=data)
     {
      printf("\n Element %d cannot be found",data);
      return 0;
     }
      else 
      {
          int d = current->data;
          prev->next = current->next;    //break the link between the current node and the two adjacent nodes
          free(current);
          return d;
      }
}


int main() {
    // insertFirst(5);
    // insertFirst(10);
  createList(3);
  insertAfter(35,30);
  insertAfter(25,20);
  insertAfter(15,10);
  
  
  printList();

  printf("\n The element deleted is %d",delete(30));
  printf("\n The element deleted is %d",delete(40));
  printf("\n The element deleted is %d",deleteFirst());
  printList();
  return 0;
}

