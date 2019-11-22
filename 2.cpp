#include<iostream>
#include<climits>
class solution{
    public:
        int reverse(int x)
        {
            int ver = 0;
            while(x != 0 ){
                int temp = x % 10;
                x = x/10;
                if(ver > INT_MAX/10 ||( ver == INT_MAX/10 && temp > 7)) return 0;
                if(ver < INT_MIN/10 ||( ver == INT_MIN/10 && temp < -8)) return 0;
                ver = ver*10 + temp;
            }
            return ver;
        }
};

int main(){
    solution s;
    int x = -12345;
    int result = s.reverse(x);
    std::cout<<x<<result<<std::endl;
}
