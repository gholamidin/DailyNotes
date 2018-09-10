//给定一个字符串，返回该字符串的倒序字符串。

#include<iostream>
#include<string>
#include<sstream>

using namespace std;

string reverseString(string s){
	int left = 0 ,right = s.size()-1;
	while(left < right)
		swap(s[left++],s[right--]);
	return s;
}

int main(){
	string s ="1,2,3,4,5,6,7,8,9";
	

	cout<< reverseString(s) << " " <<endl;
	return 0;
};

//result : 9,8,7,6,5,4,3,2,1 .
