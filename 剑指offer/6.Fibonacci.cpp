class Solution {
public:
    int Fibonacci(int n) {
        int first = 0 ;
        int second = 1;
        while(n--){
            second = first+second;
            first = second - first;
        }
        return first;
    }
};
