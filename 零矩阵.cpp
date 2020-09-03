////¡„æÿ’Û
//#include<iostream>
//#include<vector>
//#include<set>
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
////void transpose(vector<vector<int>>& matrix) {
////	vector<vector<int>> vec(matrix[0].size(),vector<int>(matrix.size(), 0));
////	for (int i = 0; i < matrix.size(); i++)
////	{
////		for (int j = 0; j < matrix[0].size(); j++)
////		{
////			vec[j][i]=matrix[i][j];
////		}
////
////	}
////	matrix = vec;
////}
//
//void setZeroes(vector<vector<int>>& matrix) {
//	set<int> s1;
//	vector<int> veci (matrix[0].size(), 0);
//	for (int i = 0; i < matrix.size(); i++)
//	{
//		int tag=0;
//		for (int j = 0; j < matrix[i].size(); j++)
//		{
//			if (matrix[i][j] == 0)
//			{
//				tag = 1;
//				s1.insert(j);
//			}
//		}
//		if (tag) matrix[i] = veci;
//	}
//
//	for (set<int>::iterator i = s1.begin(); i != s1.end(); i++)
//	{
//		for (int j = 0; j < matrix.size(); j++)
//		{
//			matrix[j][*i] = 0;
//		}
//		
//	}
//}
//
//int main()
//{
//	vector<vector<int>> vec{ 
//			{0,1,2,0},
//			 {3,4,5,2},
//			{1,3,1,5 }};
//	printvector2d(vec);
//	setZeroes(vec);
//	printvector2d(vec);
//	return 0;
//}