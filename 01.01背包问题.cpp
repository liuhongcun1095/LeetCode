////01背包问题
////有 N 件物品和一个容量是 V 的背包。每件物品只能使用一次。
////第 i 件物品的体积是 vi，价值是 wi。
////求解将哪些物品装入背包，可使这些物品的总体积不超过背包容量，且总价值最大。
////输出最大价值。
////输入格式
////第一行两个整数，N，V，用空格隔开，分别表示物品数量和背包容积。
////接下来有 N 行，每行两个整数 vi, wi，用空格隔开，分别表示第 i 件物品的体积和价值。
////输出格式
////输出一个整数，表示最大价值。
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
////动态规划2dimension
////int maxValue(vector<int>v,vector<int> w,int V)
////{
////	int N = v.size() - 1;
////	vector<vector<int>> f(N + 1, vector<int>(V + 1, 0));
////	for (int i = 1; i <= N; i++)
////	{
////		for (int j = 0; j <= V; j++)
////		{
////			f[i][j] = f[i - 1][j];
////			if (v[i] <= j)
////			{
////				f[i][j] = max(f[i][j], f[i - 1][j - v[i]] + w[i]);
////			}
////		}
////	}
////	int res = 0;
////	for (int i = 0; i <= V; i++)
////	{
////		res = max(res, f[N][i]);
////	}
////	return res;
////}
//
////动态规划1dimension
//int maxValue(vector<int>v,vector<int>w,int V)
//{
//	//vector<int> v2(v.size()+1,0);
//	//vector<int> w2(w.size()+1,0);
//	//for (int i = 0; i < v.size(); i++)
//	//{
//	//	v2[i + 1] = v[i];
//	//	w2[i + 1] = w[i];
//	//}
//	vector<int> f(V + 1,0);
//	for (int i = 0; i < v.size(); i++)
//	{
//		for (int j = V; j >= v[i]; j--)
//		{
//			f[j] = max(f[j],f[j-v[i]]+w[i]);
//		}
//	}
//	return f[V];
//}
//
//int main()
//{
//	int N, V;
//	/*cin >> N >> V;
//	vector<int> w(N + 1,0), v(N + 1,0);
//	for (int i = 1; i <= N; i++)
//	{
//		cin >> v[i] >> w[i];
//	}*/
//	N = 4, V = 5;
//	vector<int> w(N, 0), v(N, 0);
//	v={1,2,3,4};
//	w = {2,4,4,5};
//	cout << maxValue(v,w,V) << endl;
//	return 0;
//}