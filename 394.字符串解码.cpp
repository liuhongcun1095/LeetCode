////字符串解码
////输入：s = "3[a]2[bc]"
////输出："aaabcbc"
////输入：s = "3[a2[c]]"
////输出："accaccacc"
//#include<iostream>
//#include<stack>
//#include<vector>
//#include<string>
//
//using namespace std;
//
//
//class Solution {
//public:
//    string decodeString(string s) {
//        if (s.empty()) return s;
//        stack<char> stack_str;
//        string ans{""};
//        int num_temp = 0;
//        int size = s.size();
//        for (int i = 0; i < size; i++)
//        {
//		    if(s[i] == ']')
//            {
//                vector<char> temp;
//                while (stack_str.top() != '[')
//                {
//                    temp.emplace_back(stack_str.top());
//                    stack_str.pop();
//                }
//                stack_str.pop();
//                string str_temp = "";
//                while (!stack_str.empty() && stack_str.top() >= '0' && stack_str.top() <= '9')
//                {
//                    str_temp += stack_str.top();
//                    stack_str.pop();
//                }
//                reverse(str_temp.begin(),str_temp.end());
//                num_temp = stoi(str_temp);
//                reverse(temp.begin(), temp.end());
//                int size_vec = temp.size();
//                for (int j = 0; j < num_temp-1; j++)
//                {
//                    for (int k = 0; k < size_vec; k++)
//                    {
//                        temp.emplace_back(temp[k]);
//                    }
//                }
//                for(int j=0;j<temp.size();j++)
//                {
//                    stack_str.emplace(temp[j]);
//                }
//            }
//            else
//            stack_str.emplace(s[i]);
//        }
//        while (!stack_str.empty())
//        {
//            ans += stack_str.top();
//            stack_str.pop();
//        }
//        reverse(ans.begin(),ans.end());
//        return ans;
//    }
//};
//
//int main()
//{
//    string s = "100[leetcode]";
//    Solution a;
//    cout << a.decodeString(s) << endl;
//	return 0;
//}