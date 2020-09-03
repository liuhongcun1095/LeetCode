////移除K位得到最小值
//#include<vector>
//#include<string>
//#include <iostream>
//using namespace std;
//class Solution
//{
//public:
//    Solution() {}
//    ~Solution() {}
//    std::string removeKdigits(std::string num, int k)
//    {
//        std::vector<int> S;      //使用vector当做栈(因为vector可以遍历)
//        std::string result = "";    //存储最终结果的字符串
//        for (unsigned int i = 0; i < num.length(); i++)   //从最高为循环扫描数字num
//        {
//            int number = num[i] - '0';   //将字符型的num转化为整数使用
//            while (S.size() != 0 && S[S.size() - 1] > number && k > 0)
//            {
//                S.pop_back();  //当栈不为空，栈顶元素大于数number，仍然可以删
//                k--;
//            }
//            if (number != 0 || S.size() != 0)    //栈不为空或者数字不为0
//            //当栈为空且number为0时，不能将该number加入栈中。
//            {
//                S.push_back(number);
//            }
//        }
//        while (S.size() != 0 && k > 0)
//        {
//            S.pop_back();
//            k--;
//        }
//        for (unsigned i = 0; i < S.size(); i++)
//        {
//            result.append(1, '0' + S[i]);        //整数转字符
//        }
//        if (result == "")
//        {
//            result = "0";
//        }
//        return result;
//    }
//};
//int main()
//{
//    Solution solve;
//    string s;
//        int k;
//    cin >> s >> k;
//    std::string result1 = solve.removeKdigits(s,k);
//    printf("%s\n", result1.c_str());
//    return 0;
//}
//
