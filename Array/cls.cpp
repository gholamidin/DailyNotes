#include<vector>
#include<iostream>

using namespace std;

int LCMofTwoNumbers(int a,int b){

	int res = a ;
	if(a == 0 || b == 0 ) return 0;
	
	while(res % b != 0 || res % a != 0){
		res++;
	}
	return res;
}

int LCM(vector<int> nums){
	
	if(nums.size() < 3) return 0;

	int res = nums[0];
	for (int i = 1; i < nums.size(); ++i){

		res = LCMofTwoNumbers(res,nums[i]);
	}
	return res;

}

int main(){
	int n;
	cin >> n;
	std::vector<int> res;
	std::vector<int> v;
    

    for(int m = 1 ; m < 1000000 ; m++)
		for(int i = 1 ; i < m ; i++){
		while(n < m){	
			res.push_back(n+i);
			v.push_back(m);
		}
	}
	int res 1 = LCM(res);
	int res 2 = LCM(v);
	if(res1 == res2)
		cout << m;
}