////�� N ����Ʒ��һ�������� V �ı����������ܳ��ܵ���������� M��
////ÿ����Ʒֻ����һ�Ρ������ vi�������� mi����ֵ�� wi��
////��⽫��Щ��Ʒװ�뱳������ʹ��Ʒ��������������������������������������ɳ��ܵ�����������Ҽ�ֵ�ܺ����
////�������ֵ��
////�����ʽ
////��һ������������N��V, M���ÿո�������ֱ��ʾ��Ʒ�����������ݻ��ͱ����ɳ��ܵ����������
////�������� N �У�ÿ���������� vi, mi, wi���ÿո�������ֱ��ʾ�� i ����Ʒ������������ͼ�ֵ��
////�����ʽ
////���һ����������ʾ����ֵ��
////4 5 6
////1 2 3
////2 4 4
////3 4 5
////4 5 6     �����8
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