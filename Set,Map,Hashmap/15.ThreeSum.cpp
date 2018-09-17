//给出一个整形数组，寻找其中所有不同的三元组（a，b，c）使得a+b+C = 0；
#include<iostream>
#include<vector>

using namespace std;

class solutin
{
public:
	solutin();
	~solutin();
	vector<vector<int>> ThreeSum(std::vector<int> &nums){
		vector<vector<int>> res;
		sort(nums.begin(),nums.end());//从小到大排序。
		for(int k = 0 ; k < nums.size() ;k++){
			if(nums[k] > 0 ) break;
			if(k > 0 && nums[k] == nums[k-1]) continue;
			int target = 0 - nums[k];
			int l = k + 1;
			int r = nums.size()-1;
			while(l < r){
				if(nums[l] + nums[r] == target){
					res.push_back({nums[k],nums[l],nums[r]});
					while(l<r && nunms[l] == nums[l+1]) ++l;
					while(l<r && nunms[r] == nums[r-1]) r--;
					l++;
					r--;

				}
				else if(nums[l] + nums[r] < target) l++;
				else
					r--;
			}
			return res;
		}
	}
	
};