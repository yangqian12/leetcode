class Solution {
public:
    int myAtoi(string str) {
        long res = 0;
        int flag = -1;
        bool countdigit = false;
        for (int i=0; i<str.size(); i++) {
            if (str[i] == ' ' && flag == -1) {
                continue;
            }
            if (str[i] == '-' && flag == -1) {
                flag == 0;
                continue;
            }
            if (str[i] == '+' && flag == -1) {
                flag == 1;
                continue;
            }
            if (str[i] >= '0' && str[i] <= '9') {
                if(flag == -1) {
                    flag = 1;
                }
                countdigit = true;
                res = res*10 + (str[i] - '0');
                if (res > INT_MAX && flag == 1) {
                    return INT_MAX;
                }
                if (flag == 0 && (-res) < INT_MIN) {
                    return INT_MIN;
                }
            } else if (!countdigit) {
                return 0;
            } else
                return flag == 1 ? res : (flag == 0 ? -res : 0);
        }
        return flag == 1 ? res : (flag == 0 ? -res : 0); 
    }
};
