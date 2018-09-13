//求两个数组中的公共元素
#include<iostream>
#include<vector>
#include<set>

using namespace std;

std::vector<int> intersection(std::vector<int> nums1,std::vector<int> nums2){
	set<int>record;
	for(int i = 0 ; i < nums1.size() ; i++)
		record.insert(nums1[i]);
	set<int> resultSet;
	for(int i = 0 ; i < nums2.size() ;i++)
		if(record.find(nums2[i]) != record.end())
			resultSet.insert(nums2[i]);

	std::vector<int> res;
	for(set<int>::iterator it = resultSet.begin() ; it != resultSet.end() ; it++){
		
		res.push_back(*it);
	}

	return res;
}

int main(){

	std::vector<int> nums1 = {1,2,3,4,5,6,7};
	std::vector<int> nums2 = {2,3,5};
	vector<int>res = intersection(nums1,nums2);
	for(std::vector<int> ::iterator it = res.begin(); it != res.end() ; it ++)
		cout << *it << ",";
	//cout << " 你好吗？" << endl;
}