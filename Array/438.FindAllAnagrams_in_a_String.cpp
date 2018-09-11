//给定一个字符串s和一个非空字符串p，找出p中所有是s的anagerams字符串的字串，返回这些字符串的索引。

#include<iostream>
#include<vector>
#include<string>
using namespace std;


vector<int> findAnagrams(string s, string p) {
    if (s.empty()) return {};
    vector<int> res, m(256, 0);
    int left = 0, right = 0, cnt = p.size(), n = s.size();
    for (char c : p) ++m[c];
    while (right < n) {
    	if (m[s[right++]]-- >= 1) --cnt;
        if (cnt == 0) res.push_back(left);
        if (right - left == p.size() && m[s[left++]]++ >= 0) ++cnt;
        }
        return res;
    }


int main(){
	string s = "cbaebabacd";
	string p = "abc";

	for (vector<int>::iterator it = findAnagrams(s,p).begin(); it != findAnagrams(s,p).end(); it++){
		cout << "["<<*it << "]";
		
	}

}