
#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    
    struct Node* reverseList(struct Node* list){
        Node *prev = NULL, *curr = list, *next = NULL;
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        first = reverseList(first);
        second = reverseList(second);
        
        int carry = 0;
        Node *head = NULL, *prev = NULL;
        Node *sum = NULL;
        
        while(first != NULL || second != NULL || carry == 1){
            
            int newVal = carry;
            
            if(first)
                newVal += first->data;
            if(second)
                newVal += second->data;
                
            carry = newVal / 10;
            newVal = newVal % 10;
            Node *newNode = new Node((sizeof(Node)));
            newNode->data = newVal;
            newNode->next = NULL;
            
            newNode->next = sum;
            sum = newNode;
            
            if(first)
                first->next;
            if(second)
                second->next;
            
        }
        return sum;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

