////删除数组中的重复项
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int removeDuplicates(vector<int>& nums) {
//	int m = nums.size();
//	if (m <= 1) return m;
//	int left = 0, right=1;
//	while (right < m)
//	{
//		if (nums[right] == nums[right - 1]) right++;
//		else
//		{
//			left++;
//			nums[left] = nums[right];
//			right++;
//		}
//	}
//	return (left + 1);
//}
//
//void printvector1d(vector<int> vec)
//{
//		for (int j = 0; j < vec.size(); j++)
//		{
//			cout << vec[j] << "  ";
//		}
//		cout << endl;
//}
//
//int main()
//{
//	vector<int> vec{ 0,0,1,1,1,2,2,3,3,4 };
//	int size = removeDuplicates(vec);
//	cout << size << endl;
//	vec.resize(size);
//	printvector1d(vec);
//	return 0;
//}