// https://www.w3resource.com/c-programming-exercises/structure
#include<iostream>

using namespace std;

struct node {
    int data;
    node *next;
};

node *makenode(int x){
    node *Newnode = new node();
    Newnode->data = x;
    Newnode->next = NULL;
    return Newnode;
}

void duyet(node *head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

int count(node *head){
    int dem = 0;
    while (head != NULL){
        head = head->next;
        dem++;
    }
    return dem;
}

void pushFront(node **head, int x){
    node *newNode = makenode(x);
    // Bước 1: Phần next của newNode => *head
    newNode->next = *head;
    *head = newNode;
}

int main(){
    int a = 10;
    int *ptr;
    ptr = &a;
    cout << ptr;

    return 0;
}