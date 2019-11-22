#include<iostream>
class Solution{
    public:
        bool isPalindrome(int x){
            if(x < 0 ||(x != 0 && x%10 == 0))   return false;
            else if(x == 0) return true;
            else{
                int rev = 0;
                while(x > rev){
                    int temp = x%10;
                    x = x/10;
                    rev = rev*10 + temp;
                }
                if(x == rev || x == rev/10) return true;
                else return false;
            }
        }
};

int main(){
    Solution s;
    int x = 1234321;
    bool result = s.isPalindrome(x);
    std::cout<<result<<std::endl;
}
