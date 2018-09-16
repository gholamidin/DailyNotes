#include<iostream>
#include<vector>
#include<string>
#define NDEBUG
#include<assert.h>

using namespace std;

class Solution{
private:
	const string letterMap[10] = {
		  "",  "abc", "def", //123
		"ghi", "jkl", "mno", //456
		"pqrs","tuv", "wxyz",//789
		       " "            //0
	};
	vector<string> res;
	void findCombination(const string &digits , int index , const string &s){
		char c = digits[index];
		assert(c >= '0' );
		assert(c <= '9' );
		assert(c != '1' );
		string letters = letterMap[c-'0'];
		for(int i = 0 ; i  < letters.size() ; i++)
			findCombination(digits,index+1,s+letters[i]);
		if(index == digits.size()){
			res.push_back(s);
			return;
		}
	}


public:
	vector<string> letterCombination(string digits){
		
		if(digits == "")
			return res;
		findCombination(digits,0,"");
		return res;
	}


};


int main(int argc, char const *argv[])
	{
		vector<string>res = Solution().letterCombination("23");
		for(int i = 0 ; i < res.size() ; i++)
			cout << res[i] <<endl; 
		return 0;
	}




