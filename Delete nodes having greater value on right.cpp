/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    private: 
    Node* reverse(Node* head){
        if(!head) return head;
        Node* pre=NULL;
        Node* nxt;
        while(head){
            nxt = head->next;
            head->next = pre;
            pre = head;
            head = nxt;
        }
        return pre;
    }
    public:
    Node *compute(Node *head)
    {
        // your code goes here
        if(head == NULL) return head;
        Node* rev = reverse(head);
        Node* ans = new Node(-1);           // the first ele (actually the last one in original list)
        Node* ptr = ans;           // for moving to find the graeter ele
        while(rev){
            if(rev->data >= ptr->data){
                ptr->next = rev;            // creating ans list indirectly
                ptr = ptr->next;            // moving through the ans
            }
            rev = rev->next;
        }
        ptr->next = NULL;
        return reverse(ans->next);
    }
    
};
   