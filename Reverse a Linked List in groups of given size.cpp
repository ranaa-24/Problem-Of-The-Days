class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        struct node* next;
        struct node* prev = NULL;
        struct node* curr = head;
        
        int c = 0;
        
        while(c < k && curr != NULL){     // reverse in k
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            c++;
        }
        
        if(next != NULL)
            head->next = reverse(next, k);
        
        return prev;
    }
};