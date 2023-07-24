/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/


class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     unordered_map<int, int> freq;
    Node* temp = head;
    freq[temp->data]=1;
    while(temp->next!=NULL){
        if(freq.count(temp->next->data)){
            temp->next = temp->next->next;
        }
        else{
            temp = temp->next;
            ++freq[temp->data];
        }
    }
    return head;
    }
};