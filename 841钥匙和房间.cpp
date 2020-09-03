////钥匙和房间 bfs
////有 N 个房间，开始时你位于 0 号房间。每个房间有不同的号码：0，1，2，...，N-1，并且房间里可能有一些钥匙能使你进入下一个房间。
////在形式上，对于每个房间 i 都有一个钥匙列表 rooms[i]，每个钥匙 rooms[i][j] 由[0, 1，...，N - 1] 中的一个整数表示，其中 N = rooms.length。 钥匙 rooms[i][j] = v 可以打开编号为 v 的房间。
////最初，除 0 号房间外的其余所有房间都被锁住。
////你可以自由地在房间之间来回走动。
////如果能进入每个房间返回 true，否则返回 false。
////输入： [[1, 3], [3, 0, 1], [2], [0]]
////输出：false
////解释：我们不能进入 2 号房间。
//#include<iostream>
//#include<vector>
//#include<queue>
//#include<set>
//
//using namespace std;
//
////class Solution {
////public:
////    bool canVisitAllRooms(vector<vector<int>>& rooms) {
////        int m = rooms.size();
////        if (m == 0) return false;
////        set<int> set_q;
////        set_q.emplace(0);
////        vector<bool> visited(m, false);
////        while (!set_q.empty())
////        {
////            vector<int> v;
////            int size = set_q.size();
////            bool flag = false;
////            for (set<int>::iterator i = set_q.begin(); i != set_q.end(); i++)
////            {
////                if (visited[*i] == false)
////                {
////                    for (int j = 0; j < rooms[*i].size(); j++)
////                    {
////                        set_q.emplace(rooms[*i][j]);
////                    }
////                    flag = true;
////                }
////                visited[*i] = true;
////            }
////            if (flag == false)
////                break;
////        }
////        return (set_q.size() == m);
////    }
////};
//
//class Solution {
//public:
//    bool canVisitAllRooms(vector<vector<int>>& rooms) {
//        int m = rooms.size();
//        if (m == 0) return false;
//        queue<int> q;
//        q.emplace(0);
//        set<int> set_q;
//        set_q.emplace(0);
//        while (!q.empty())
//        {
//            int size = q.size();
//            while (size--)
//            {
//                int temp = q.front();
//                q.pop();
//                for (int i = 0; i < rooms[temp].size(); i++)
//                {
//                    if (!set_q.count(rooms[temp][i]))
//                    {
//                        q.emplace(rooms[temp][i]);
//                        set_q.emplace(rooms[temp][i]);
//                    }
//                }
//            }
//        }
//        return (set_q.size() == m);
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
//    vector<vector<int>> rooms;
//    rooms.push_back({ 1,3 });
//    rooms.push_back({ 3,0,1 });
//    rooms.push_back({ 2 });
//    rooms.push_back({ 0 });
//    //printVector2d(rooms);
//    //cout << endl;
//    Solution a;
//    cout << a.canVisitAllRooms(rooms) << endl;
//	return 0;
//}