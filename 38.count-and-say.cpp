#define __TEST__

# ifdef __TEST__
#include<iostream>
#include<string>
using namespace std;
#endif

class Solution {
public:
    string countAndSay(int n) {
       string str = "1";
       for(int i=2; i<=n; i++){
           string temp = "";
           for(auto it = str.begin(); it!=str.end(); ) {
               char c = *it;
               int count = 0;
               for(auto& it2 = it; it2 != str.end() && *it2 == c; it2++) {
                   count++;
               }
               temp += to_string(count) + c;
           }
           str = temp;
       }
       return str;
    }
};

#ifdef __TEST__
int main(){
    Solution s;
    for (int i = 0; i < 10; ++i) {
        string result = s.countAndSay(i);
        cout << result << endl;
    }
}
#endif
