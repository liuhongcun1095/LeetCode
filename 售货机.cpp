//案例 
//4
//1 2 3 4
//输出：1 2 3 4
//说明： 1 * 2 <= 2 * 3     2 * 3 <= 3 * 4; 
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    int n,m;
    cin >> n>>m;
    vector<vector<int>> vec(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    return 0;
}