
#include<iostream>
#include<vector>
#include<map>
using namespace std;

std::vector<int>intersect(std::vector<int> &nums1,std::vector<int> &nums2){
	map<int,int>record;
	std::vector<int> res;
	for(int i = 0 ; i < nums1.size() ; i++)
		record[nums1[i]]++; //频数加1

	for (int i = 0; i < nums2.size(); ++i)
	{
		if(record[nums2[i]] > 0 ){
			res.push_back(nums2[i]);
			record[nums2[i]]--;
		}
	}
	return res;
}

int main(int argc, char const *argv[])
{
	std::vector<int> nums1 = {1,2,3,4,5,6,7,7};
	std::vector<int> nums2 = {2,3,4,7};
	std::vector<int> res =intersect(nums1,nums2);
	for(std::vector<int>:: iterator i = res.begin() ; i != res.end() ; i ++)
		cout << *i <<",";
	return 0;
}