//#include<iostream>
//#include<cstring>
//
//using namespace std;
//
//int getAvg(string s)
//{
//	if (s.size() <= 1)
//		return s.size();
//	int  count = 1, left = 0, right = left + 1;
//	while (right < s.size())
//	{
//		if (s[left] == s[right])
//		{
//			right++;
//		}
//		else
//		{
//			left = right;
//			right += 1;
//			count++;
//		}
//	}
//	return s.size() / count;
//}
//
//int main()
//{
//	string s = { "aaabbaaacc" };
//	cout << getAvg(s);
//	return 0;
//}