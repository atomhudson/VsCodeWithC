#include<iostream>
#include<vector>
#include<unordered_set>
#include<cmath>
using namespace std;

struct TrieNode {
    TrieNode* children[10]; 
};

class Solution2 {
public:

    TrieNode* getTrieNode() {
        TrieNode* node = new TrieNode();
        for(int i = 0; i < 10; i++) {
            node->children[i] = nullptr;
        }

        return node;
    }

    void insert(int num, TrieNode* root) {
        TrieNode* crawl = root;
        string numStr = to_string(num);

        for(char ch : numStr) {
            int idx = ch - '0';
            if(!crawl->children[idx]) {
                crawl->children[idx] = getTrieNode();
            }

            crawl = crawl->children[idx];
        }
    }

    //returns the length of th elongest prefix
    int search(int num, TrieNode* root) {
        TrieNode* crawl = root;
        string numStr = to_string(num);
        int length = 0;

        for(char ch : numStr) {
            int idx = ch - '0';
            if(crawl->children[idx]) {
                length++;
                crawl = crawl->children[idx];
            } else {
                break;
            }
        }

        return length;
    }

    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        TrieNode* root = getTrieNode(); //TRIE

        for(int num : arr1) {
            insert(num, root);
        }

        int result = 0;
        for(int num : arr2) {
            result = max(result, search(num, root));
        }

        return result;
    }
};

class Solution{
public: 
    int longestCommonPrefix(vector<int> arr1, vector<int> arr2) {
        unordered_set<int> st;
        for (int val : arr1) {
            while (val > 0) {
                st.insert(val);
                val /= 10;
            }
        }
        int result = 0;
        for (int num : arr2) {
            int temp = num; 
            while (temp > 0) {
                if (st.find(temp) != st.end()) {
                    result = max(result, (int)(log10(temp)) + 1);
                    break;
                }
                temp /= 10;
            }
        }
        return result;
    }
};

int main() {
    Solution s;
    Solution2 ss;
    vector<int> arr1 = {1, 10, 100};
    vector<int> arr2 = {1000};

    cout << s.longestCommonPrefix(arr1, arr2) << endl;
    cout << ss.longestCommonPrefix(arr1, arr2) << endl;
    return 0;
}

