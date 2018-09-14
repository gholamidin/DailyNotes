//判断两个字符串是否同构
// egg ，add
// paper , title

#include<iostream>
#include<map>
using namespace std;

bool isIsomorphic(string s, string t){
	map<char,char>m1 ,m2;
	for (int i = 0; i < s.size(); ++i)
	{
		if(m1[s[i]] && m1[s[i]] != t[i] || m2[t[i]] && m2[t[i]] != s[i])
			return false;

	m1[s[i]] = t[i];
	m2[t[i]] = s[i];
	}
	return true;
}

int main(int argc, char const *argv[])
{
	string s = "egg" ;
	string t = "add" ;
	bool res = isIsomorphic(s,t);
	if (res)
		cout << "true";
	else
		cout << "false";
	return 0;
}