class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        size_t length = numbers.size();
        int s, i = 0, j = length - 1;
        while (1)
        {
            s = numbers[i] + numbers[j];
            if (s < target)
            {
                i++;
            }
            else if (s > target)
            {
                j--;
            }
            else
            {
                return {i + 1, j + 1};
            }
        }
        return {};
    }
};