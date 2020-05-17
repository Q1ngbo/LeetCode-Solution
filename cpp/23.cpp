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
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        int num = lists.size();
        if(num==0)
            return NULL;
        ListNode *list = new ListNode(0);
        ListNode *head = list;
        ListNode **p = new ListNode *[num];
        for (int i = 0; i < num; i++)
            p[i] = lists[i];
        bool isFirst = true;
        while (true)
        {
            int min,min_data;
            bool flag = false;
            for (int f = 0; f < num; f++)
            {
                if (p[f] == NULL)
                    continue;
                else if(!flag)
                {
                    min=f;
                    min_data=p[f]->val;
                }
                if (p[f]->val < min_data)
                {
                    min = f;
                    min_data=p[f]->val;
                }
                flag = true;
            }
            if (!flag)
                break;
            ListNode *n = new ListNode(min_data);
            if (isFirst)
            {
                list->val = n->val;
                isFirst = false;
            }
            else
            {
                list->next = n;
                list = list->next;
            }
            p[min] = p[min]->next;
        }
        if(isFirst)
            return NULL;
        return head;
    }
};

int main()
{
    Solution so;
    vector<ListNode *> list;
    int n, m, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        bool flag = true;
        ListNode *l = new ListNode(0);
        ListNode *head = l;
        for (int j = 0; j < m; j++)
        {
            cin >> a;
            if (flag)
            {
                l->val = a;
                flag = false;
            }
            else
            {
                ListNode *q = new ListNode(a);
                l->next = q;
                l = l->next;
            }
        }
        list.push_back(head);
    }
    ListNode *re = so.mergeKLists(list);
    while (re != NULL)
    {
        cout << re->val << ",";
        re = re->next;
    }
    system("pause");
    return 0;
}