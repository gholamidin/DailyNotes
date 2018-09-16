#include<iostream>
using namespace std;


int func(int n){
	int res = 0;
	if(n == 0)
		return res;
	while(n != 0){
		res += n*n;
		n--;
	}
	return res;
	return func(n-1);
}
	

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int res =func(n);

	cout << res;
	return 0;
}