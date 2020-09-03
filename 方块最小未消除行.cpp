//方块最小消除行，俄罗斯方块
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
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
//
//int minXiaochu(vector<int>vec1, vector<int> vec2)
//{
//	int m1 = vec1.size(), m2 = vec2.size();
//	if (m2 < 1)
//		return *max_element(vec1.begin(), vec1.end()) - *min_element(vec1.begin(), vec1.end());
//	int row1 = *max_element(vec1.begin(), vec1.end());
//	int row2 = *max_element(vec2.begin(), vec2.end());
//	vector<vector<int>> v1(row1, vector<int>(m1, 0));
//	vector<vector<int>> v2(row2, vector<int>(m2, 0));
//	int ans = row1 + row2;
//	for (int i = 0; i < v1.size(); i++)
//	{
//		for (int j = 0; j < v1[0].size(); j++)
//		{
//			if (vec1[j] > i) v1[i][j] = 1;
//		}
//	}
//	for (int i = 0; i < v2.size(); i++)
//	{
//		for (int j = 0; j < v2[0].size(); j++)
//		{
//			if (vec2[j] > i) v2[i][j] = 1;
//		}
//	}
//	for (int i = 0; i <= m1 - m2; i++)
//	{
//		int ans1 = row1 + row2;
//		vector<vector<int>> v1_temp = v1;
//		for (int j = 0; j < v2.size(); j++)
//		{
//			v1_temp.push_back(vector<int>(m1, 0));
//		}
//		vector<vector<int>> v2_temp = v2;
//		for (int j = row1; j < v1_temp.size(); j++)
//		{
//			for (int k = i; k < i + m2; k++)
//			{
//				v1_temp[j][k] = v2_temp[row2 - j - 1 + row1][k - i];
//			}
//		}
//		int count = 0;
//		for (int j = row1; j < v1_temp.size(); j++)
//		{
//			int left = row1 - 1;
//			for (int p = j; p >= row1; p--)
//			{
//				bool flag = true;
//				for (int k = 0; k < m1; k++)
//				{
//					if (!((!v1_temp[p][k]) && (!v1_temp[left][k]) || (v1_temp[p][k] ^ v1_temp[left][k])))
//						flag = false;
//				}
//				if (!flag)
//				{
//					count--;
//					break;
//				}
//				left--;
//			}
//			count++;
//		}
//		for (int j = row1; j < v1_temp.size(); j++)
//		{
//			if (count > 0)
//			{
//				for (int q = 0; q < m1; q++)
//				{
//					v1_temp[j - count][q] += v1_temp[j][q];
//					v1_temp[j][q] = 0;
//				}
//			}
//		}
//		for (int j = 0; j < v1_temp.size(); j++)
//		{
//			bool flag = true;
//			int temp = v1_temp[j][0];
//			for (int k = 0; k < m1; k++)
//			{
//				if (v1_temp[j][k] != temp) flag = false;
//			}
//			if (flag) ans1--;
//		}
//		if (ans1 < ans) ans = ans1;
//		printvector2d(v1_temp);
//		cout << endl;
//	}
//	return ans;
//}
//
//
//int main()
//{
//	vector<int>vec1{ 2,1,2,4,0,4,1,2 };
//	vector<int>vec2{ 1,2,1 };
//	int a = minXiaochu(vec1, vec2);
//	cout << a << endl;
//	return 0;
//}