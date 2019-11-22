#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int len = s.length();
        int res = 0;
        for(int i = 0; i < len; i++){
            switch(s[i]){
                case 'M':  
                    if(res%1000 == 0) 
                        res = res + 1000;
                    else
                        res = (res-res%1000) + (1000 - res%1000);
                    break;
                case 'D':  
                    if(res%500 == 0)
                        res = res + 500;
                    else
                        res = (res-res%500) + 500 - res%500;
                    break;
                case 'C':  
                    if(res%100 == 0)
                        res = res + 100;
                    else
                        res = (res - res%100) + 100 - res%100;
                    break;
                case 'L':  
                    if(res%50 == 0)
                        res = res + 50;
                    else
                        res = (res - res%50) + 50 - res%50;
                    break;
                case 'X':  
                    if(res%10 == 0) 
                        res = res + 10;
                    else
                        res = (res - res % 10) + (10 - res%10);
                    break;
                case 'V':  
                    if(res%5 == 0)
                        res = res + 5;
                    else
                        res = (res - res % 5) + (5 - res%5);
                    break;
                case 'I':  res = res + 1; break;
            }
        }
        return res;
    }
};

int main() {
    Solution s;
    std::string input = "LVIII";
    std::cout << s.romanToInt(input) << std::endl;
    return 0;
}
