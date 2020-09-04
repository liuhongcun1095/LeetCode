////给定一个非负整数数组，a1, a2, ..., an, 和一个目标数，S。
////现在你有两个符号  + 和  - 。对于数组中的任意一个整数，
////你都可以从  + 或  - 中选择一个符号添加在前面。
////返回可以使最终数组和为目标数 S 的所有添加符号的方法数。
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//class Solution {
//public:
//    int dfs(vector<int>& nums, unsigned int S,int left)
//    {
//        if ((S == 0)&& (left >= nums.size())) return 1;
//        if (left >= nums.size()) return 0;
//        int ans = 0;
//        ans += dfs(nums,S-nums[left],left+1);
//        ans += dfs(nums, S + nums[left], left + 1);
//        return ans;
//    }
//    int findTargetSumWays(vector<int>& nums, int S) {
//        return dfs(nums, S, 0);
//    }
//};
//
//
//class Solution2 {
//public:
//    int findTargetSumWays(vector<int>& nums, int S) {
//        long sum = 0;
//        for (const int& it : nums) sum += it;
//        if ((S + sum) % 2 == 1 || S > sum) return 0;
//        S = (S + sum) / 2;
//        vector<int> dp (S+1,0);
//        dp[0] = 1;
//        for (const int& it : nums) {
//            for (int j = S; j >= it; j--)
//            {
//                dp[j] += dp[j - it];
//            }
//        }
//        int ans = dp[S];
//        return ans;
//    }
//};
//
//
//int main()
//{
//    int S = 3;
//    vector<int> nums{ 1,1,1,1,1 };
//    Solution2 a;
//    int ans=a.findTargetSumWays(nums,S);
//    cout << ans << endl;
//	return 0;
//}