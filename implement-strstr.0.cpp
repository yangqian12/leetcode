#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int strStr(string haystack,string needle){
    int len1 = haystack.length();
    int len2 = needle.length();
    int i = 0;
    int j = 0;
    while(i < len1 && j < len2){
        if(haystack[i] == needle[j]){
            i++;
            j++;}
        else{
            i = i-j;
            j = 0;}

    }
    if ( j == len2)
        return i - j + 1;
    else
        return -1;
}
};

int main(){
    std::string s1 = "hello";
    std::string s2 = "ll";
    Solution s ;
    int a = s.strStr(s1, s2);
    std::cout << a << std::endl;
}
