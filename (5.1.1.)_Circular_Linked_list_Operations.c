#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

typedef struct node *NODE;

// Create a new node with given data
NODE createNodeInCLL(int data) {
    NODE temp = (NODE) malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

// Create CLL with n nodes
NODE createCLL( int n) {
 NODE first = NULL, temp = NULL, newnode;
    int x;

    for(int i = 0; i < n; i++) {
        scanf("%d", &x);

        newnode = (NODE)malloc(sizeof(struct node));
        newnode->data = x;
        newnode->next = NULL;

        if(first == NULL) {
            first = newnode;
            temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;