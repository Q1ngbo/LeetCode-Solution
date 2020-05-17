#include <iostream>
#include <vector>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *re = new ListNode(0);
        ListNode *head = re;
        while (l1&&l2)
        {
            if (l1->val>l2->val)
                swap(l1,l2);
            re->next=l1;
            l1=l1->next;
            re=re->next;
        }
        re->next=l1?l1:l2;
        return head->next;
    }
};