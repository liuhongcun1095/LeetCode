////寻找旋转排序数组中的最小值
//#include<iostream>
//#include<vector>
//#include <cstdio>
//#include<algorithm>
//
//using namespace std;
//
//int findMin(vector<int>& nums) 
//{
//    int left = 0;
//    int right = nums.size() - 1;
//    while (left<right)
//    {
//        int mid = left + (right - left) / 2;
//        if (nums[mid] > nums[right])
//            left = mid + 1;
//        else
//            right = mid;
//    }
//    return nums[left];
//}
//
//int main()
//{
//	vector<int> vec{ 1 };
//	int min = findMin(vec);
//	printf ("%d\n",min);
//	return 0;
//}