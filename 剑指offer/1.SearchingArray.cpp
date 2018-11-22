class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int rows = array.size(), col = array[0].size();
        int r = 0 , c = col-1;
        while(r < array.size() && c >= 0){
            if(target == array[r][c])
                return true;
            else if(target < array[r][c])
                c--;
            else
                r++;
        }
        return false;
    }
};