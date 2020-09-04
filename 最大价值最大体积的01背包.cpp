////最大价值最大体积的01背包
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int getMaxValue(vector<int>v,vector<int>w,int V)
//{
//	int m = v.size();
//	vector<int> dp(V + 1, 0);
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = V; j >= v[i]; j--)
//		{
//			dp[j] = max(dp[j],dp[j-v[i]]+w[i]);
//		}
//	}
//	return dp[V];
//}
//
//int main()
//{
//	int N, V;
//	N = 4, V = 5;
//	vector<int> w(N, 0), v(N, 0);
//	v={1,2,3,4};
//	w = {2,4,4,5};
//	cout << getMaxValue(v, w, V) << endl;
//	return 0;
//}