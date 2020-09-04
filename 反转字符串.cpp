////·´×ª×Ö·û´®
//#include<iostream>
//#include<cstring>
//#include<vector>
//
//using namespace std;
//
//void reverseStrin1g(vector<char>& s) {
//    if (s.empty()) return;
//    char temp;
//    int left = 0, right = s.size() - 1;
//    while (left < right)
//        temp = s[left], s[left++] = s[right], s[right--] = temp;
//}
//void reverseString(vector<char>& s) {
//    reverse(s.begin(), s.end());
//}
//
//template<class T>
//void printvector1d(vector<T> vec)
//{
//	for (int i = 0; i < vec.size(); i++)
//	{
//		cout << vec[i]<< "   ";	
//	}
//	cout << endl;
//}
//
//int main()
//{
//    vector<char> s{'h','e','l','l','o'};
//    printvector1d(s);
//    reverseString(s);
//    printvector1d(s);
//    return 0;
//}