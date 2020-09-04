////左上到右下的最短路径 jpp
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int dp[4][2] = { {0,1},{0,-1},{-1,0},{1,0} };
//int ans = INT_MAX;
//void dfs(vector<vector<int>> nums, vector<vector<bool>> visited,int i,int j,int ret)
//{
//	if (i == nums.size() - 1 && j == nums.size() - 1)
//	{
//		ans = min(ret, ans);
//		return;
//	}
//	if (ret > ans) return;
//	for (int k = 0; k < 4; k++)
//	{
//		int xx = i + dp[k][0];
//		int yy = j + dp[k][1];
//		if (xx < 0 || xx >= nums.size() || yy < 0 || yy >= nums.size()||visited[xx][yy])
//			continue;
//		ret += (nums[xx][yy] - nums[i][j] > 0 ? nums[xx][yy] - nums[i][j] : nums[i][j] - nums[xx][yy]);
//		visited[xx][yy] = true;
//		dfs(nums,visited,xx,yy,ret);
//		visited[xx][yy] = false;
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	vector<vector<int>> nums(n, vector<int>(n, 0));
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			cin >> nums[i][j];
//	vector<vector<bool>> visited(n, vector<bool>(n, false));
//	visited[0][0] = true;
//	dfs(nums,visited,0,0,0);
//	cout << ans << endl;
//	return 0;
//}
