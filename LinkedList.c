#include<stdio.h>
#include<stdlib.h>

// Creating struct node
struct Node{
    int data;
    struct Node* next;
};


// Code to insert node at the beginning of the Linked List
struct Node* insert_at_beg(struct Node* head, int val){
    struct Node* x;
    x = (struct Node*)malloc(sizeof(struct Node));
    x -> next = head;
    x -> data = val;
    head = x;
    return head;
}


// Code to insert node at a desired position 
struct Node* insert(struct Node* head, int val, int pos){
    struct Node* temp = head;
    for(int i = 0; i < pos; ++i)
        temp = temp -> next;
    struct Node* x;
    x = (struct Node*)malloc(sizeof(struct Node));
    x -> next = temp -> next;
    temp -> next = x;
    x -> data = val;
    return head; 
}


//Code to insert node at the last of the Linked List
struct Node* insert_at_lst(struct Node* head, int val){
    struct Node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    struct Node* x;
    x = (struct Node*)malloc(sizeof(struct Node));
    temp -> next = x;
    x -> data = val;
    x -> next = NULL;
    return head;
}


// Printing all the node values starting from head
void print(struct Node* head){
    struct Node* temp = head;
    if(temp -> next == NULL){
        printf("%d->",temp -> data);
    }
    while(temp != NULL){
        printf("%d->",temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}



// Switch Case like function to take values as per the Users choice and do the needful
int main(){
    int first;
    struct Node* head;
    head = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter fist value:");
    scanf("%d", &first);
    head -> data = first;
    head -> next = NULL;
    while(1){
        printf("1.Insert at beginning\n2.Insert at end\n3.Insert at particular position\n4.Display\n69.End\n");
        int option;
        scanf("%d", &option);
        if(option == 1){
            int val;
            printf("Enter value:");
            scanf("%d", &val);
            head = insert_at_beg(head, val);
        }else if(option == 2){
            int val;
            printf("Enter value:");
            scanf("%d", &val);
            head = insert_at_lst(head, val);
        }else if(option == 3){
            int val, pos;
            printf("Enter value:");
            scanf("%d", &val);
            printf("Enter position:");
            scanf("%d", &pos);
            head = insert(head, val, pos);
        }else if(option == 4){
            print(head);
        }
        else if(option == 69){
            break;
        }
    }

}
