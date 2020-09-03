////最大连续子序列和 动态规划
////给定一个整数数组 nums ，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//////动态规划
////class Solution {
////public:
////	int maxSubArray(vector<int> nums)
////	{
////		vector<int> dp(nums.size(),0);
////		dp[0] = nums[0];
////		int maxnum=dp[0];
////		for (int i = 1; i < nums.size(); i++)
////		{
////			dp[i] = max((dp[i-1]+nums[i]),nums[i]);
////
////			if (dp[i] > maxnum)
////			{
////				maxnum = dp[i];
////			}
////		}
////		return maxnum;
////	}
////};
//
////指针
//class Solution {
//public:
//	int maxSubArray(vector<int> nums)
//	{
//		int maxnum = nums[0];
//		int temp = nums[0];
//		int left = 1;
//		for (int i = left; i < nums.size(); i++)
//		{
//			temp = (temp + nums[i]) > nums[i]?(temp + nums[i]) :nums[i];
//			maxnum = maxnum > temp ? maxnum : temp;
//		}
//		return maxnum;
//	}
//};
//
//int main()
//{
//	vector<int> nums{ -2,1,-3,4,-1,2,1,-5,4 };
//	Solution a;
//	cout << a.maxSubArray(nums);
//	return 0;
//}