////寻找数组B中的字符串在数组A中的位置
//#include<iostream>
//#include<vector>
//#include<cstring>
//
//using namespace std;
//
//vector<int> pipei(vector<string>vec1, vector<string>vec2)
//{
//	vector<int> ans;
//	int m1 = vec1.size(), m2 = vec2.size();
//	for (int i = 0; i < m2; i++)
//	{
//		int index = -1;
//		for (int j = 0; j < m1; j++)
//		{
//			if (vec2[i] == vec1[j]) index = j;
//		}
//		ans.push_back(index);
//	}
//	return ans;
//}
//
//void printvector1d(vector<int> vec)
//{
//		for (int j = 0; j < vec.size(); j++)
//		{
//			cout << vec[j] << endl;
//		}
//		cout << endl;
//}
//
//int main()
//{
//	vector<string> vec1{ {"a"},{"ab"},{"abcd"} }, vec2{ {"b"},{"ab"},{"a"} };
//	string s1{ "ab" }, s2{ "ab" };
//	vector<int> vec = pipei(vec1,vec2);
//	printvector1d(vec);
//
//	return 0;
//}