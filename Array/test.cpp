#include<iostream>

using namespace std;

bool isHZ(int a, int b,int c){
	if(a % b ==0 && a % c == 0 && b % c == 0)
		return false;
	return true;
}

int main(){
	int a,b,c;
	int n;
	int count = 0;				
	cin >> n;

	for(a = 3 ; a <= n ; a++){
		for(b = a + 1 ; b <= n ; b ++){
			for(c = b + 1 ; c <= n ; c++)
				if(a*a + b*b == c*c && isHZ(a,b,c))
					count++;
		}
	}
	cout << count << endl;
	return 0;
}