////实现strStr  KMP算法
//#include<iostream>
//#include<vector>
//#include<Cstring>
//
//using namespace std;
//
//
//int strStr(string haystack, string needle) {
//    if (needle.empty()) return 0;
//    if (needle.size() > haystack.size()) return -1;
//    vector<int> next(needle.size(),-1);
//    int m = haystack.size(), n = needle.size();
//    int i = 0,j = -1;
//    while (i < n - 1)
//    {
//        if ((j == -1) || (needle[i] == needle[j]))
//        {
//            i++, j++;
//            if (needle[i] == needle[j]) next[i] = next[j];
//            else next[i] = j;
//        }
//        else j = next[j];
//    }
//    i = 0, j = 0;
//    while ((i< m )&&(j< n))
//    {
//        if ((j == -1) || (haystack[i] == needle[j])) i++, j++;
//        else j = next[j];
//    }
//    return (j==needle.size()) ? (i-j) : -1;
//}
////
////int strStrbaoli(string haystack, string needle) {
////    if (needle.empty()) return 0;
////    if (needle.size()>haystack.size()) return -1;
////    for (int i = 0; i < haystack.size()- needle.size(); i++)
////    {
////        if (haystack[i] == needle[0])
////        {
////            int index = i;
////            for (int j = 0; j < needle.size(); j++)
////            {
////                if (haystack[index] != needle[j]) break;
////                index++;
////            }
////            if ((index - i) == needle.size()) return i;
////
////        }
////    }
////    return -1;
////}
////
////int strStr1(string haystack, string needle) {
////    if (needle.empty())
////        return 0;
////    int pos = haystack.find(needle);
////    return pos;
////}
////
////void printvector1d(vector<int> vec)
////{
////	for (int i = 0; i < vec.size(); i++)
////	{
////		cout << vec[i]<< "   ";	
////	}
////	cout << endl;
////}
////
////vector<int> get_next(const string& pat) {
////    int n = pat.size();
////    vector<int> next(n , -1);//这里数组大小为n+1，要算上pat[n-1]
////    int k = -1, j = 0;
////    while (j < n-1) {
////        if (k == -1 || pat[k] == pat[j])next[++j] = ++k;//k，j指针都右移一位
////        else k = next[k];//后缀指针k回退到next[k]（下标）的位置
////    }
////    return next;
////}
////
////vector<int> get_nextVal(const string& pat) {
////    int n = pat.size();
////    vector<int> nextVal(n, -1);//这里next数组大小为n，已经算上pat[n-1]了
////    int k = -1, j = 0;
////    while (j < n - 1) {
////        if (k == -1 || pat[k] == pat[j]) {
////            k++, j++;
////            if (pat[j] != pat[k])nextVal[j] = k;
////            else nextVal[j] = nextVal[k];
////        }
////        else k = nextVal[k];
////    }
////    return nextVal;
////}
//
//int main()
//{
//    string haystack = "mississippi", needle = "issi";
//    int index=strStr(haystack, needle);
//
//    //vector<int>vec= get_next(needle);
//    //vector<int>vec2= get_nextVal(needle);
//    //printvector1d(vec);
//    //printvector1d(vec2);
//    cout << index << endl;
//    return 0;
//}