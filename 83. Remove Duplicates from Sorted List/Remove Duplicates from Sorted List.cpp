ListNode* deleteDuplicates(ListNode* head) 
{
    set<int,less<int>> Set;
    ListNode *Head = nullptr;
    ListNode *Cur = Head;
    while (head != NULL)
    {
        if(Set.find(head->val) == Set.end())
        {
            ListNode *node =  new ListNode(head->val);
            if(Head == nullptr)
            {
                Head = node;
            }
            if(Cur != nullptr)
            {
                Cur->next = node;
            }
            Cur = node;
        }
        Set.insert(head->val);
        head = head->next;
    }
    return Head;
    
}