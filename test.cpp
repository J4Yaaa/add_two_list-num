ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    if(l1 == nullptr && l2 == nullptr)
    {
        return nullptr;
    }
    if(l1 == nullptr && l2 != nullptr)
    {
        return l2;
    }
    if(l1 != nullptr && l2 == nullptr)
    {
        return l1;
    }
    ListNode* cur1 = l1;
    ListNode* cur2 = l2;
    ListNode* new_head = nullptr;
    ListNode* new_tail = nullptr;
    int flag = 0;
    int low_bit = 0;
    int sum = 0;
    while(cur1 != nullptr || cur2 != nullptr)
    {
        if(cur1 != nullptr && cur2 != nullptr)
        {
            sum = cur1->val + cur2->val + flag;
        }
        else if(cur1 == nullptr && cur2 != nullptr)
        {
            sum = cur2->val + flag;
        }
        else if(cur1 != nullptr && cur2 == nullptr)
        {
            sum = cur1->val + flag;
        }
        low_bit = sum % 10;
        ListNode* new_node = new ListNode(low_bit);
        if(new_head == nullptr)
        {
            new_head = new_node;
            new_tail = new_head;
        }
        else
        {
            new_tail->next = new_node;
            new_tail = new_tail->next;
        }
        flag = 0;
        if(sum >= 10)
        {
            flag = 1;
        }

        if(cur1 != nullptr)
        {
            cur1 = cur1->next;
        }
        if(cur2 != nullptr)
        {
            cur2 = cur2->next;
        }
    }
    if(flag != 0)
    {
        new_tail->next = new ListNode(1);
    }
    return new_head;
}
