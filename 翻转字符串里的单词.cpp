////翻转字符串里的单词
//#include<iostream>
//#include<cstring>
//
//using namespace std;
//
//string reverseWords(string s) {
//    string ans;
//    int i=0,j=s.size()-1;
//    for (i; (i < s.size()) && (s[i] == ' '); i++);
//    for (j; (j>=0) && (s[j] == ' '); j--);
//    s = s.substr(i,(j-i+1));
//    s = ' ' + s;
//    j = s.size() - 1;
//    for (i = s.size()-1; i >=0; i--)
//    {
//        if (s[i] == ' ')
//        {
//            ans += s.substr(i,(j-i+1));
//            j = i;
//            while ((j >= 0)&&(s[j] == ' ')) j--;
//            i = j;
//        }
//    }
//    ans = ans.substr(1);
//    return ans;
//}
//
//int main()
//{
//    string s="a good   example";
//    cout << s << endl;
//    string s2= reverseWords(s);
//    cout<<endl;
//    cout << s2 << endl;
//    return 0;
//}