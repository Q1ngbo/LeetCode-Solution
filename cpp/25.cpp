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
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        if (head == NULL)
            return NULL;
        vector<ListNode *> p;
        for (int i = 0; i < k; i++)
        {
            ListNode *q = NULL;
            p.push_back(q);
        }
        ListNode *pi = head;
        ListNode *pre = NULL;
        ListNode *h = NULL;
        while (pi != NULL)
        {
            for (int i = 0; i < k; i++)
            {
                p[i] = pi;
                if (pi != NULL)
                    pi = pi->next;
            }
            if (h == NULL && p[k - 1] != NULL)
                h = p[k - 1];
            if (p[k - 1] != NULL)
            {
                if (pre != NULL)
                    pre->next = p[k - 1];
                pre = p[0];
                p[0]->next = p[k - 1]->next;
                for (int i = k - 1; i > 0; i--)
                    p[i]->next = p[i - 1];
            }
        }
        if (h == NULL)
            return head;
        else
            return h;
    }
};
