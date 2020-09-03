////移除K位得到最小值
//#include<iostream> 
//#include<cstring>
//#include<algorithm>
//
//using namespace std;
//int main()
//{
//	int k, num, flag = 0, red = 0;
//	int i = 0;
//	string str, tmp, str2;
//	string::iterator p;
//	cin >> str >> tmp;
//	k = tmp[0] - '0';
//	num = str.size();
//	str2 = str;
//	sort(str2.begin(), str2.end());//将str2排序后和str1比较，若一样就把标志位置1，
//	if (str.compare(str2) == 0)
//	{
//		red = 1;
//	}
//	if (red == 1) //说明str为升序排列，则直接删除最后一位。
//	{
//		while (k--)
//		{
//			str.pop_back();
//
//		}
//	}
//	else
//	{
//		while (k--)//找到并且删除第一个 num[i] > num[i + 1] 的第i位数字。重复k次
//		{
//			i = 0;
//			while (i < num - 1 - flag)
//			{
//				if (str[i] > str[i + 1])
//				{
//					p = str.begin() + i;
//					str.erase(p);
//					flag++;
//					break;
//
//				}
//				i++;
//			}
//
//		}
//
//	}
//
//	i = str.size();
//	while (i--) //注意除去字符串头的0
//	{
//		if (str[0] != '0') break;
//		if (str[0] == '0')
//		{
//			str.erase(str.begin());
//		}
//	}
//	if (str.size() == 0)
//	{
//		cout << 0;
//		return 0;
//	}
//	cout << str;
//}
