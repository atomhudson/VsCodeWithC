#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:

    vector<int> solve(string s){
        vector<int> result;
        for(int i = 0;i < s.length();i++){
            if (s[i] == '+' || s[i] == '-' || s[i] == '*')
            {
                vector<int> left_result = solve(s.substr(0,i));
                vector<int> right_result = solve(s.substr(i+1));
                for(int &a: left_result){
                    for(int &b: right_result){
                        if (s[i] == '+'){
                            result.push_back(a+b);
                        }
                        else if(s[i] == '-'){
                            result.push_back(a-b);
                        }else{
                            result.push_back(a*b);
                        }
                    }
                }
            }
        }
        if(result.empty()){
            result.push_back(stoi(s));
        }
        return result;
    }
    vector<int> diffWaysToCompute(string expression) {
        return solve(expression);
    }
};

int main()
{
    string s = "2*3-4*5";
    Solution sa;
    vector<int> list= sa.diffWaysToCompute(s);
    for (int &i : list)
    {
        cout<<i<<endl;
    }
    
    return 0;
}