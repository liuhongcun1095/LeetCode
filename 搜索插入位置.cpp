////搜索插入位置 二分法
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int searchInsert(vector<int>& nums, int target)
//{
//	int left = 0, right = nums.size() - 1;
//	while (left <= right)
//	{
//		int mid = (right - left) / 2 + left;
//		if (nums[mid] == target) return mid;
//		else if (nums[mid] < target) left = mid + 1;
//		else right = mid - 1;
//	}
//	return left;
//}
//
//int main()
//{
//	vector<int> vec{ 1,3,5,6};
//	int target = 5;
//	int a=searchInsert(vec,target);
//	cout << a << endl;
//	return 0;
//}