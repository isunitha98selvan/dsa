// Q: Check if a linked list is a palindrome.
// Algorithm
// 1) Get the middle of the linked list.
// 2) Reverse the second half of the linked list.
// 3) Check if the first half and second half are identical.
// 4) Construct the original linked list by reversing the second half again and attaching it back to the first half

#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
 };
ListNode* last = NULL; // keep track of the last element inserted

void printarr(ListNode* head)
{
    ListNode* current = head;
    while(current!=NULL)
    {
        cout<<current->val<<" ";
        current = current->next;
    }
}

void insert(ListNode** head_ref, int value)
{
    ListNode* new_node = new ListNode();
    new_node->val = value;
    new_node->next = NULL;
    if(*head_ref == NULL)
    {
        *head_ref = new_node;
        last = *head_ref;
        return;
    }
    last->next = new_node;
    last = last->next;
    return;
}

bool checkPalindrome(ListNode* head_ref)
{
    if(head_ref==NULL)
        return true;
    ListNode* ptr1 = head_ref;
    ListNode* ptr2 = head_ref->next;
    while(ptr2!=NULL && ptr2->next!=NULL)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next->next;
    }
    // cout<<ptr1->val;
    // ptr1 is the middle element
    // reverse the second half of linked list

    ListNode* current = ptr1->next;
    ListNode* prev = NULL;
    ListNode* next = NULL;

    while(current!=NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    ptr1->next = prev;
    // printarr(head_ref);

    //Compare first and second half of the array

    current = head_ref;
    ListNode* middle = ptr1->next;
    while(current!=ptr1->next && middle!=NULL)
    {
        if(current->val != middle->val)
            return false;
        current = current->next;
        middle = middle->next;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int element;
    ListNode* head = NULL;
    while(n>0)
    {
        cin>>element;
        insert(&head,element);
        n--;
    }
    // printarr(head);
    cout<<checkPalindrome(head);
}