//给定字符串，反转该字符串中的无音字符（a,e,i,o,u）.
#include<iostream>
#include<string>

using namespace std;

string reverseVolwes(string s){
	int dict[256] = {0};
	dict['a'] = 1 , dict['A'] = 1;
	dict['e'] = 1 , dict['E'] = 1;
	dict['i'] = 1 , dict['I'] = 1;
	dict['o'] = 1 , dict['O'] = 1;
	dict['u'] = 1 , dict['U'] = 1;
    
    int left = 0 ;
    int right = s.size() - 1;
    while(left < right){
    	while(left < right && dict[s[left]] == 0) left++;
  		while(left < right && dict[s[right]] == 0) right--;
  		swap(s[left],s[right]);
  		left++;
  		right++;

    }
    return s;
}

int main(){

	string s = "accci";
	cout << reverseVolwes(s) <<endl;
};

//resunl : iccca .