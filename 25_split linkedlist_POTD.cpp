
https://leetcode.com/problems/split-linked-list-in-parts/description/?envType=daily-question&envId=2023-09-06

class Solution
{
public:
    vector<ListNode *> splitListToParts(ListNode *head, int k)
    {
        vector<ListNode *> ans(k, nullptr);

        int l = 0;
        for (ListNode *node = head; node; node = node->next)
            l++;
        int n = l / k, r = l % k;

        ListNode *node = head, *prev = nullptr;

        for (int i = 0; node && i < k; i++, r--)
        {

            ans[i] = node;
            for (int j = 0; j < n + (r > 0); j++)
            {
                prev = node;
                node = node->next;
            }

            prev->next = nullptr;
        }

        return ans;
    }
};
