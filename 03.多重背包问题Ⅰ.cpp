////���ر��������
////�� N ����Ʒ��һ�������� V �ı�����
////�� i ����Ʒ����� si ����ÿ������� vi����ֵ�� wi��
////��⽫��Щ��Ʒװ�뱳������ʹ��Ʒ����ܺͲ����������������Ҽ�ֵ�ܺ����
////�������ֵ��
////�����ʽ
////��һ������������N��V���ÿո�������ֱ��ʾ��Ʒ�����ͱ����ݻ���
////�������� N �У�ÿ���������� vi, wi, si���ÿո�������ֱ��ʾ�� i ����Ʒ���������ֵ��������
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int maxValue(vector<int>v, vector<int>w, vector<int>s,int V)
//{
//	vector<int> f(V + 1);
//	for (int i = 0; i < v.size(); i++)
//	{
//		for (int j = V; j >= v[i]; j--)
//		{
//			for (int k = 1; k <= s[i] && k<=j/v[i]; k++)
//			{
//				f[j] = max(f[j],f[j-k*v[i]]+k*w[i]);
//			}
//		}
//	}
//	return f[V];
//}
//
//int main()
//{
//	int N=4, V=5;
//	vector<int> v(N), w(N), s(N),f(V+1);
//	v = {1,2,3,4};
//	w = {2,4,4,5};
//	s = {3,1,3,2};
//	cout << maxValue(v, w, s, V)<< endl;
//	return 0;
//}