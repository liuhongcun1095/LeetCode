////请根据每日 气温 列表，重新生成一个列表。对应位置的输出为：要想观测到更高的气温，至少需要等待的天数。如果气温在这之后都不会升高，请在该位置用 0 来代替。
////
////例如，给定一个列表 temperatures = [73, 74, 75, 71, 69, 72, 76, 73]，你的输出应该是 [1, 1, 4, 2, 1, 1, 0, 0]。
//#include<iostream>
//#include<vector>
//#include<stack>
//
//using namespace std;
//
//////复杂度n方过高，超出时间限制
////class Solution {
////public:
////    vector<int> dailyTemperatures(vector<int>& T) {
////        int size = T.size();
////        vector<int> ans;
////        if (size < 1) return ans;
////        int left = 0, right = left + 1;
////        while (left < size)
////        {
////            right = left + 1;
////            while (right < size && T[right] <= T[left])
////            {
////                right++;
////            }
////            if (right == size)
////            {
////                right = left;
////            }
////            ans.push_back((right-left));
////            left++;
////        }
////        return ans;
////    }
////};
//
//class Solution {
//public:
//    vector<int> dailyTemperatures(vector<int>& T) {
//        int m = T.size();
//        vector<int> ans(m,0);
//        stack<int> s;
//        for (int i = 0; i < m; i++)
//        {
//            while (!s.empty() && T[i] > T[s.top()])
//            {
//                ans[s.top()] = i - s.top();
//                s.pop();
//            }
//            s.push(i);
//        }
//        return ans;
//    }
//};
//
//void printVector1d(vector<int> v)
//{
//    for (int i = 0; i < v.size(); i++)
//    {
//        cout << v[i] << "  ";
//    }
//    cout << endl;
//}
//
//int main()
//{
//    vector<int> T{ 73, 74, 75, 71, 69, 72, 76, 73 };
//    Solution a;
//    vector<int> ans = a.dailyTemperatures(T);
//    printVector1d(ans);
//	return 0;
//}