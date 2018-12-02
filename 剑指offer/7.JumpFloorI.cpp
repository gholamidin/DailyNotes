class Solution {
public:
    int jumpFloor(int number) {
        int zero = 0;
        int one = 1;
        while(number--){
            one = zero + one;
            zero = one - zero;
        }
        return one;
    }
};
