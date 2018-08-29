/*Given two sorted integer arrays A and B, merge B into A as one sorted array.
Note:
You may assume that A has enough space (size that is greater or equal to m + n) to hold additional elements from B. The number of 
elements initialized in A and B are m andn respectively.

 

混合插入有序数组，由于两个数组都是有序的，所有只要按顺序比较大小即可。最先想到的方法是建立一个m+n大小的新数组，然后逐个从A和B数组中取出元素比较，
把较小的加入新数组，然后在考虑A数组有剩余和B数组有剩余的两种情况，最后在把新数组的元素重新赋值到A数组中即可。代码如下：
*/

void merge(std::vector<int>& nums1, int m , vector<int>& nums2 , int n){
	if(m == 0)
		nums1 = nums2;
	int left = m-1;
	int right = n-1;
	int writeIndex = m+n-1;
	while(left >=0 && right >=0){
		nums1[writeIndex--] = nums1[left] > nums2[right] ? nums1[left--] : nums2[right--];
	}

	while(left>=) nums1[writeIndex--] = nums1[left--];
	while(right>=) nums1[writeIndex--] = nums2[right--];
}
