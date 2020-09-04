////矩阵顺时针从外圈开始报数（比如是10*10的矩阵就是1-36）然后内圈继续顺时针报数，输出报数个位为7十位为奇数的人坐标
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//vector<vector<int>> printMatrix(vector<vector<int> > matrix) {
//    vector<vector<int>>  vec;
//    vector<int> temp(2,0);
//    int m = matrix.size(), n = matrix[0].size();
//    int ru = 0, rd = m - 1, cl = 0, cr = n - 1;
//    int count = 0;
//    while ((ru <= rd) && (cl <= cr))
//    {
//        if (cl == cr)
//        {
//            count++;
//            ru++;
//            if ((count % 10 == 7) && ((count / 10) & 1))
//            {
//                temp[0] = cl; temp[1] = ru;
//                vec.push_back(temp);
//            }
//            
//        }
//        else if (ru == rd)
//        {
//            count++;
//            cl++;
//            if ((count % 10 == 7) && ((count / 10) & 1))
//            {
//                temp[0] = cl; temp[1] = ru;
//                vec.push_back(temp);
//            }
//        }
//        else
//        {
//            for (int i = cl; i < cr; i++)
//            {
//                count++;
//                if ((count % 10 == 7) && ((count / 10) & 1))
//                {
//                    temp[0] = ru; temp[1] = i;
//                    vec.push_back(temp);
//                }
//
//            }
//            for (int i = ru; i < rd; i++)
//            {
//                count++;
//                if ((count % 10 == 7) && ((count / 10) & 1))
//                {
//                    temp[0] = i; temp[1] = cr;
//                    vec.push_back(temp);
//                }
//            }
//            for (int i = cr; i > cl; i--)
//            {
//                count++;
//                if ((count % 10 == 7) && ((count / 10) & 1))
//                {
//                    temp[0] = rd; temp[1] = i;
//                    vec.push_back(temp);
//                }
//            }
//            for (int i = rd; i > ru; i--)
//            {
//                count++;
//                if ((count % 10 == 7) && ((count / 10) & 1))
//                {
//                    temp[0] = i; temp[1] = cl;
//                    vec.push_back(temp);
//                }
//            }
//            ru++; cl++; rd--; cr--;
//        }
//    }
//    return vec;
//}
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
//	int m=10, n=10;
//	vector<vector<int> > matrix(m,vector<int>(n,0));
//    vector<vector<int> > vec= printMatrix(matrix);
//    printvector2d(vec);
//    return 0;
//}