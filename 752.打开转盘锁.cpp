//// 打开转盘锁 BFS广度优先搜索
//
////你有一个带有四个圆形拨轮的转盘锁。每个拨轮都有10个数字： '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' 。每个拨轮可以自由旋转：例如把 '9' 变为  '0'，'0' 变为 '9' 。每次旋转都只能旋转一个拨轮的一位数字。
////
////锁的初始数字为 '0000' ，一个代表四个拨轮的数字的字符串。
////
////列表 deadends 包含了一组死亡数字，一旦拨轮的数字和列表里的任何一个元素相同，这个锁将会被永久锁定，无法再被旋转。
////
////字符串 target 代表可以解锁的数字，你需要给出最小的旋转次数，如果无论如何不能解锁，返回 -1。
////示例1：
////输入：deadends = ["0201","0101","0102","1212","2002"], target = "0202"
////输出：6
////解释：
////可能的移动序列为 "0000" -> "1000" -> "1100" -> "1200" -> "1201" -> "1202" -> "0202"。
////注意 "0000" -> "0001" -> "0002" -> "0102" -> "0202" 这样的序列是不能解锁的，
////因为当拨动到 "0102" 时这个锁就会被锁定。
////示例 2:
////
////输入: deadends = ["8888"], target = "0009"
////输出：1
////解释：
////把最后一位反向旋转一次即可 "0000" -> "0009"。
//
//#include<iostream>
//#include<vector>
//#include<set>
//#include<queue>
//#include<string>
//
//using namespace std;
//
//int openLock(vector<string>& deadends, string target) {
//	string start = "0000";
//	int cur = 0;  // 表示当前移动序列的长度
//	queue<string> que;
//	set<string> visited;
//	que.emplace(start);  //存储访问过的
//    visited.insert(deadends.begin(),deadends.end());
//    // 如果起始节点和目标节点是死锁
//    if (visited.find(start) != visited.end())    return -1;
//    if (visited.find(target) != visited.end())    return -1;
//    visited.emplace(start);
//    while (!que.empty()) {
//        int size = que.size(); // 这里一定要先转换成size以后再for循环不要直接 for(int s=0;s<que.size();s++)，不然for循环中一直push，就不是一层一层的BFS了
//        // 相当于遍历二叉树的每一层
//        while(size--)
//        {
//            string top = que.front();
//            que.pop();
//            if (top.compare(target) == 0) {
//                return cur;
//            }
//            // 旋转转盘锁
//            for (int i = 0; i < 4; i++) {
//                string temp = top;
//                for (int j = 0; j < 2; j++)
//                {
//                    if (j==0)
//                        // 向右转加1 9变0
//                         temp[i] = (top[i] - '0' + 1) % 10 + '0';
//                    else
//                         // 向左转-1 0变9
//                         temp[i] = (top[i] - '0' + 9) % 10 + '0';
//                    bool a = (visited.find(temp) == visited.end());
//                    // 如果没有被访问过且不是死锁就加入que
//                    if (a) {
//                        visited.emplace(temp);
//                        que.emplace(temp);
//                    }
//                }
//            }
//        }
//        cur++;
//    }
//    return -1;
//}
//
//int main()
//{
//    vector<string> deadends{ "0201","0101","0102","1212","2002" };
//    string target{"0202"};
//    int count= openLock(deadends,target);
//    cout << count << endl;
//	return 0;
//}
