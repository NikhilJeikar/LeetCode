#include<iostream>

using namespace std;
struct ListNode 
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
{
    ListNode *Prev = new ListNode(0,nullptr);
    ListNode *Head = Prev;
    while (l1 != nullptr && l2 != nullptr)
    {
        ListNode *Node = new ListNode();
        if(l1->val < l2->val)
        {
            Node->val = l1->val;
            Node->next = nullptr;
            //cout<<l1->val<<endl;
            l1 = l1->next;
        }
        else
        {
            Node->val = l2->val;
            Node->next = nullptr;
            //cout<<l2->val<<endl;
            l2 = l2->next;
        }
        if (Head == nullptr)
        {
            Prev = Node;
            Head = Node;
        }
        else
        {
            Prev->next = Node;
            Prev = Node;
        }
        
    }
    if(l1 != nullptr) Prev->next = l1;
    if(l2 != nullptr) Prev->next = l2;
    
    return Head->next;
}

int main()
{

ListNode Node = ListNode(4);
ListNode Node1 = ListNode(2,&Node);
ListNode Node2 = ListNode(1,&Node1);

ListNode RNode = ListNode(4);
ListNode RNode1 = ListNode(3,&RNode);
ListNode RNode2 = ListNode(1,&RNode1);
 
 ListNode* N = mergeTwoLists(&Node2,&RNode2);

 while (N != nullptr)
 {
     cout<<N->val<<endl;
     N = N->next;
 }
 
 
}