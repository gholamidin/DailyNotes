/*
Given an array with n objects colored red, white or blue, sort them so that objects of the same color are adjacent, with the colors in the order red, white and blue.

Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

Note:
You are not suppose to use the library's sort function for this problem.

click to show follow up.

Follow up:
A rather straight forward solution is a two-pass algorithm using counting sort.
First, iterate the array counting number of 0's, 1's, and 2's, then overwrite array with total number of 0's, then 1's and followed by 2's.

Could you come up with an one-pass algorithm using only constant space?

 

这道题的本质还是一道排序的题，题目中给出提示说可以用计数排序，需要遍历数组两遍，那么先来看这种方法，因为数组中只有三个不同的元素，所以实现起来很容易。

- 首先遍历一遍原数组，分别记录0,1,2的个数
- 然后更新原数组，按个数分别赋上0，1，2
*/
class Solution {
public:
    void sortColors(int A[], int n) {
        int count[3] = {0}, idx = 0;
        for (int i = 0; i < n; ++i) ++count[A[i]];
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < count[i]; ++j) {
                A[idx++] = i;
            }
        }
    }
};

//solution 2

class Solution {
public:
    void sortColors(int A[], int n) {int red = 0, blue = n - 1;
        for (int i = 0; i <= blue; ++i) {
            if (A[i] == 0) {
                swap(A[i], A[red++]);
            } else if (A[i] == 2) {
                swap(A[i--], A[blue--]);
            } 
        }
    }
};