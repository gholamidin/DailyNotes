/*给定数组和数字s，找到数组中最短的连续子数组使子数组val之和sum>=s，返回子数组的长度
*/
#include<iostream>
#include<vector>

using namespace std;

int minSubarrayLen(int s ,vector<int> &nums){

	int l = 0 , r = -1;
	int sum = 0;
	int res = nums.size() - 1;
	while(l<nums.size()){
		if(sum < s && r+1 < nums.size())
		{
			r++;
			sum += nums[r]; 
		}
		else
		{
			l++;
			sum -= nums[l];
		}
		if(sum >=s)
			res = min(res,r-1+1);
	}
	if(res == nums.size()+1)
		return 0;
	return res;
}

int main(){
	vector<int> nums = {1,2,3,3,3,4,7,8,9};
	cout << minSubarrayLen(7,nums) << endl;
}


