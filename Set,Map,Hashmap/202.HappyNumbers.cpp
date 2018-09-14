//happyNumbers是指一个数字，将其替换为个 位数的平方和，并一直重复这个过程
//最终数的和得到1.
//19 = 1^2 + 9^2 = 82
//     8^2 + 2^2 = 68....
#include<iostream>
#include<unordered_set>

using namespace std;

class Solution
{

private:

int Calculate(int n){

	int sum = 0 ; 
	while(n != 0 ){
		sum += ( n % 10) * ( n % 10 );
	    n = n/10;
	}
	return sum;
}

public:
	 	
bool isHappyNumber(int n ){

	unordered_set<int> s; //s中记录所有出现过的数字。
	while(true){
		if(n == 1)
			return true;
		if(s.find(n) != s.end())  //若set中存在n，返回false
			return false;
		else
			s.insert(n);
		n = Calculate(n);

	}
} 

};

int main()
{

	int n = 19;
	bool res = Solution().isHappyNumber(n);
	if (res)
	{
	cout << "true";
	}
	else
		cout << "false";
	return 0;
}