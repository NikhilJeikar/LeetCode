#include<iostream>

using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

inline void Swap(ListNode *Prev,ListNode *Cur , ListNode *Next)
{
    Prev->next = Next;
    Cur->next = Next->next;
    Next->next = Cur;
}
ListNode* swapPairs(ListNode* head) 
{
 ListNode *Head = new ListNode(0,head);
 if(Head->next == nullptr) return head;
    head = Head;
 while (Head != nullptr && Head->next != nullptr && Head->next->next !=  nullptr)
 {
     Swap(Head, Head->next, Head->next->next);
     Head = Head->next->next;
 }
 
 return head->next;
}
int main()
{
ListNode Node4 = ListNode(4);
ListNode Node3 = ListNode(3,&Node4);
ListNode Node2 = ListNode(2,&Node3);
ListNode Node1 = ListNode(1,&Node2);
ListNode *Node = swapPairs(&Node1);
while (Node != nullptr)
{
    cout<<Node->val<<endl;
    Node = Node->next;
}
}