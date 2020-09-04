////根据结点计算有多少种二叉树
//#include<iostream>
//#include<algorithm>
//#include <vector>
//#include<unordered_map>
//
//using namespace std;
//
//int jiecheng(int a)
//{
//	if (a == 0) return 1;
//	int ans = a;
//	(ans - 1)&(ans *= jiecheng(ans - 1));
//	return ans;
//}
//
//int Cnm(int n,int m)
//{
//	return (jiecheng(n)/(jiecheng(m)*jiecheng(n-m)));
//}
//
//int countTree(vector<int> vec)
//{
//	sort(vec.begin(), vec.end());
//	unordered_map<int,int> mp;
//	for (int i = 0; i < vec.size(); i++)
//		mp[vec[i]]++;
//	int count=1;
//  if (mp.begin()->first!=0) return 0;
//	for (unordered_map<int,int>::iterator it = mp.begin(); it != mp.end(); it++)
//	{
//		unordered_map<int, int>::iterator it2 = it;
//		it2++;
//		if ((it2) == mp.end()) break;
//		int a=it->second;
//		int b=it2->second;
//		if (((it2->first-it->first)!=1) || (it2->second>pow(2,it2->first))|| (it->second > pow(2, it->first))) return 0;
//		count *= Cnm(2 * a, b);
//	}
//	return count;
//}
//
//int main()
//{
//	vector<int> vec{1,1,4,2};
//	cout << countTree(vec) << endl;
//	return 0;
//}