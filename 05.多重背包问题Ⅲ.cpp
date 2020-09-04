//多重背包问题Ⅲ
//#include<iostream>
//#include<vector>
//#include<cstring>
//
//using namespace std;
//
//int maxValue(vector<int>v, vector<int>w, vector<int>s, int V)
//{
//	vector<int> f(V + 1),g(V + 1),q(V + 1);
//	for (int i = 0; i < v.size();i++)
//	{
//		g=f;
//		for(int j=0;j<v[i];j++)
//		{
//			int hh = 0, tt = -1;
//			for (int k = j; k <= V; k+=v[i])
//			{
//				f[k] = g[k];
//				if (hh <= tt && k - s[i] * v[i] > q[hh]) 
//					hh++;
//				if (hh <= tt) 
//					f[k] = max(f[k],g[q[hh]]+(k-q[hh])/v[i]*w[i]);
//				while (hh <= tt && g[q[tt]] - (q[tt] - j) / v[i] * w[i] <= g[k] - (k - j) / v[i] * w[i])
//					tt--;
//				q[++tt] = k;
//			}
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