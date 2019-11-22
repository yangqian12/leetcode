#include<iostream>
#include<string>
#include<stack>
using namespace std;
class Solution{
    public:
        int RomanToInt(string s){
            int len = s.length();
            int result = 0;
            stack<char> st;
            for(int i=0; i<len; i++){
                if(st.empty()) {
                    st.push(s[i]);
                } else{
                    char x = st.top();
                    if(s[i] == 'M'){
                        if(x == 'C') {
                            st.pop();
                            result += 900;
                        } else
                            st.push(s[i]);
                    }
                    else if(s[i] == 'D'){
                        if(x == 'C') {
                            st.pop();
                            result += 400;
                        } else
                            st.push(s[i]);
                    }
                    else if(s[i] == 'L'){
                        if(x == 'X') {
                            st.pop();
                            result +=  40;
                        } else
                            st.push(s[i]);
                    }
                    else if(s[i] == 'C'){
                        if(x == 'X') {
                            st.pop();
                            result += 90;
                        } else
                            st.push(s[i]);
                    }
                    else if(s[i] == 'X'){
                        if(x == 'I') {
                            st.pop();
                            result += 9;
                        } else
                            st.push(s[i]);
                    }
                    else if(s[i] == 'V'){
                        if(x == 'I') {
                            st.pop();
                            result += 4;
                        } else
                            st.push(s[i]);
                    }
                    std::cout <<result<< std::endl;
                }
            while(!st.empty()){
                char x = st.top();
                st.pop();
                if(x == 'M')
                    result += 1000;
                if(x == 'D')
                    result += 500;
                if(x == 'C')
                    result += 100;
                if(x == 'L')
                    result += 50;
                if(x == 'X')
                    result += 10;
                if(x == 'V')
                    result += 5;
                if(x == 'I')
                    result += 1;
            }
            return result;
            }
        };
};

int main(){
    string input = "MCMXCIV";
    Solution s;
    int output = s.RomanToInt(input);
    std::cout << output << std::endl;
}




