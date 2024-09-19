#include<iostream>
#include<string>
using namespace std;
// Character Arrays: Need to Know size beforehand.
//                 : Larger size required for operations.
//                 : No terminating extra character.

// Strings: No need to know size beforehand.
//        : Performing operations like concatenation & append in easier.
//        : Terminated with a speacial character '\0'.
int main()
{
    string str;
    cin >> str;
    cout << str << endl;
    getline(cin,str);
    cout<<str << endl;
    string s1 = "fam";
    string s2 = "ily";
    s1.append(s2);
    cout<< s1 <<endl;
    string s3 = "ldnflsdlfklsdklfjklsf";
    cout << *(s3.begin())<<endl;
    cout << *(s3.end()-1);
    return 0;
}