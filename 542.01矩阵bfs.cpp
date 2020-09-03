////01矩阵 bfs
////给定一个由 0 和 1 组成的矩阵，找出每个元素到最近的 0 的距离。
////两个相邻元素间的距离为 1 。
////示例 2:
////输入:
////0 0 0
////0 1 0
////1 1 1
////输出 :
////	0 0 0
////	0 1 0
////	1 2 1
//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
//        int m = matrix.size();
//        int n = matrix[0].size();
//        queue<pair<int, int>> q;
//        vector<vector<bool>> visited(m,vector<bool>(n,false));
//        vector<vector<int>> dxy{ {-1,0},{1,0},{0,-1},{0,1} };
//        if (m == 0) 
//            return matrix;
//        for (int i=0;i<m;i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (matrix[i][j] == 0)
//                {
//                    q.emplace(i,j);
//                    visited[i][j] = true;
//                }
//            }
//        }
//        int steps = 0;
//        while (!q.empty())
//        {
//            int size = q.size();
//            while (size--)
//            {
//                int x = q.front().first;
//                int y = q.front().second;
//                q.pop();
//                if (matrix[x][y] == 1 )
//                {
//                    matrix[x][y] = steps;
//                }
//                for (int i = 0; i < 4; i++)
//                {
//                    int xx = x + dxy[i][0];
//                    int yy = y + dxy[i][1];
//                    if (xx < 0 || xx >= m || yy < 0 || yy >= n)
//                        continue;
//                    if (matrix[xx][yy] == 1 && visited[xx][yy] == false)
//                    {
//                        q.emplace(xx, yy);
//                        visited[xx][yy] = true;
//                    }
//                }
//            }
//            steps++;
//        }
//        return matrix;
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
//    vector<vector<int>> matrix
//        {   {0 ,0 ,0},
//            {0, 1 ,0},
//            {1,1, 1 } };
//    Solution a;
//    printVector2d(matrix);
//    cout << endl;
//    a.updateMatrix(matrix);
//    printVector2d(matrix);
//	return 0;
//}
