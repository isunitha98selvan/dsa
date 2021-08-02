// Find kth last element of a singly linked list

#include <iostream>
using namespace std;

struct Node{
    int val;
    Node* next;
};

Node* findKthLast(Node*head, int k) {
    Node* curr = head;
    int count=0;
    while(curr!=NULL){
        count++;
        curr = curr->next;
    }
    curr = head;
    for(int i=0;i<count-k;i++){
        curr = curr->next;
    }
    return curr;
}

Node* findKthLastAdv(Node* head, int k){
    Node* p1 = head;
    Node* p2 = head;
    for(int i=0;i<k;i++){
        p2 = p2->next;
    }
    while(p1 && p2){
        p1 = p1->next;
        p2 = p2->next;
    }
    return p1;
}
Node* insert(Node* head, int val)
{
    Node* new_node = new Node();
    new_node->val = val;
    new_node->next = head;
    head = new_node;
    return head;
}

int main(){
    Node* head = insert(NULL,3);
    head = insert(head,4);
    head = insert(head,6);
    head = insert(head,9);
    head = insert(head,14);
    Node* curr = findKthLastAdv(head,3);
    cout<<curr->val<<endl;
}