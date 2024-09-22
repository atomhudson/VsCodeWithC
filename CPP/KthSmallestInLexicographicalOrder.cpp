#include<iostream>
using namespace std;

class Solution {
public:
    int Count (long curr, long next, int limit){
        int countNum = 0;
        while(curr <= limit){
            countNum += (next - curr);
            curr *= 10;
            next *= 10;
            next = min(next, long(limit+1));
        }
        return countNum;
    }
    int findKthNumber(int n, int k) {
        int curr = 1;
        k -= curr;
        while (k > 0){
            int countNum = Count(curr,curr+1,n);
            if (countNum <= k){
                curr++;
                k -= countNum;
            }else{
                curr *= 10;
                k -= 1;
            }
        }
        return curr;
    }
};
int main()
{
    Solution s;
    cout << s.findKthNumber(10,3);
    return 0;
}