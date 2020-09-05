////案例 
////4
////1 2 3 4
////输出：1 2 3 4
////说明： 1 * 2 <= 2 * 3     2 * 3 <= 3 * 4; 
//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<set>
//
//using namespace std;
//
//void Perm1(vector<int>vec, int left, int size, bool& flag)
//{
//    if (flag == true)
//        return;
//    if (left + 1 == size)
//    {
//        int m = vec.size();
//        bool t = true;
//        for (int i = 0; i < m - 2; i++)
//            if (vec[i] * vec[i + 1] > vec[i + 1] * vec[i + 2])
//                t = false;
//        if (t == true)
//        {
//            for (int i :vec)
//            {
//                cout << i << " ";
//            }
//            flag = true;
//            cout << endl;
//            return;
//        }
//    }
//    for (int i = left; i < size; i++)
//    {
//        swap(vec[i], vec[left]);
//        Perm1(vec, left + 1, size, flag);
//        swap(vec[i], vec[left]);
//    }
//}
//
//void Permutation1(vector<int> vec)
//{
//    if (vec.size() < 1) return;
//    bool flag = false;
//    Perm1(vec, 0, vec.size(), flag);
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
//    Permutation1(vec);
//    return 0;
//}