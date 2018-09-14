//给出一个长整形数组nums，返回2个索引i，j，使得nums【i】+nums【j】 = target
//两个索引不能相等

#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

class Solution{

public:
	std::vector<int> twoSum(std::vector<int> &nums , int target){
		unordered_map<int,int> m ;
		for(int i = 0 ; i < nums.size() ; i++){
			int t = target - nums[i];
			if(m.count(t))
				return {i , m[t]};

			m[nums[i]] = i ;
		}

		return {};
	}
};

int main(int argc, char const *argv[])
{
	std::vector<int> nums = {1,2,3,4,5,6,7};
	int target = 10 ; 
	std::vector<int> res = Solution().twoSum(nums,target);
	for(std::vector<int>::iterator it = res.begin() ; it != res.end(); it++)
		cout << * it << ",";
	return 0;
}