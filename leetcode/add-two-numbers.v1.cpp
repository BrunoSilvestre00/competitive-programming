#include <iostream>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
}

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int q, acc, s;
        while (l1.next)
        {
            
            s = l1.val + l2.val;
            
        }
    }
};

int main()
{

    cout << "It works :)" << endl;

    return 0;
}
