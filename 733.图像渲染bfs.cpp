////图像渲染：bfs 
////输入: 
////image = [[1, 1, 1], [1, 1, 0], [1, 0, 1]]
////sr = 1, sc = 1, newColor = 2
////输出: [[2, 2, 2], [2, 2, 0], [2, 0, 1]]
////解析 :
////	在图像的正中间，(坐标(sr, sc) = (1, 1)),
////	在路径上所有符合条件的像素点的颜色都被更改成2。
////	注意，右下角的像素没有更改为2，
////	因为它不是在上下左右四个方向上与初始点相连的像素点。
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