class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        Node* zeroHead = new Node(-1);
        Node* zeroTail = zeroHead;
        
        Node* oneHead = new Node(-1);
        Node* oneTail = oneHead;
        
        Node* twoHead = new Node(-1);
        Node* twoTail = twoHead;
        
        while(head){
            if(head->data == 0)
            {
                zeroTail->next = head;
                zeroTail = zeroTail->next;
            }
            else if(head->data == 1){
                oneTail->next = head;
                oneTail = oneTail->next;
            }
            else 
            {
                twoTail->next = head;
                twoTail = twoTail->next;
            }
            
            head = head->next;
        }
        
        if(oneHead->next != NULL)       // if there are 1s
        {
            zeroTail->next = oneHead->next;
            oneTail->next = twoHead->next;
        }
        else                // if there is no 1s just directly point to 2s
        {
            zeroTail->next = twoHead->next;
        }
        
        twoTail->next = NULL;
        
        return zeroHead->next;
    }
};