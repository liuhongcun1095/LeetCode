////¶Ô½ÇÏß±éÀú
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//void printvector2d(vector < vector<int>> vec)
//{
//	for (int i = 0; i < vec.size(); i++)
//	{
//		for (int j = 0; j < vec[i].size(); j++)
//		{
//			cout << vec[i][j] << "   ";
//		}
//		cout << endl;
//	}
//}
//void printvector1d(vector<int> vec)
//{
//	for (int i = 0; i < vec.size(); i++)
//	{
//		cout << vec[i]<< "   ";	
//	}
//	cout << endl;
//}
//
//vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
//	vector<int> vec;
//	if (matrix.size() == 0) return vec;
//	int m = matrix.size() - 1;
//	int n = matrix[0].size() - 1;
//	int r = 0, c = 0;
//	while ((r <= m) || (c <= n))
//	{
//		if ((r == m) && (c == n))
//		{
//			vec.push_back(matrix[r][c]);
//			break;
//
//		}
//		while ((r >= 0) && (c <= n))
//			vec.push_back(matrix[r--][c++]);
//		if (c <= n)
//		{
//			r++;
//		}
//		else
//		{
//			r += 2; c--;
//		}
//		while ((r <= m) && (c >= 0))
//			vec.push_back(matrix[r++][c--]);
//		if (r <= m)
//		{
//			c++;
//		}
//		else
//		{
//			r--; c += 2;
//		}
//
//	}
//	return vec;
//}
//
//vector<int> findDiagonalOrder1(vector<vector<int>>& matrix)
//{
//	vector<int> nums;
//	int m = matrix.size();
//	if (m == 0) return nums;
//	int n = matrix[0].size();
//	if (n == 0) return nums;
//
//	bool bXFlag = true;
//	for (int i = 0; i < m + n; i++)
//	{
//		int pm = bXFlag ? m : n;
//		int pn = bXFlag ? n : m;
//
//		int x = (i < pm) ? i : pm - 1;
//		int y = i - x;
//
//		while (x >= 0 && y < pn)
//		{
//			nums.push_back(bXFlag ? matrix[x][y] : matrix[y][x]);
//			x--;
//			y++;
//		}
//
//		bXFlag = !bXFlag;
//	}
//	return nums;
//}
//
//
//int main()
//{
//	vector<vector<int>> vec{ 
//			{1,2,3},
//			{4,5,6},
//			{7,8,9 }};
//	printvector2d(vec);
//	vector<int> vec2 = findDiagonalOrder(vec);
//	printvector1d(vec2);
//	return 0;
//}