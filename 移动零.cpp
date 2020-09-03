////“∆∂Ø¡„
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//void moveZeroes(vector<int>& nums) {
//	int m = nums.size();
//	if (m <= 1) return;
//	int left = 0, right = left;
//	while (left <m)
//	{
//		if (right >= m)
//		{
//			while (left < m) nums[left++] = 0;
//			break;
//		}
//		if (nums[right] != 0)
//		{
//			nums[left++] = nums[right];
//		}
//		right++;
//	}
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
//	vector<int> vec = { 0,0,0};
//	moveZeroes(vec);
//	printvector1d(vec);
//	return 0;
//}