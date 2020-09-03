////墙与门 BFS广度优先搜索
///*你被给定一个 m × n 的二维网格，网格中有以下三种可能的初始化值：
//- 1 表示墙或是障碍物
//0 表示一扇门
//INF 无限表示一个空的房间。然后，我们用 231 - 1 = 2147483647 代表 INF。你可以认为通往门的距离总是小于 2147483647 的。
//你要给每个空房间位上填上该房间到 最近 门的距离，如果无法到达门，则填 INF 即可。*/
////对所有的门同时进行BFS，逆向考虑，每个位置最多访问一次
//
//#include<iostream>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//void wallsAndGates(vector<vector<int>>& rooms) 
//{
//	if (rooms.empty()) return;
//	int m = rooms.size(), n = rooms[0].size();
//	if (m < 1 || n < 1) return;
//	//方向左上右下
//	vector<vector<int>> dir{ {-1,0},{0,-1},{1,0},{0,1} };
//	vector<vector<bool>> visited(m,vector<bool>(n,false));
//	queue<vector<int>> q;
//	int size,x,y,xx,yy,INF=INT_MAX,steps=0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (rooms[i][j] == 0)
//			{
//				q.push({i,j});
//				visited[i][j] = true;
//			}
//		}
//	}
//	while (!q.empty())
//	{
//		size = q.size();
//		while (size--)
//		{
//			x = q.front()[0];
//			y = q.front()[1];
//			q.pop();
//			if (rooms[x][y] == INF)
//				rooms[x][y] = steps;
//			for (int k = 0; k < 4; k++)
//			{
//				xx = x + dir[k][0];
//				yy = y + dir[k][1];
//				if (xx >= 0 && xx < m && yy>=0 && yy < n && !visited[xx][yy] && rooms[xx][yy]!=(-1))
//				{
//					visited[xx][yy] = true;
//					q.push({ xx,yy });
//				}
//			}
//		}
//		steps++;
//	}
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
//	int INF = INT_MAX;
//	vector<vector<int>> rooms({
//		{INF, -1 , 0 , INF},
//		{INF,INF ,INF, -1},
//		{INF, -1 ,INF ,-1},
//		{0 ,-1 ,INF ,INF} });
//	printvector2d(rooms);
//	wallsAndGates(rooms);
//	cout  << endl;
//	printvector2d(rooms);
//	return 0;
//}