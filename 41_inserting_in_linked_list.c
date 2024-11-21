#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* createNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
}

void insertAtBegining(struct Node** head,int data){            // structure ka pointer jab bhi lo toh double pointer lo, warna pointer ka copy pass kr deta hai
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void insertAtEnd(struct Node** head,int data){
    struct Node* newNode = createNode(data);

    // handling empty list
    if(*head == NULL){
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
}

void insertAtPosition( int position, struct Node** head,int data){           // assuming position starts from 0
    struct Node* newNode = createNode(data);

    // handling empty list
    if(*head == NULL){
        *head = newNode;
        return;
    }

    if(position==0){
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    for(int i=0; temp != NULL && i<position-1;i++){
        temp = temp->next;
    }

    // dealing out of bound
    if(temp==NULL){
        printf("Index out of Bound");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void printLinkedList(struct Node** head){
    struct Node* temp = *head;
    int i=0;
    while(temp != NULL){
        printf("%d %x { data = %d , next = %x }\n",i,temp,temp->data,temp->next);
        temp = temp->next;
        i++;
    }
}

void freeLinkedList(struct Node** head){
    struct Node* temp = *head;
    struct Node* temp2 = *head;
    while(temp != NULL){
        temp2 = temp->next;
        free(temp);
        temp = temp2;
    }
}

int main(){
    struct Node* head = createNode(10);
    insertAtEnd(&head,20);
    insertAtPosition(1,&head,15);
    printLinkedList(&head);
    insertAtBegining(&head,5);
    printf("\n");
    printLinkedList(&head);
    freeLinkedList(&head);
}