/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        return nums.size();
    }
};
/*
int main(){
    Solution s;
    int list[10] = {1,2,2,2,2,4,5,7,7,8};
    vector<int> myvector ;
    for(int i=0; i<10; i++){
        myvector.push_back(list[i]);}
    int a = s.removeDuplicates(myvector);
    cout << a << endl;}
