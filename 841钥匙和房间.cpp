////Կ�׺ͷ��� bfs
////�� N �����䣬��ʼʱ��λ�� 0 �ŷ��䡣ÿ�������в�ͬ�ĺ��룺0��1��2��...��N-1�����ҷ����������һЩԿ����ʹ�������һ�����䡣
////����ʽ�ϣ�����ÿ������ i ����һ��Կ���б� rooms[i]��ÿ��Կ�� rooms[i][j] ��[0, 1��...��N - 1] �е�һ��������ʾ������ N = rooms.length�� Կ�� rooms[i][j] = v ���Դ򿪱��Ϊ v �ķ��䡣
////������� 0 �ŷ�������������з��䶼����ס��
////��������ɵ��ڷ���֮�������߶���
////����ܽ���ÿ�����䷵�� true�����򷵻� false��
////���룺 [[1, 3], [3, 0, 1], [2], [0]]
////�����false
////���ͣ����ǲ��ܽ��� 2 �ŷ��䡣
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