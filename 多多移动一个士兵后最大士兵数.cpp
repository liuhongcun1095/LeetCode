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
////动态规划1dimension
//int maxValue(vector<int>v,vector<int>w,int V)
//{
//	vector<int> f(5001,0);
//	for (int i = 0; i < v.size(); i++)
//	{
//		if (v[i] > 0)
//		{
//			for (int j = V; j >= v[i]; j--)
//			{
//				f[j] = max(f[j], f[j - v[i]] + w[i]);
//			}
//		}
//		else
//		{
//			/*for (int k = V; k <= V - v[i]; k++)
//				f[k] = f[V];*/
//			bool flag = false;
//			for (int j = V-v[i]; j >= 0; j--)
//			{
//				if (f[j - v[i]] + w[i] > f[j])
//				{
//					f[j] = f[j - v[i]] + w[i];
//					flag = true;
//				}
//			}
//			/*if (flag)
//			{
//				V = V - v[i];
//			}*/
//		}
//	}
//	int max=f[0];
//	for (int i = 0; i < 5001; i++)
//	{
//		if (f[i] > max) max = f[i];
//	}
//	return max;
//}
//
//int main()
//{
//	int N, V;
//	cin >> N >> V;
//	vector<int> w(N,0), v(N,0);
//	for (int i = 0; i < N; i++)
//	{
//		cin >> v[i] >> w[i];
//	}
//	/*N = 4, V = 4;
//	vector<int> w(N, 0), v(N, 0);
//	v={-1,1,-1,6};
//	w = {-1,-1,1,6};*/
//	cout << maxValue(v,w,V) << endl;
//	return 0;
//}