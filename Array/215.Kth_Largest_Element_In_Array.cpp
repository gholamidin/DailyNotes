
//solution1 use STL.
clsss Solution{
public:
	int findKthLargest(vector<int> & nums,int k){

		sort(nums.begin(),nums.end());
		return nums[nums.size()-k];
	}
}

//Solution2 use qiuk sort pattition.
   class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int left = 0, right = nums.size() - 1;
        while (true) {
            int p = partition(nums, left, right);
            if (p == k - 1) {
                return nums[p];
            }
            if (p > k - 1) {
                right = p - 1;
            } else {
                left = p + 1;
            }
        }
    }
private:
    int partition(vector<int>& nums, int left, int right) {
        int pivot = nums[left], l = left + 1, r = right;
        while (l <= r) {
            if (nums[l] < pivot && nums[r] > pivot) {
                swap(nums[l++], nums[r--]);
            }
            if (nums[l] >= pivot) {
                l++;
            }
            if (nums[r] <= pivot) {
                r--;
            }
        }
        swap(nums[left], nums[r]);
        return r;
    }
};