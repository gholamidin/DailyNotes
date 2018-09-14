//给定两个字符串是s，t判断s和t 是否为anagram 。

#include<iostream>
#include<map>

using namespace std;

bool isAnagram(string s,string t){

	if(s.length() != t.length())
		return false;

	map<int,int> Map;
	for (int i = 0; i < s.size(); ++i)
	{
		/* code */
		Map[s[i]]++;
	}
	for (int i = 0; i < t.size(); ++i)
	{
		/* code */
		if(--Map[t[i]] < 0)
			return false;
	}
	return true;
}

int main(int argc, char const *argv[])
{
	
	string s = "abcedfg";
	string t = "bcadfeg";
	if(isAnagram(s,t))
		cout << "true";
	else
		cout << "false";
	return 0;
}