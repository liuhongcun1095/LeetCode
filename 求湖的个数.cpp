////求湖的个数，岛屿问题  bfs  或  dfs(考试的时候尽量写dfs，dfs代码少写得快)
//#include<iostream>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
////bfs
//int getLakeNum_bfs(vector<vector<int>> lake)
//{
//	int steps = 0;
//	int m = lake.size();
//	if (m == 0) return 0;
//	int n = lake[0].size();
//	vector<vector<int>> dp{ {-1,0},{1,0},{0,-1},{0,1} };
//	queue<pair<int,int>> q;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (lake[i][j] == 1)
//			{
//				q.push({ i,j });
//				while (!q.empty())
//				{
//					int x=q.front().first;
//					int y=q.front().second;
//					q.pop();
//					lake[x][y] = 0;
//					for (int k = 0; k < 4; k++)
//					{
//						int xx = x + dp[k][0];
//						int yy = y + dp[k][1];
//						if (xx < 0 || yy < 0 || xx >= m || yy >= n || lake[xx][yy]==0)
//							continue;
//						else
//						{
//							q.push({xx,yy});
//							lake[xx][yy] = 0;
//						}
//					}
//				}
//				steps++;
//			}
//		}
//	}
//	return steps;
//}
////dfs
//void dfs(vector<vector<int>> &vec,int i,int j)
//{
//	int m = vec.size();
//	int n = vec[0].size();
//	vec[i][j] = 0;
//	if (i - 1 >= 0 && vec[i-1][j]==1) dfs(vec, i - 1, j);
//	if (i + 1 < m  && vec[i+1][j]==1) dfs(vec, i + 1, j);
//	if (j - 1 >= 0 && vec[i][j-1]==1) dfs(vec, i, j - 1);
//	if (j + 1 < n  && vec[i][j+1]==1) dfs(vec, i, j + 1);
//	return;
//}
//
//int getLakeNum_dfs(vector<vector<int>> lake)
//{
//	int m = lake.size();
//	if (m == 0) return 0;
//	int n = lake[0].size();
//	int steps = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (lake[i][j] == 1)
//			{
//				dfs(lake, i, j);
//				steps++;
//			}
//		}
//	}
//	return steps;
//}
//
//int main()
//{
//	vector<vector<int>> lake{ {1,1,0,0,0},{1,1,0,0,0},{0,0,1,0,0},{0,0,0,1,1} };
//	cout << getLakeNum_dfs(lake);
//	return 0;
//}