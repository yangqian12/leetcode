#include<iostream>
#include<vector>
#include <string>

class Solution{
public:
    std::vector<std::string> fizzBuzz(int n){
        int i = 1;
        std::vector<std::string> x;
        while(i <= n){
            if( i%3 == 0 && i%5 != 0){
                x.push_back("Fizz"); ;
            }
            else if( i%3 != 0 && i%5 == 0){
                x.push_back("Buzz");
            }
            else if( i%3 == 0 && i%5 == 0){
                x.push_back("FizzBuzz");
            }
            else{
                x.push_back(std::to_string(i));}
            i++;
        }
        return x;
    }

};

int main(){
    Solution s;
    int n = 30;
    std::vector<std::string> x = s.fizzBuzz(n);
    for(std::vector<std::string>::iterator it = x.begin(); it != x.end(); ++it){
        std::cout << *it << std::endl;
        }
}
