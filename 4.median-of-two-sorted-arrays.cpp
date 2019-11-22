class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int mid = (n1 + n2) / 2;
        int i=0, j=0, k=-1;
        int pre = n1 > 0 ? nums1[0] : nums2[0];
        int cur = pre;
        while(i < n1 && j < n2) {
            pre = cur;
            if (nums1[i] > nums2[j]) {
                cur = nums2[j];
                j++;
            }
            else {
                cur = nums1[i];
                i++;
            }
            k++;
            if(k == mid) {
                if((n1 + n2) % 2 != 0) {
                    return cur*1.0;
                }
                else {
                    return (pre + cur)/2.0;
                }
            }
        }
        while(i < n1) {
            pre = cur;
            cur = nums1[i];
            i++;
            k++;
            if(k == mid) {
                if((n1 + n2) % 2 != 0) {
                    return cur*1.0;
                }
                else {
                    return (pre + cur)/2.0;
                }
            }
        }
        while(j < n2) {
            pre = cur;
            cur = nums2[j];
            j++;
            k++;
            if(k == mid) {
                if((n1 + n2) % 2 != 0) {
                    return cur*1.0;
                }
                else {
                    return (pre + cur)/2.0;
                }
            }
        }
        return 0.0;
    }
    
};
