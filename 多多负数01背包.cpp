////01背包问题 没做出来
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
////动态规划1dimension
//int maxValue(vector<int>v, vector<int>w, int V)
//{
//    vector<int> f(5001, 0);
//    for (int i = 0; i < v.size(); i++)
//    {
//        if (v[i] > 0)
//        {
//            for (int j = V; j >= v[i]; j--)
//            {
//                f[j] = max(f[j], f[j - v[i]] + w[i]);
//            }
//        }
//        else
//        {
//            /*for (int k = V; k <= V - v[i]; k++)
//             f[k] = f[V];*/
//            bool flag = false;
//            for (int j = V - v[i]; j >= 0; j--)
//            {
//                if (f[j - v[i]] + w[i] > f[j])
//                {
//                    f[j] = f[j - v[i]] + w[i];
//                    flag = true;
//                }
//            }
//            /*if (flag)
//            {
//             V = V - v[i];
//            }*/
//        }
//    }
//    int max = f[0];
//    for (int i = 0; i < 5001; i++)
//    {
//        if (f[i] > max) max = f[i];
//    }
//    return max;
//}
//
//int main()
//{
//    int N, V;
//    //cin >> N >> V;
//    //vector<int> w(N, 0), v(N, 0);
//    /*for (int i = 0; i < N; i++)
//    {
//        cin >> v[i] >> w[i];
//    }*/
//    N = 4, V = 4;
//    vector<int> w(N, 0), v(N, 0);
//    v={-1,1,-1,6};
//    w = {-1,-1,1,6};
//    cout << maxValue(v, w, V) << endl;
//    return 0;
//}