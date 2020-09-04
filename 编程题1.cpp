////Î´ÊµÏÖ´úÂë
//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//void printvector2d(vector<vector<int>> vec)
//{
//	for (int i = 0; i < vec.size(); i++)
//	{
//		for (int j = 0; j < vec[i].size(); j++)
//		{
//			cout << vec[i][j] << "  ";
//		}
//		cout << endl;
//	}
//}
//int money(vector<vector<int>> vec, int left , int price)
//{
//	int m = vec.size();
//	if (m < 1) return 0;
//	if (m == 1) return vec[0][2];
//	if (left == vec.size() - 1) return vec[0][2];
//    
//	for (int i = left; i < vec.size(); i++)
//	{
//		int j = i+1;
//		while ((j < vec.size()) && (vec[j][0] < vec[i][1]))
//		{
//			j++;
//		}
//		for (int k = j; j < vec.size(); j++)
//		{
//			price += money(vec, k, price);
//		}
//
//	}
//	
//	return price;
//}
//bool cmp(vector<int> v1, vector<int>v2 )
//{
//	return (v1[1] < v2[1]);
//}
//int main()
//{
//	int n=3;
//	/*cin >> n;
//	vector<vector<int>> vec(n,vector<int>(3,0));
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cin>>vec[i][j];
//		}
//	}*/
//	vector<vector<int>> vec{ {1,2,1},{2,4,5}, {2,5,5},{6,11,2},{7,10,1} };
//	sort(vec.begin(), vec.end(),cmp);
//	printvector2d(vec);
//	int a=money(vec,0,0);
//	cout << a<<endl;
//	return 0;
//}