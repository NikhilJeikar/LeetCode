#include<iostream>
#include<vector>
using namespace std;

struct ListNode {
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
            l1 = l1->next;
        }
        else
        {
            Node->val = l2->val;
            Node->next = nullptr;
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

ListNode* mergeKLists(vector<ListNode*>& lists) 
{
    if(lists.size() > 0)
    {
        int amount = lists.size();
        int interval = 1;
        while(interval < amount)
        {
            for (int i = 0; i < amount - interval; i = 2*interval + i)
            {
                lists[i]=mergeTwoLists(lists[i] , lists[i+interval]);
            }
            interval = 2 * interval;
            
        }
        return lists[0];
    }
    else
    {
        return {};
    }

}


int main()
{
ListNode Node13(5);
ListNode Node12(4,&Node13);
ListNode Node11(1,&Node12);

ListNode Node23(4);
ListNode Node22(3,&Node23);
ListNode Node21(1,&Node22);

ListNode Node32(6);
ListNode Node31(2,&Node12);

vector<ListNode*> Vec = {&Node11,&Node21,&Node31};
ListNode *Fin = mergeKLists(Vec);
while(Fin != nullptr)
{
    cout<<Fin->val<<endl;
    Fin = Fin->next;
}
}