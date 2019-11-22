/*#include<iostream>
#include<vector>
using namespace std;
*/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = nums.size();
        int i = 0;
        for(int j=i; j<len; j++){
            if(nums[j] != val){
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};

/*
int main(){
    Solution s;
    int list[10] = {1,2,3,5,3,2,5,7,8,8};
    vector<int> myvector;
    for(int i=0; i<10; i++){
        myvector.push_back(list[i]);
    }
    int res = s.removeElement(myvector, 2);
    cout << res << endl;
}
