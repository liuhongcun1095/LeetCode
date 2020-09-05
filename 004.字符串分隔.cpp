////•连续输入字符串，请按长度为8拆分每个字符串后输出到新的字符串数组；
////•长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。
//#include<iostream>
//#include<cstring>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//    string s;
//    for (int i = 0; i < 2; i++)
//    {
//        getline(cin, s);
//        int sz = s.size() % 8;
//        for (int j = 0; j < (8 - sz) && sz != 0; j++)
//        {
//            s.append("0");
//        }
//        for (int j = 0; j < s.size(); j++)
//        {
//            if (j % 8 == 0 && j!=0)
//            {
//                cout << endl;
//            }
//            cout << s[j];
//        }
//        cout << endl;
//    }
//    return 0;
//}