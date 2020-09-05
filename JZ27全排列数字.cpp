//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<set>
//
//using namespace std;
//
//void Perm1(vector<int>vec, int left, int size, set<vector<int>>& s)
//{
//    if (left + 1 == size)
//        s.insert(vec);
//    for (int i = left; i < size; i++)
//    {
//        swap(vec[i], vec[left]);
//        Perm1(vec, left + 1, size, s);
//        swap(vec[i], vec[left]);
//    }
//}
//
//vector<vector<int>> Permutation1(vector<int> vec)
//{
//    if (vec.size() < 1) return {};
//    set<vector<int>> s;
//    Perm1(vec, 0, vec.size(), s);
//    return vector<vector<int>>({ s.begin(), s.end() });
//}
//
//void printvector2d(vector<vector<int>> vec)
//{
//	for (int i = 0; i < vec.size(); i++)
//	{
//		for (int j = 0; j < vec[i].size(); j++)
//		{
//			cout << vec[i][j] << "  ";
//		}
//		cout << endl;
//	}
//}
//
//int main()
//{
//    int n;
//    cin >> n;
//    vector<int> vec(n, 0);
//    for (int i = 0; i < n; i++)
//    {
//        cin >> vec[i];
//    }
//    vector<vector<int>> ans = Permutation1(vec);
//    printvector2d(ans);
//    return 0;
//}