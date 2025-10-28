#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> findZeros(vector<int> &nums)
    {
        vector<int> indexes;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                indexes.push_back(i);
        }
        return indexes;
    }

    bool check(vector<int> &nums)
    {
        for (const int n : nums)
        {
            if (n)
                return false;
        }
        return true;
    }

    void runProcess(int curr, int dir, vector<int> &nums)
    {
        size_t size = nums.size();
        while (0 <= curr && curr < size)
        {
            if (nums[curr] > 0)
            {
                nums[curr]--;
                dir *= -1;
            }
            curr += dir;
        }
    }

    int countValidSelections(vector<int> &nums)
    {
        int validSelections = 0;
        for (const int i : this->findZeros(nums))
        {
            for (const int d : {-1, 1})
            {
                vector<int> aux = nums;
                runProcess(i, d, aux);
                validSelections += check(aux);
            }
        }
        return validSelections;
    }
};

int main()
{
    vector<int> a{2,3,4,0,4,1,0};
    cout << Solution().countValidSelections(a) << endl;
    return 0;
}