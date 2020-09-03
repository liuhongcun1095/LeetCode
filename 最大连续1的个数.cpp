////最大连续1的个数
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int findMaxConsecutiveOnes(vector<int>& nums) {
//	int m = nums.size();
//	if (m < 1) return 0;
//	int left = 0, right = 0,ans=0;
//	while (right < m)
//	{
//		if (nums[right] == 1)
//		{
//			left = right;
//			right++;
//			while ((right < m) && (nums[right] == 1)) right++;
//			ans = (ans > (right - left)) ? ans : (right - left);
//		}
//		right++;
//	}
//	return ans;
//}
//
//int main()
//{
//	vector<int> vec{ 1,1,0,1,1,1 };
//	int val = 3;
//	int MaxConsecutiveOnes = findMaxConsecutiveOnes(vec);
//	cout << MaxConsecutiveOnes << endl;
//	return 0;
//}