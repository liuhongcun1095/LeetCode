////反转字符串中的单词Ⅲ
//#include<iostream>
//#include<algorithm>
//#include<cstring>
//
//using namespace std;
//
//string reverseWords(string s) {
//	int m = s.size();
//	if (m < 1) return s;
//	int left = 0, right = 0;
//	while (right < m)
//	{
//		if (s[right] != ' ')
//		{
//			left = right;
//			while ((right < m) && (s[right] != ' '))
//			{
//				right++;
//			}
//			reverse(s.begin() + left, s.begin() + right);
//		}
//		right++;
//	}
//	return s;
//}
//
//int main()
//{
//	string s = "Let's take LeetCode contest";
//	string ans= reverseWords(s);
//	cout << ans << endl;
//	return 0;
//}