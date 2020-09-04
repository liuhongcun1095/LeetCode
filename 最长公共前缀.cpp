////最长公共前缀
//#include<iostream>
//#include<vector>
//#include<cstring>
//
//using namespace std;
//
//string longestCommonPrefix(vector<string>& strs) {
//    string s;
//    if (strs.empty()) return s;
//    for (int index=0; index < strs[0].size(); index++)
//    {
//        char temp = strs[0][index];
//        for (int i = 1; i < strs.size(); i++)
//        {
//            if ((strs[i][index] != temp) || (i==strs[index].size()))
//            {
//                return strs[0].substr(0, index);
//            }
//        }
//    }
//    return strs[0];
//}
//
//int main()
//{
//    vector<string> strs{ "dog","racecar","car"};
//    string s=longestCommonPrefix(strs);
//    cout << s << endl;
//    return 0;
//}