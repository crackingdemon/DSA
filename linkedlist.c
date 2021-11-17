#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

//display the list
void printList() {

   struct node *ptr = head;

   printf("\n[head] =>");
   //start from the beginning
   while(ptr != NULL) {        
      printf(" %d =>",ptr->data);
      ptr = ptr->next;
   }

   printf(" [null]\n");
}

//insert link at the first location
void insert(int data) {
   //create a link
   struct node *link = (struct node*) malloc(sizeof(struct node));

   //link->key = key;
   link->data = data;

   //point it to old first node
   link->next = head;

   //point first to new first node
   head = link;
}

int main() {
   insert(10);
   insert(20);
   insert(30);
   insert(1);
   insert(40);
   insert(56); 

   printList();
   return 0;
}




///


#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

//display the list
void reverse_print(struct node *list) {
   if(list == NULL) {
      printf("[null] => ");
      return;
   }
   
   reverse_print(list->next);
   printf(" %d =>",list->data);
   
}

//Create Linked List
void insert(int data) {
   // Allocate memory for new node;
   struct node *link = (struct node*) malloc(sizeof(struct node));

   link->data = data;
   link->next = NULL;

   // If head is empty, create new list
   if(head==NULL) {
      head = link;
      return;
   }

   current = head;
   
   // move to the end of the list
   while(current->next!=NULL)
      current = current->next;

   // Insert link at the end of the list
   current->next = link; 
}

int main() {
   insert(10);
   insert(20);
   insert(30);
   insert(1);
   insert(40);
   insert(56); 

   reverse_print(head);
   return 0;
}






///

#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

//Create Linked List
void insert(int data) {
   // Allocate memory for new node;
   struct node *link = (struct node*) malloc(sizeof(struct node));

   link->data = data;
   link->next = NULL;

   // If head is empty, create new list
   if(head==NULL) {
      head = link;
      return;
   }

   current = head;
   
   // move to the end of the list
   while(current->next!=NULL)
      current = current->next;
   
   // Insert link at the end of the list
   current->next = link; 
}

void size_of_list() {
   int size = 0;
   
   if(head==NULL) {
      printf("List size : %d ", size);
      return;
   } 

   current = head;
   size = 1;
   while(current->next!=NULL) {
      current = current->next;
      size++;
   }
   printf("List size : %d ", size);
}

int main() {
   insert(10);
   insert(20);
   insert(30);
   insert(1);
   insert(40);
   insert(56); 

   size_of_list();
   return 0;
}



///



#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

//Create Linked List
void insert(int data) {
   // Allocate memory for new node;
   struct node *link = (struct node*) malloc(sizeof(struct node));

   link->data = data;
   link->next = NULL;

   // If head is empty, create new list
   if(head==NULL) {
      head = link;
      return;
   }

   current = head;
   
   // move to the end of the list
   while(current->next!=NULL)
      current = current->next;
   
   // Insert link at the end of the list
   current->next = link; 
}

void find_data(int item) {
   int pos = 0;
   
   if(head==NULL) {
      printf("Linked List not initialized");
      return;
   } 

   current = head;
   while(current->next!=NULL) {
      if(current->data == item) {
         printf("%d found at position %d\n", item, pos);
         return;
      }
      
      current = current->next;
      pos++;
   }
   
   printf("%d does not exist in the list", item);
}

int main() {
   insert(10);
   insert(20);
   insert(30);
   insert(1);
   insert(40);
   insert(56); 

   find_data(40);
   find_data(44);
   
   return 0;
}