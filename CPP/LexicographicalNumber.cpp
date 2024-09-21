#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void solve(int currNum, int limit, vector<int>& result) {
        if (currNum > limit) {
            return;
        }
        result.push_back(currNum);
        for (int i = 0; i <= 9; i++) {
            int newNum = currNum * 10 + i;
            if (newNum > limit) {
                return;
            }
            solve(newNum, limit, result);
        }
    }
    vector<int> lexicalOrder(int n) {
        vector<int> list;
        for (int i = 1; i <= 9; i++) {
            solve(i, n, list);
        }
        return list;
    }
};
int main()
{
    Solution s;
    vector<int> list = s.lexicalOrder(13);
    for(int i: list){
        cout<< i << " ";
    }
    return 0;
}