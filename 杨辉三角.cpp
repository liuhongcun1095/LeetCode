////Ñî»ÔÈý½Ç
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//vector<vector<int>> generate(int numRows)
//{
//	vector<vector<int>> vec;
//	if (numRows < 1) return vec;
//	vec.resize(numRows, vector<int>(0, 1));
//	for (int i = 0; i < numRows; i++)
//	{
//		long long init = 1;
//		vector<int> vec_temp;
//		for (int j = 0; j <= i; j++)
//		{
//			vec[i].push_back(init);
//			init = (init * (i - j)) / (j + 1);
//		}
//	}
//	return vec;
//}
//
////vector<vector<int>> generate1(int numRows) {
////	vector<vector<int>> vec;
////	vector<int> vec_temp;
////	if (numRows < 1) return vec;
////	if (numRows >= 1)
////	{
////		vec_temp = { 1 };
////		vec.push_back(vec_temp);
////		if (numRows == 1) return vec;
////;	}
////	if (numRows >= 2)
////	{
////		vec_temp = { 1,1 };
////		vec.push_back(vec_temp);
////		if (numRows == 2) return vec;
////	}
////	for (int i = 2; i < numRows; i++)
////	{
////		vec_temp.resize(i+1, 1);
////		for (int j = 1; j < i; j++)
////		{
////			vec_temp[j] = vec[i - 1][j - 1] + vec[i - 1][j];
////		}
////		vec.push_back(vec_temp);
////	}
////	return vec;
////}
//
////vector<int> getRow(int rowIndex) {
////
////
////}
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
//int main()
//{
//	int numRows = 5;
//	vector<vector<int>> vec = generate(numRows);
//	printvector2d(vec);
//	return 0;
//}