//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<set>
//
//using namespace std;
//
//vector<string> Permutation2(string str)
//{
//    if (str.length() < 1) return {};
//    set<string> s;
//    do {
//        s.insert(str);
//    } while (next_permutation(str.begin(), str.end()));
//    return vector<string>({ s.begin(),s.end() });
//}
//
//void printVector1d(vector<string> v)
//{
//    for (int i = 0; i < v.size(); i++)
//    {
//        cout << v[i] << endl;
//    }
//    cout << endl;
//}
//
//int main()
//{
//    string str;
//    cin >> str;
//    vector<string> ans = Permutation2(str);
//    printVector1d(ans);
//    return 0;
//}