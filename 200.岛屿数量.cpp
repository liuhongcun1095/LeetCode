////岛屿数量 BFS 宽度搜索/广度搜素
///*
//    给定一个由 '1'（陆地）和 '0'（水）组成的的二维网格，计算岛屿的数量。
//    一个岛被水包围，并且它是通过水平方向或垂直方向上相邻的陆地连接而成的。
//    你可以假设网格的四个边均被水包围。
//*/
//
//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//
//int numIslands(vector<vector<char> >& grid) {
//    if (grid.empty()) return 0;
//    int m = grid.size(), n = grid[0].size();
//    if (m == 0 || n == 0) return 0;
//    //定义左上右下方向
//    int dx[] = { -1,0,1,0 };
//    int dy[] = { 0,-1,0,1 };
//    int x = 0, y = 0, xx = 0, yy = 0;
//    queue<int> q;
//    int count = 0;
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            if (grid[i][j] == '1')
//            {
//                grid[i][j] = '0';
//                q.push(i);
//                q.push(j);
//                while (!q.empty())
//                {
//                    x = q.front();
//                    q.pop();
//                    y = q.front();
//                    q.pop();
//                    for (int k = 0; k < 4; k++)
//                    {
//                        xx = x + dx[k];
//                        yy = y + dy[k];
//                        if (xx < 0 || xx >= m || yy < 0 || yy >= n)
//                            continue;
//                        if (grid[xx][yy] == '1')
//                        {
//                            grid[xx][yy] = '0';
//                            q.push(xx);
//                            q.push(yy);
//                        }
//                    }
//                }
//                count++;
//            }
//        }
//    }
//    return count;
//}
//
//int main()
//{
//    vector<vector<char> > data;
//    int cur;
//    char a;
//    // 设置二维队列的行数
//    for (int i = 0; i < 4; i++)
//    {
//        data.push_back(vector<char>());
//    }
//    // 二维队列输入
//    for (int i = 0; i < data.size(); i++)
//    {
//        for (int j = 0; j < 5; j++) {
//            cin >> a;
//            data[i].push_back(a);
//        }
//    }
//    /* 输出测试
//    for(int i=0;i<data.size();i++)
//    {
//        for(int j=0;j<5;j++)
//        {
//            cout<<data[i][j]<<" ";
//        }
//        cout<<endl;
//    }*/
//    cur = numIslands(data);
//    cout << cur << endl;
//    return 0;
//}