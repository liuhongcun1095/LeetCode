////有 N 种物品和一个容量是 V 的背包。
////物品一共有三类：
////第一类物品只能用1次（01背包）；
////第二类物品可以用无限次（完全背包）；
////第三类物品最多只能用 si 次（多重背包）；
////每种体积是 vi，价值是 wi。
////求解将哪些物品装入背包，可使物品体积总和不超过背包容量，且价值总和最大。
////输出最大价值。
////输入格式
////第一行两个整数，N，V，用空格隔开，分别表示物品种数和背包容积。
////接下来有 N 行，每行三个整数 vi, wi, si，用空格隔开，分别表示第 i 种物品的体积、价值和数量。
////si = −1 表示第 i 种物品只能用1次；
////si = 0 表示第 i 种物品可以用无限次；
////si > 0 表示第 i 种物品可以使用 si 次；
////4 5
////1 2 - 1
////2 4 1
////3 4 0
////4 5 2				结果：8
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//class Thing
//{
//public:
//	int kind;
//	int v, w;
//};
//
//int getMaxValue(vector<int>v,vector<int>w,vector<int>s,int V)
//{
//	vector<int> f(V+1);
//	vector<Thing> things;
//	for (int i = 0; i < v.size(); i++)
//	{
//		if (s[i] < 0)
//		{
//			things.push_back({-1,v[i],w[i]});
//		}
//		else if (s[i] == 0)
//		{
//			things.push_back({0,v[i],w[i]});
//		}
//		else
//		{
//			for (int k = 1; k <= s[i]; k *= 2)
//			{
//				things.push_back({-1,k*v[i],k*w[i]});
//				s[i] -= k;
//			}
//			if (s[i] > 0)
//			{
//				things.push_back({-1,s[i]*v[i],s[i]*w[i]});
//			}
//		}
//	}
//	for (Thing thing : things)
//	{
//		if (thing.kind < 0)
//		{
//			for (int j = V; j >= thing.v; j--)
//			{
//				f[j] = max(f[j],f[j-thing.v]+thing.w);
//			}
//		}
//		else
//		{
//			for (int j = thing.v; j <= V; j++)
//			{
//				f[j] = max(f[j], f[j - thing.v] + thing.w);
//			}
//		}
//	}
//	return f[V];
//}
//
//int main()
//{
//	int N, V;
//	cin >> N >> V;
//	vector<int>v(N, 0), w(N, 0), s(N, 0);
//	for (int i = 0; i < N; i++)
//	{
//		cin >> v[i] >> w[i] >> s[i];
//	}
//	cout << getMaxValue(v,w,s,V) << endl;
//	return 0;
//}
//
//
////int main()
////{
////	int N, V;
////	cin >> N >> V;
////	vector<Thing> things;
////	vector<int> f(V + 1, 0);
////	for (int i = 0; i < N; i++)
////	{
////		int v, w, s;
////		cin >> v >> w >> s;
////		if (s < 0)
////			things.push_back({ -1,v,w });
////		else if (s == 0)
////			things.push_back({ 0,v,w });
////		else
////		{
////			for (int k = 1; k <= s; k *= 2)
////			{
////				things.push_back({ -1,v * k,w * k });
////				s -= k;
////			}
////			if (s > 0)
////			{
////				things.push_back({ -1,v * s,w * s });
////			}
////		}
////	}
////	for (Thing thing : things)
////	{
////		if (thing.kind < 0)
////		{
////			for (int j = V; j >= thing.v; j--)
////			{
////				f[j] = max(f[j], f[j - thing.v] + thing.w);
////			}
////		}
////		else
////		{
////			for (int j = thing.v; j <= V; j++)
////			{
////				f[j] = max(f[j], f[j - thing.v] + thing.w);
////			}
////		}
////	}
////	cout << f[V] << endl;
////	return 0;
////}