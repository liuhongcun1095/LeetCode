////多重背包问题Ⅱ   利用二进制转化为01背包问题
////有 N 种物品和一个容量是 V 的背包。
////第 i 种物品最多有 si 件，每件体积是 vi，价值是 wi。
////求解将哪些物品装入背包，可使物品体积总和不超过背包容量，且价值总和最大。
////输出最大价值。
////输入格式
////第一行两个整数，N，V，用空格隔开，分别表示物品种数和背包容积。
////接下来有 N 行，每行三个整数 vi, wi, si，用空格隔开，分别表示第 i 种物品的体积、价值和数量。
////输出格式
////输出一个整数，表示最大价值。
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//class Good{
//public:
//	Good(int _v, int _w) : v(_v), w(_w) {}
//	int v,w;
//};
//
//int maxValue(vector<int>v, vector<int>w, vector<int>s,int V)
//{
//	vector<int> f(V + 1);
//	vector<Good> Goods;
//	for (int i = 0; i < v.size(); i++)
//	{
//		for (int j=1; j <= s[i]; j *= 2)
//		{
//			s[i] -= j;
//			Goods.push_back({ j * v[i],j * w[i] });
//		}
//		if(s[i]>0)
//			Goods.push_back({ s[i] * v[i],s[i] * w[i] });
//	}
//	for (Good i : Goods)
//	{
//		for (int j = V; j >= i.v; j--)
//		{
//			f[j] = max(f[j],f[j-i.v]+i.w);
//		}
//	}
//	return f[V];
//}
//
//int main()
//{
//	int N=4, V=5;
//	vector<int> v(N), w(N), s(N);
//	v = {1,2,3,4};
//	w = {2,4,4,5};
//	s = {3,1,3,2};
//	cout << maxValue(v, w, s, V)<< endl;
//	return 0;
//}