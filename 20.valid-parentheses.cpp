/*#include<iostream>
#include<string>
#include<stack>
using namespace std;
*/
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.length(); i++) {
            if (st.empty()) {
                st.push(s[i]);
            } else {
                char c = st.top();
                if((s[i] == ')' && c == '(') 
                        || (s[i] == ']' && c == '[') 
                        || (s[i] == '}' && c == '{')) {
                    st.pop();
                } else {
                    st.push(s[i]);
                }
            }
        }
        if (st.empty()) {
            return true;
        } else {
            return false;
        }

    }
};
/*
int main(){
    Solution s;
    string s1 = "[]][]())";
    bool a = s.isValid(s1);
    cout << a << endl;}*/
