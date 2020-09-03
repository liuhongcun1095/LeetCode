//////根据 逆波兰表示法，求表达式的值。计算后缀表达式求值
//////有效的运算符包括  + , -, *, / 。每个运算对象可以是整数，也可以是另一个逆波兰表达式。
//////说明：
//////整数除法只保留整数部分。
//////给定逆波兰表达式总是有效的。换句话说，表达式总会得出有效数值且不存在除数为 0 的情况。
//#include<iostream>
//#include<vector>
//#include<stack>
//#include <sstream>
//
//using namespace std;
//
//class Solution {
//public:
//    int evalRPN(vector<string>& tokens) {
//        stack<int> s;
//        int ret = 0;
//        int size = tokens.size();
//        int temp1, temp2, ans;
//        for (int i = 0; i < size; i++)
//        {
//            if (tokens[i] == "+" )
//            {
//                temp2 = s.top();
//                s.pop();
//                temp1 = s.top();
//                s.pop();
//                ans = temp1 + temp2;
//                s.push(ans);
//            }
//            else if (tokens[i] == "-")
//            {
//                temp2 = s.top();
//                s.pop();
//                temp1 = s.top();
//                s.pop();
//                ans = temp1 - temp2;
//                s.push(ans);
//            }
//            else if (tokens[i] == "*")
//            {
//                temp2 = s.top();
//                s.pop();
//                temp1 = s.top();
//                s.pop();
//                ans = temp1 * temp2;
//                s.push(ans);
//            }
//            else if (tokens[i] == "/")
//            {
//                temp2 = s.top();
//                s.pop();
//                temp1 = s.top();
//                s.pop();
//                ans = temp1 / temp2;
//                s.push(ans);
//            }
//            else
//                s.push(stoi(tokens[i]));
//        }
//        if (!s.empty())
//        {
//            ret = s.top();
//        }
//         return ret;
//    }
//};
//
//int main()
//{
//    vector<string> tokens = { "4","13","5","/","+" };
//    Solution a;
//    int ret=a.evalRPN(tokens);
//    cout << ret << endl;
//	return 0;
//}