////二叉树的中序遍历
//#include<iostream>
//#include<vector>
//#include<stack>
//
//using namespace std;
//struct treenode
//{
//    int val;
//    treenode* left;
//    treenode* right;
//    treenode(int x) :val(x), left(nullptr), right(nullptr) {}
//
//};
//
//////递归
////class solution {
////public:
////    vector<int> ans;
////    vector<int> inordertraversal(treenode* root)
////    {
////        dfs(root);
////        return ans;
////    }
////    void dfs(treenode* root)
////    {
////        if (root == nullptr) return;
////        dfs(root->left);
////        ans.push_back(root->val);
////        dfs(root->right);
////        return;
////    }
////};
//
////非递归版本
//class solution {
//public:
//    vector<int> inordertraversal(treenode* root)
//    {
//        vector<int> ans;
//        stack<treenode*> node_temp;
//        if (root == nullptr) return  ans;
//        while (root != nullptr || !node_temp.empty())
//        {
//            if (root != nullptr)
//            {
//                
//                node_temp.push(root);
//                root = root->left;
//            }
//            else
//            {
//                ans.push_back(node_temp.top()->val);
//                root = node_temp.top()->right;
//                node_temp.pop();
//            }
//        }
//        return ans;
//    }
//};
//
//void printvector1d(vector<int> vec)
//{
//    for (int i = 0; i < vec.size(); i++)
//    {
//        cout << vec[i] << "  ";
//    }
//    cout << endl;
//}
//
//int main()
//{
//    treenode* root = new treenode(1);
//    treenode* right1 = new treenode(2);
//    root->right = right1;
//    treenode* left1 = new treenode(3);
//    right1->left = left1;
//    solution a;
//    vector<int> ans = a.inordertraversal(root);
//    printvector1d(ans);
//    return 0;
//}