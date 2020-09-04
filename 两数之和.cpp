////两数之和
//#include<iostream>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//
//vector<int> twoSum(vector<int>& numbers, int target) {
//    int m=numbers.size();
//    vector<int> vec;
//    if (m < 2) return vec;
//    int left = 0, temp=0;
//    while ((left < m) && (numbers[left] <= target / 2))
//    {
//        temp = target - numbers[left];
//        int i = left + 1, j = m - 1;
//        while (i <= j)
//        {
//            int mid = (j - i) / 2 + i;
//            if (numbers[mid] == temp)
//            {
//                vec.push_back(left+1);
//                vec.push_back(mid+1);
//                return vec;
//            }
//            else if (numbers[mid] < temp) i = mid + 1;
//            else j = mid - 1;
//        }
//        left++;
//    }
//    return vec;
//}
//
//
//int main()
//{
//    vector<int> vec{5,25,75};
//    int target = 100;
//    vector<int> v= twoSum(vec,target);
//    cout << v[0]<<"  "<<v[1] << endl;
//    return 0;
//}