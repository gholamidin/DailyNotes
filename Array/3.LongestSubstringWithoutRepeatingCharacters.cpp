//abcabcbb => result = abc = 3;
#include<iostream>
#include<vector>

using namespace std;

int lengthofLongesSubstring(string s){

	int dict[256] = {0};
	int l = 0 , r = -1;
	int res = 0 ;
	while(l < s.size()){
		if(dict[s[r+1]] == 0 && r+1 < s.size()){
			dict[s[++r]]++;
		}
		else
			dict[s[l++]]--;
		res = max(res,r-l+1);
	}
	return res;
}

int main(){
	string characters = "abcabcbb";
	cout << lengthofLongesSubstring(characters) << endl;
}

//result : "abc" = 3.