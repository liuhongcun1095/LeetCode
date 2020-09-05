//////计算字符串最后一个单词的长度，单词以空格隔开。
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//    string s;
//    getline(cin,s);
//    if (s.size() <= 1)
//    {
//        cout << s.size();
//        return 0;
//    }
//    int count = 0;
//    for (int i = s.size()-1; i >= 0; i--)
//    {
//        if (s[i] == ' ')
//        {
//            break;
//        }
//        count++;
//    }
//    cout << count << endl;
//    return 0;
//}