////完全平方数
////给定正整数 n，找到若干个完全平方数（比如 1, 4, 9, 16, ...）使得它们的和等于 n。你需要让组成和的完全平方数的个数最少。
//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//int numSquares(int n) {
//    if (n <= 0) {   	// 如果输入值 小于 0 返回。
//        return 0;
//    }
//    int ans = 0;  	// 记录步数
//    queue<int> Q;   // 定义队列
//    Q.push(n);    	// 将目标结果输入队列进行搜索。
//    while (!Q.empty()) {  		// 只要队列不为空，就一直搜索
//        int Qsize = Q.size();   	// 查看队列大小
//        for (int i = 0; i < Qsize; i++) {   // 进行遍历
//            float temp = Q.front();     	// temp是队列的第一个元素
//            Q.pop();            			// 推出第一个元素
//            for (int i = sqrt(temp); i > 0; i--) {  // 循环处理第一个元素，判断从大到小哪个可以是平方
//                if (temp == i * i) {          	// 如果相等，则结束
//                    ans++;
//                    return ans;           		// 步数加一，返回
//                }
//                else {                		// 如果不相等
//                    Q.push(temp - i * i);         	// 去掉一个完全平方数后的值推入队列汇总。
//                }
//            }
//        }
//        ans++;
//    }
//    return 0;
//};
//
//int main()
//{
//    int ans = numSquares(13);
//    printf("%d\n",ans);
//	return 0;
//}