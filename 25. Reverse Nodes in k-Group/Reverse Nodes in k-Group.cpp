#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *reverseKGroup(ListNode *head, int k)
{
    ListNode *h = head;
    int ind = 0;
    float Size = 0;
    int Counter = 0;
    if (k == 1)
        return h;
    while (h != nullptr)
    {
        Size++;
        h = h->next;
    }
    ListNode *List[(int)ceil(Size / k)][(int)k];
    h = head;
    while (h != nullptr)
    {
        List[Counter][ind] = h;
        ind++;
        if (ind == k)
        {
            ind = 0;
            Counter++;
        }
        h = h->next;
    }

    if (Counter == 0)
    {
        ind = 0;
        return head;
    }
    for (int j = 0; j < Counter; j++)
    {
        for (int i = k - 1; i > 0; i--)
        {
            List[j][i]->next = List[j][i - 1];
        }
        List[j][0]->next = nullptr;
    }

    for (int i = 0; i < Counter - 1; i++)
    {
        List[i][0]->next = List[i + 1][(int)k - 1];
    }

    if (Counter > 0 && ind != 0)
        List[Counter - 1][0]->next = List[Counter][0];

    return List[0][(int)k - 1];
}
int main()
{
    ListNode Node1(5);
    ListNode Node2(4, &Node1);
    ListNode Node3(3, &Node2);
    ListNode Node4(2);
    ListNode Node5(1, &Node4);
    ListNode *N = reverseKGroup(&Node5, 2);
    int i = 0;
    while (N != nullptr)
    {
        if (i == 8)
            break;
        cout << N->val << " ";
        N = N->next;
        i++;
    }
    cout << endl;
}