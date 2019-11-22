class Solution {
public:
    int maxArea(vector<int>& height) {
        int k = 0;
        int n = height.size();
        int i = 0, j = n-1;
        while(i < j){
            k = max(k, (j-i)*min(height[j], height[i]));
            if (height[i] < height[j]) {
                i++;
            }
            else {
                j--;
            }
        }
        return k;
    }
};
