////克隆图 dfs
////给你无向 连通 图中一个节点的引用，请你返回该图的 深拷贝（克隆）。
////图中的每个节点都包含它的值 val（int） 和其邻居的列表（list[Node]）。
//#include<iostream>
//#include<vector>
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
//        if (node == nullptr)
//        {
//            return node;
//        }
//        if (visited.find(node) != visited.end())
//        {
//            return visited[node];
//        }
//        Node* cloneNode = new Node(node->val);
//        visited[node] = cloneNode;
//
//        for (Node* neighbor : node->neighbors)
//        {
//            cloneNode->neighbors.push_back(cloneGraph(neighbor));
//        }
//        return cloneNode;
//    }
//
//    Node* visited2[110];
//    Node* cloneGraph2(Node* node) {
//        if (node == nullptr)
//        {
//            return node;
//        }
//        if (visited2[node->val])
//        {
//            return visited2[node->val];
//        }
//        Node* cloneNode = new Node(node->val);
//        visited2[node->val] = cloneNode;
//
//        for (Node* neighbor : node->neighbors)
//        {
//            cloneNode->neighbors.push_back(cloneGraph2(neighbor));
//        }
//        return cloneNode;
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