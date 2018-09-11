/*给定非负整数数组a1,a2,a3,a4...an,每一个书数表示一个竖立在x轴位置的高位ai的墙，
选择两堵墙和x轴构成的容纳的水最多。
*/
#include<iostream>
#include<vector>

using namespace std;

	int maxArea(vector<int> &height){
		int maxarea = 0, l = 0 , r = height.size()-1;
		while(l < r){
			maxarea = max(maxarea,min(height[l],height[r])*(r-l));
			if(height[l] < height[r])
				l++;
			else
				r--;
		}
		return maxarea;
	}

	int main(){

		std::vector<int> height = {1,2,3,2,4};
		cout << maxArea(height) << endl;
     return 0;
	}	