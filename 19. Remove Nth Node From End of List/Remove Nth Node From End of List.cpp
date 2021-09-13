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
 
ListNode* removeNthFromEnd(ListNode* head, int n) 
{
    int size = 0;
    ListNode* Head = head;
    ListNode *List[30] = {nullptr};
    
    while (Head != nullptr)
    {
        List[size] = Head;
        size++;
        Head = Head->next;    
    }

    if(size - n == 0)return List[1];
    List[size - n -1 ]->next = List[size - n + 1];
    return head;
}

int main()
{
ListNode Node5 = ListNode(5);
ListNode Node4 = ListNode(4,&Node5);
ListNode Node3 = ListNode(3,&Node4);
ListNode Node2 = ListNode(2,&Node3);
ListNode Node1 = ListNode(1,&Node2);
removeNthFromEnd(&Node1,2);

ListNode Node7 = ListNode(2);
ListNode Node6 = ListNode(1,&Node7);
removeNthFromEnd(&Node6,2);
}