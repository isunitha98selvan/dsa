// Remove duplicates from an unsorted linked list without buffer
#include <iostream>

using namespace std;

struct Node{
    int val;
    Node* next;
};

Node* insert(Node* head, int val)
{
    Node* new_node = new Node();
    new_node->val = val;
    new_node->next = head;
    head = new_node;
    return head;
}
Node* remove_duplicates(Node* head){
    Node* curr = head;
    while(curr!=NULL){
        Node* runner = curr;;
        while(runner->next){
            if(curr->val == runner->next->val){
                runner->next = runner->next->next;
            }
            else{
                runner = runner->next;
            }
        }
        curr = curr->next;
    }
    return head;
}
int main(){
    Node*head = insert(NULL,3);
    head = insert(head,4);
    head = insert(head,6);
    head = insert(head,4);
    head = insert(head,3);

    head = remove_duplicates(head);
    while(head!=NULL){
        cout<<head->val<<endl;
        head = head->next;
    }
}