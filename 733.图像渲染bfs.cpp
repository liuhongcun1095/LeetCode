////ͼ����Ⱦ��bfs 
////����: 
////image = [[1, 1, 1], [1, 1, 0], [1, 0, 1]]
////sr = 1, sc = 1, newColor = 2
////���: [[2, 2, 2], [2, 2, 0], [2, 0, 1]]
////���� :
////	��ͼ������м䣬(����(sr, sc) = (1, 1)),
////	��·�������з������������ص����ɫ�������ĳ�2��
////	ע�⣬���½ǵ�����û�и���Ϊ2��
////	��Ϊ�����������������ĸ����������ʼ�����������ص㡣
//#include<iostream>
//#include<vector>
//#include<queue>
//#include<unordered_map>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
//        queue<pair<int,int>> q;
//        q.emplace(sr,sc);
//        int oldColor = image[sr][sc];
//        if (oldColor == newColor)
//            return image;
//        vector<vector<int>> dxy{ {-1,0},{0,-1},{1,0},{0,1} };
//        while (!q.empty())
//        {
//            int r = q.front().first;
//            int c = q.front().second;
//            q.pop();
//            image[r][c] = newColor;
//            for (int i = 0; i < 4; i++)
//            {
//                int tempx = r + dxy[i][0];
//                int tempy = c + dxy[i][1];
//                if (tempx >= 0 && tempx < image.size()
//                    && tempy >= 0 && tempy < image[0].size())
//                {
//                    if( image[tempx][tempy] == oldColor )
//                    {
//                    q.emplace(tempx,tempy);
//                    image[tempx][tempy] = newColor;
//                    }
//                }
//            }
//        }
//        return image;
//    }
//};
//
//void printVector2d(vector<vector<int>> v)
//{
//    for (int i = 0; i < v.size(); i++)
//    {
//        for (int j = 0; j < v[i].size(); j++)
//        {
//            cout << v[i][j] << "   ";
//        }
//        cout << endl;
//    }
//}
//
//int main()
//{
//    vector<vector<int>> image{ { 0,0,0},{0,1,1} };
//    int sr = 1, sc = 1, newColor = 2;
//    Solution a;
//    printVector2d(image);
//    cout << endl;
//    a.floodFill(image,sr,sc,newColor);
//    printVector2d(image);
//	return 0;
//}