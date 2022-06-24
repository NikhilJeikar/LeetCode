#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);

int main()
{
ListNode LNode1(2);
ListNode LNode2(4,&LNode1);
ListNode LNode3(3,&LNode2);

ListNode RNode1(5);
ListNode RNode2(6,&RNode1);
ListNode RNode3(4,&RNode2);

ListNode *List = addTwoNumbers(&LNode3,&RNode3);
while (List != nullptr)
{
    cout<<List->val<<" ";
    List = List->next;
}

}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
    ListNode *Start = nullptr;
    ListNode *Prev = nullptr;
    int carry = 0;
    int set = 1;
    ListNode *ptr1 = l1 ,*ptr2 = l2;
    while (ptr1 != nullptr || ptr2 != nullptr)
    {
        
        int val1 = 0;
        int val2 = 0;

        if(ptr1 != nullptr)
        {
            val1 = ptr1->val;
            ptr1 = ptr1->next;
        }
        if(ptr2 != nullptr)
        {
            val2 = ptr2->val;
            ptr2 = ptr2->next;
        }

        int sum = val1 + val2 + carry;
        carry = 0;
        if(sum >= 10)
        {
            carry = int(sum/10);
            sum = sum %10;
        }
        
        ListNode *Var = new ListNode(sum);
        if(set == 1)
        {
            set = 0;
            Start = Var;
        }
        else
        {
            Prev->next = Var;
        }
        Prev = Var;
    }
    if(carry != 0)
    {
        ListNode *Var = new ListNode(carry);
        Prev->next = Var;
    }
    return Start;
}