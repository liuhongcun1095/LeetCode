////Ðý×ª¾ØÕó
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
//
//void rotate(vector<vector<int>>& matrix) {
//	vector<vector<int>> vec(matrix[0].size(),vector<int>(matrix.size(), 0));
//	for (int i = 0; i < matrix.size(); i++)
//	{
//		for (int j = 0; j < matrix[0].size(); j++)
//		{
//			vec[j][matrix.size()-i-1]=matrix[i][j];
//		}
//
//	}
//	matrix = vec;
//}
//
//int main()
//{
//	vector<vector<int>> vec {
//			{ 5, 1, 9, 11},
//			{ 2, 4, 8, 10},
//			{13, 3, 6, 7},
//			{15, 14, 12, 16}};
//	printvector2d(vec);
//	rotate(vec);
//	printvector2d(vec);
//	return 0;
//}