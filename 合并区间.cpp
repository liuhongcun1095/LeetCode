////合并区间
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//void printvector2d(vector < vector<int>> vec)
//{
//	for (int i = 0; i < vec.size(); i++)
//	{
//		for (int j = 0; j < vec[i].size(); j++)
//		{
//			cout << vec[i][j] << "   ";
//		}
//		cout << endl;
//	}
//}
//vector<vector<int>> merge(vector<vector<int>>& intervals) {
//	for (int i = 1; i < intervals.size(); i++)
//	{
//		int temp = intervals[i][0];
//		for (int j = i - 1; (j >= 0) && (intervals[j][0] > temp); j--)
//			swap(intervals[j], intervals[j + 1]);
//	}
//	//printvector2d(intervals);
//	int left = 0,right=0;
//	while(left<intervals.size())
//	{
//		int temp1 = intervals[left][1];
//		while (((right + 1) < intervals.size()) && (intervals[right + 1][0] <= temp1))
//			right++;
//		vector<int> vec_temp;
//		vec_temp.push_back(intervals[left][0]);
//		int index_temp = right;
//		for (int i = right; i >= left; i--)
//			if (intervals[i][1] > intervals[index_temp][1]) index_temp = i;
//		vec_temp.push_back(intervals[index_temp][1]);
//		vector<vector<int>> vec2(intervals.size() - right+left, vector<int>{vec_temp[0],vec_temp[1]});
//		for (int i = 0; i < vec2.size(); i++)
//		{
//			if (i < left) vec2[i] = intervals[i];
//			if (i > left) vec2[i] = intervals[i + (right-left)];
//		}
//		intervals = vec2;
//		if (left == right) left++;
//		right = left;
//	}
//	return intervals;
//}
//
//static bool cmp(vector<int>& a, vector<int>& b) {
//	if (a[0] < b[0])
//		return true;
//	return false;
//}
//vector<vector<int>> merge1(vector<vector<int>>& intervals) {
//	sort(intervals.begin(), intervals.end(), cmp);
//	vector<vector<int>> ans;
//	for (int i = 0; i < intervals.size();) {
//		int t = intervals[i][1];
//		int j = i + 1;
//		while (j < intervals.size() && intervals[j][0] <= t) {
//			t = max(t, intervals[j][1]);
//			j++;
//		}
//		ans.push_back({ intervals[i][0], t });
//		i = j;
//	}
//	return ans;
//}
//
//int main()
//{
//	vector<vector<int>> vec{ {1,7},{2,6},{5,14},{15,18} };
//	vector<vector<int>>vec2=merge1(vec);
//	printvector2d(vec2);
//	return 0;
//}