////Ñî»ÔÈý½Ç¢ò
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//vector<int> getRow(int rowIndex) 
//{
//	vector<int> vec;
//	if (rowIndex < 0) return vec;
//	long long init = 1;
//	for (int i = 0; i <= rowIndex; i++)
//	{
//		vec.push_back(init);
//		init = (init * (rowIndex - i)) / (i + 1);
//	}
//	return vec;
//}
//
//void printvector1d(vector<int> vec)
//{
//		for (int j = 0; j < vec.size(); j++)
//		{
//			cout << vec[j] << "  ";
//		}
//		cout << endl;
//}
//
//int main()
//{
//	int numRows = 30;
//	vector<int> vec = getRow(numRows);
//	printvector1d(vec);
//	return 0;
//}