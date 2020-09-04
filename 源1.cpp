//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//
////¶¯Ì¬¹æ»®1dimension
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
//	//int N, V;
//	///*cin >> N >> V;
//	//vector<int> w(N + 1,0), v(N + 1,0);
//	//for (int i = 1; i <= N; i++)
//	//{
//	//	cin >> v[i] >> w[i];
//	//}*/
//	//N = 4, V = 5;
//	//vector<int> w(N, 0), v(N, 0);
//	//v={1,2,3,4};
//	//w = {2,4,4,5};
//	//cout << maxValue(v,w,V) << endl;
//	//return 0;
//	int n = 0x124;
//	double d = 1234;
//
//	cout.setf(ios::hex);
//	cout << n << "," << d << endl;
//
//	cout.setf(ios::showpoint);
//	cout << d << endl;
//	return 0;
//}