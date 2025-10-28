#include <iostream>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int num = 0, size = s.length();
        char curr, next;
        for(int i = 0; i < size; i++) {
            curr = s[i];
            next = i < size-1 ? s[i+1] : 'O';
            if (curr == 'M') {
                num += 1000;
            } else if (curr == 'D') {
                num += 500;
            } else if (curr == 'C') {
                num += 100 * (next == 'M' || next == 'D' ? -1 : 1);
            } else if (curr == 'L') {
                num += 50;
            } else if (curr == 'X') {
                num += 10 * (next == 'C' || next == 'L' ? -1 : 1);
            } else if (curr == 'V') {
                num += 5;
            } else if (curr == 'I') {
                num += 1 * (next == 'X' || next == 'V' ? -1 : 1);
            }
        }
        return num;
    }
};

int main(){
    cout << Solution().romanToInt("MCMXCIV") << endl;
    return 0;
}