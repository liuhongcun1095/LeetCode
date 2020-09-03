////最长回文子串
//#include<iostream>
//#include<vector>
//#include<cstring>
//
//using namespace std;
//
//string longestPalindrome(string s) {
//    vector<vector<int>> dp(s.size(),vector<int> (s.size()));
//    string ans;
//    for (int l = 0; l < s.size(); l++)
//    {
//        for (int i = 0; i < s.size()-l; i++)
//        {
//            int j = i + l;
//            if (l == 0) 
//                dp[i][j] = 1;
//            else if (l == 1)    
//                dp[i][j] = (s[i]==s[j]);
//            else 
//                dp[i][j] = ((s[i] == s[j]) && (dp[i + 1][j - 1]));
//            if (dp[i][j] && (l + 1) > ans.size())
//                ans = s.substr(i, l + 1);
//        }
//    }
//    return ans;
//}
//
//int main()
//{
//    string s="babad";
//    string s2= longestPalindrome(s);
//    cout << s2 << endl;
//    return 0;
//}