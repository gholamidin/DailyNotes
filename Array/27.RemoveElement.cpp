/*Given an array and a value, remove all instances of that value in place and return the new length.
The order of elements can be changed. It doesn't matter what you leave beyond the new length.
这道题让我们移除一个数组中和给定值相同的数字，并返回新的数组的长度。是一道比较容易的题，我们只需要一个变量
用来计数，然后遍历原数组，如果当前的值和给定值不同，我们就把当前值覆盖计数变量的位置，并将计数变量加1。代码如下：
*/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size() == 0)
            return 0;
        int i = 0; 
        for(int j = 0 ; j < nums.size() ; j++)
            if(nums[j] != val){
                nums[i] = nums[j];
                i++;  
            }
            return i;
    }

};