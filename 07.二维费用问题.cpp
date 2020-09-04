////有 N 件物品和一个容量是 V 的背包，背包能承受的最大重量是 M。
////每件物品只能用一次。体积是 vi，重量是 mi，价值是 wi。
////求解将哪些物品装入背包，可使物品总体积不超过背包容量，总重量不超过背包可承受的最大重量，且价值总和最大。
////输出最大价值。
////输入格式
////第一行两个整数，N，V, M，用空格隔开，分别表示物品件数、背包容积和背包可承受的最大重量。
////接下来有 N 行，每行三个整数 vi, mi, wi，用空格隔开，分别表示第 i 件物品的体积、重量和价值。
////输出格式
////输出一个整数，表示最大价值。
////4 5 6
////1 2 3
////2 4 4
////3 4 5
////4 5 6     结果：8
//
//#include<iostream>
//#include<vector>
//#include<cstring>
//
//using namespace std;
//
//int getMaxValue(vector<int>v,vector<int>m,vector<int>w,int V,int M )
//{
//	vector<vector<int>> f(V + 1, vector<int>(M + 1, 0));
//	for (int i = 0; i < v.size(); i++)
//	{
//		for (int j = V; j >= v[i]; j--)
//		{
//			for (int k = M; k >= m[i]; k--)
//			{
//				f[j][k] = max(f[j][k],f[j-v[i]][k-m[i]]+w[i]);
//			}
//		}
//	}
//	return f[V][M];
//}
//
//int main()
//{
//	int N, V, M;
//	cin >> N >> V >> M;
//	vector<int>v(V , 0), m(V , 0), w(V , 0);
//	for (int i = 0; i < N; i++)
//	{
//		cin >> v[i] >> m[i] >> w[i];
//	}
//	cout<<getMaxValue(v,m,w,V,M)<<endl;
//	return 0;
//}