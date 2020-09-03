////岛屿数量 给你一个由 '1'（陆地）和 '0'（水）组成的的二维网格，请你计算网格中岛屿的数量。
////岛屿总是被水包围，并且每座岛屿只能由水平方向或竖直方向上相邻的陆地连接形成。
////此外，你可以假设该网格的四条边均被水包围。
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//class Solution {
//private:
//    void dfs(vector<vector<char>>& grid, int r, int c) {    // 深度优先算法，感觉就是个递归
//        int nr = grid.size();   // 岛屿大小
//        int nc = grid[0].size();
//
//        grid[r][c] = '0';       // 将当前位置置0
//        if (r - 1 >= 0 && grid[r - 1][c] == '1') dfs(grid, r - 1, c); // 判断上下左右，如果有的话，继续递归
//        if (r + 1 < nr && grid[r + 1][c] == '1') dfs(grid, r + 1, c);
//        if (c - 1 >= 0 && grid[r][c - 1] == '1') dfs(grid, r, c - 1);
//        if (c + 1 < nc && grid[r][c + 1] == '1') dfs(grid, r, c + 1);
//    }
//public:
//    int numIslands(vector<vector<char>>& grid) {
//        int nr = grid.size();//总行数
//        if (!nr) return 0;
//        int nc = grid[0].size();//总列数
//
//        int num_island = 0;
//        for (int r = 0; r < nr; ++r) {
//            for (int c = 0; c < nc; ++c) {
//                if (grid[r][c] == '1') {
//                    ++num_island;     // 如果遇到 1 就 +1
//					dfs(grid, r, c);    // 然后递归就完了
//                }
//            }
//        }
//        return num_island;
//    }
//} ;
//
//int main()
//{
//    vector<vector<char>> grid
//      { {'1','1','0','0','0'} ,
//        {'1','1','0','0','0'},
//        {'0','0','1','0','0' },
//        {'0', '0', '0', '1', '1'} };
//    Solution a;
//    int ret = a.numIslands(grid);
//    cout << ret << endl;
//	return 0;
//}
