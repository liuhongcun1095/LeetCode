////��ȫ��������
////�� N ����Ʒ��һ�������� V �ı�����ÿ����Ʒ�������޼����á�
////�� i ����Ʒ������� vi����ֵ�� wi��
////��⽫��Щ��Ʒװ�뱳������ʹ��Щ��Ʒ��������������������������ܼ�ֵ���
////�������ֵ��
////�����ʽ
////��һ������������N��V���ÿո�������ֱ��ʾ��Ʒ�����ͱ����ݻ���
////�������� N �У�ÿ���������� vi, wi���ÿո�������ֱ��ʾ�� i ����Ʒ������ͼ�ֵ��
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
////��̬�滮1dimension
//int maxValue(vector<int>v,vector<int>w,int V)
//{
//	vector<int> f(V + 1,0);
//	for (int i = 0; i < v.size(); i++)
//	{
//		for (int j = v[i]; j <=V; j++)
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