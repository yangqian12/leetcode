/*#include<iostream>
#include<string>
using namespace std;
*/
class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() == 0) {
            return 0;
        }
        int len1 = haystack.length();
        int len2 = needle.length();
        int i = 0;
        int j = 0;

        int m = 0;
        int k = -1;
        int next[len2];
        next[0] = -1;

        while(m < len2 - 1){
            if(k == -1 || needle[k] == needle[m])
            {
                k++;
                m++;

                next[m] = k;
            }
            else
            {
                k = next[k];
            }

        }

        while(i < len1 && j < len2)
        {
            if(j == -1 || haystack[i] == needle[j])
            {
                i++;
                j++;
            }
            else
            {
                j = next[j];
            }
        }

        if(j == len2)
            return i-j;
        else
            return -1;
    }
};
/*int main()
{
    string s1 = "abcababcbac";
    string s2 = "abcba";
    Solution s;
    int a = s.strStr(s1, s2);
    cout << a << endl;
}*/
