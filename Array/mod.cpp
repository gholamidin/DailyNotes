#include<iostream>

using namespace std;

int main(){

	int t,A,B,C;
	cin >> t;
	if(t < 1 || t > 20) return 0;

	for(int i = 0 ; i < t ; i++){
		cin >> A;cin.get();
		cin >> B;cin.get();
		cin >> C;cin.get();
		
		if(A < 1 || A > 100) return 0;
		if(B < 1 || B > 100) return 0;
		if(C<0 || C > B) return 0;

		while(true){
			if((A+B+C)%B == C )
				cout << "YES";
			else
				cout << "NO";
		return 0; 
		}

	}
	

	return 0;
}

