//////���ر��������   ���ö�����ת��Ϊ01��������
////�� N ����Ʒ��һ�������� V �ı�����
////�� i ����Ʒ����� si ����ÿ������� vi����ֵ�� wi��
////��⽫��Щ��Ʒװ�뱳������ʹ��Ʒ����ܺͲ����������������Ҽ�ֵ�ܺ����
////�������ֵ��
////�����ʽ
////��һ������������N��V���ÿո�������ֱ��ʾ��Ʒ�����ͱ����ݻ���
////�������� N �У�ÿ���������� vi, wi, si���ÿո�������ֱ��ʾ�� i ����Ʒ���������ֵ��������
////�����ʽ
////���һ����������ʾ����ֵ��
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