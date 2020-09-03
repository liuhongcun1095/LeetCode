////克隆图 bfs
////给你无向 连通 图中一个节点的引用，请你返回该图的 深拷贝（克隆）。
////图中的每个节点都包含它的值 val（int） 和其邻居的列表（list[Node]）。
//#include<iostream>
//#include<vector>
//#include<queue>
//#include<unordered_map>
//
//using namespace std;
//
//class Node {
//public:
//    int val;
//    vector<Node*> neighbors;
//
//    Node() {
//        val = 0;
//        neighbors = vector<Node*>();
//    }
//
//    Node(int _val) {
//        val = _val;
//        neighbors = vector<Node*>();
//    }
//
//    Node(int _val, vector<Node*> _neighbors) {
//        val = _val;
//        neighbors = _neighbors;
//    }
//};
//
//class Solution {
//public:
//    unordered_map<Node*, Node*> visited;
//    Node* cloneGraph(Node* node) {
//        queue<Node*> q;
//        if (node == nullptr) return node;
//        q.push(node);
//        unordered_map<Node*, Node*> visited;
//        visited[node] = new Node(node->val);
//        while (!q.empty())
//        {
//            int sz = q.size();
//            while (sz--)
//            {
//                Node* temp = q.front();
//                q.pop();
//                for (Node* neighbor : temp->neighbors)
//                {
//                    if (visited.find(neighbor) == visited.end())
//                    {
//                        visited[neighbor] = new Node(neighbor->val);
//                        q.push(neighbor);
//                    }
//                    visited[temp]->neighbors.push_back(visited[neighbor]);
//                }
//            }
//        }
//        return visited[node];
//    }
//};
//
//int main()
//{
//    vector<vector<Node>> node{{2,4 }, { 1,3 }, { 2,4 }, { 1,3 }};
//    Solution a;
//    //Node* newNode = a.cloneGraph(node);
//    return 0;
//}