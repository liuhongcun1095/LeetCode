////有效的括号：给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。
////
////有效字符串需满足：
////
////左括号必须用相同类型的右括号闭合。
////左括号必须以正确的顺序闭合。
////注意空字符串可被认为是有效字符串。
////
//#include<iostream>
//#include<map>
//#include<string>
//#include<stack>
//
//using namespace std;
//
//class Solution {
//private:
//    stack<char> stack1;
//    map<char, int> mp;
//public:
//    bool isValid(string s) {
//        if (s.size() & 1) return false;
//        if (s.empty()) return true;
//        mp = { {'(',1},{'[',2},{'{',3},{')',4},{']',5},{'}',6} };
//        for (char i : s)
//        {
//            int flag = mp[i];
//            if (flag <= 3 && flag >= 0)
//                stack1.push(i);
//            else if (flag >= 4 && flag <= 6)
//            {
//                if ((stack1.empty()) || (mp[stack1.top()] != flag - 3))
//                    return false;
//                stack1.pop();
//            }
//            else
//                return false;
//        }
//        return stack1.empty();
//    }
//};
//
//int main()
//{
//    string s{"()"};
//    Solution a;
//    bool ans=a.isValid(s);
//    cout << ans << endl;
//	return 0;
//}