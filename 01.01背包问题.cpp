////01��������
////�� N ����Ʒ��һ�������� V �ı�����ÿ����Ʒֻ��ʹ��һ�Ρ�
////�� i ����Ʒ������� vi����ֵ�� wi��
////��⽫��Щ��Ʒװ�뱳������ʹ��Щ��Ʒ��������������������������ܼ�ֵ���
////�������ֵ��
////�����ʽ
////��һ������������N��V���ÿո�������ֱ��ʾ��Ʒ�����ͱ����ݻ���
////�������� N �У�ÿ���������� vi, wi���ÿո�������ֱ��ʾ�� i ����Ʒ������ͼ�ֵ��
////�����ʽ
////���һ����������ʾ����ֵ��
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
////��̬�滮2dimension
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
////��̬�滮1dimension
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