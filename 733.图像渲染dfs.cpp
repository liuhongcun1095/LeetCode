////ͼ����Ⱦ��dfs 
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
//        dfs(image,sr,sc, oldColor,newColor);
//        return image;
//        
//    }
//    void dfs(vector<vector<int>>& image, int r, int c, int oldCorlor, int newColor)
//    {
//        int m = image.size(), n = image[0].size();
//        if (r < 0 || c < 0 || r >= m || c >= n)
//            return;
//        image[r][c] = newColor;
//        if (r - 1 >= 0 && image[r-1][c]==oldCorlor) dfs(image,r-1,c,oldCorlor,newColor);
//        if (r + 1 < m && image[r+1][c]==oldCorlor) dfs(image,r+1,c,oldCorlor,newColor);
//        if (c - 1 >= 0 && image[r][c - 1] == oldCorlor) dfs(image, r , c - 1, oldCorlor, newColor);
//        if (c + 1 < n && image[r][c + 1]==oldCorlor) dfs(image,r,c + 1,oldCorlor,newColor);
//        return;
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