//给定一个字符串，按照字母出现的频数重新排序。
//频次大的在前面。

#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

string frequencySort(string s){

	int len = s.size();
	unordered_map<char,int> hash;
	std::vector<string> vec(len+1,"");

	for(char c : s)
		hash[c]++;

	for(auto x : hash)
		vec[x.second].append(x.second,x.first);

	string ans;

	for (int i = len; i > 0 ; i--)
	{
		/* code */
		ans += vec[i];
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	string s = "tree";
	string res = frequencySort(s);
	cout << res ;
	return 0;
}