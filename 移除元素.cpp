////ÒÆ³ýÔªËØ
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int removeElement(vector<int>& nums, int val) {
//	int m = nums.size();
//	if (m < 1) return 0;
//	sort(nums.begin(), nums.end());
//	int left = 0, right = 0;
//	while (right < m)
//		if (nums[right] == val) right++;
//		else nums[left++] = nums[right++];
//	return (left);
//
//}
//
//int main()
//{
//	vector<int> vec{3,2,2,3};
//	int val = 3;
//	int size=removeElement(vec, val);
//	cout << size << endl;
//	return 0;
//}