#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<vector<int>> nums;
    vector<int> v;
    int n , temp;
    cin >> n;
    
    for(int i = 0 ; i < n ; i++){
        v.clear();
        for(int k = 0 ; k < 3 ; k++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        nums.push_back(v);
    }
    
    
    int Compare(int num1,int num2)
    {
        if(num1[0] < num2[0] && num1[1] < num2[1] && num1[2] < num2[2])
            return 0;
        else
            return 1;
    }
     
    
    void judge(nums)
    {
        for(int i = 0 ; i < nums.size() ; i++)
            for(int j = 0 ; j < nums.size() ; j++)
            {
                result = Compare(i,j);
                if(!result)
                {
                    cout << i+1 << endl;
                }
            }
    }
                 
   /* for(int i = 0 ; i < 3 ; i ++)
    {
        for(int k = 0 ; k < 3 ; k++)
        {
            cout << nums[i][k] << " ";
        }
        cout << endl;
    }
    */
    return 0;
    
}