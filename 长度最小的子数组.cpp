////长度最小的子数组
////给定一个含有 n 个正整数的数组和一个正整数 s ，找出该数组中满足其和 ≥ s 的长度最小的 连续 子数组，并返回其长度。如果不存在符合条件的子数组，返回 0。

//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int minSubArrayLen(int s, vector<int>& nums) {
//	int m = nums.size();
//	int ans = 0;
//	if (m < 1) return ans;
//	int left = 0, right = 0,temp=0;
//	while (left < m)
//	{
//		while ((right<m)&&(temp < s))
//		{
//			temp += nums[right++];
//		}
//		if (temp >= s) ans = ((ans==0)||(ans > (right - left))) ?  (right - left): ans;
//		temp -= nums[left];
//		left++;
//	}
//	return ans;
//}
//
//int main()
//{
//	vector<int> vec{1,2,3,4,5 };
//	int s = 11;
//	int minLen = minSubArrayLen(s,vec);
//	cout << minLen << endl;
//	return 0;
//}