////用vector设计循环队列类实现
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//class MyCircularQueue {
//private:
//    vector<int> data;
//    int head;
//    int tail;
//    int size;
//
//public:
//    //初始化
//    MyCircularQueue(int k) {
//        data.resize(k);
//        head = -1;
//        tail = -1;
//        size = k;
//    }
//    //插入元素
//    bool enQueue(int value) {
//        if (isFull()) {
//            return false;
//        }
//        if (isEmpty()) {
//            head = 0;
//        }
//        tail = (tail + 1) % size;
//        data[tail] = value;
//        return true;
//    }
//    //删除元素
//    bool deQueue() {
//        if (isEmpty()) return false;
//        if (head == tail) {
//            head = -1;
//            tail = -1;
//            return true;
//        }
//        head = (head + 1) % size;
//        return true;
//    }
//    //得到队首元素的值
//    int Front() {
//        if (!isEmpty()) return data[head];
//        return -1;
//    }
//    //得到队尾元素的值
//    int Rear() {
//        if (!isEmpty()) return data[tail];
//        return -1;
//    }
//    //检查循环队列是否为空
//    bool isEmpty() {
//        return (head == -1);
//    }
//
//    //检查循环队列是否满了
//    bool isFull() {
//        return (tail + 1) % size == head;
//    }
//};
//
//int main()
//{
//    MyCircularQueue circularQueue = MyCircularQueue(3);// 设置长度为 3
//    cout << circularQueue.enQueue(1) << endl;   //  返回 true
//    cout << circularQueue.enQueue(2) << endl;   //  返回 true
//    cout << circularQueue.enQueue(3) << endl;   //  返回 true
//    cout << circularQueue.enQueue(4) << endl;   //  返回 false，队列已满
//    cout << circularQueue.Rear() << endl;       //  返回 3
//    cout << circularQueue.isFull() << endl;     //  返回 true
//    cout << circularQueue.deQueue() << endl;    //  返回 true
//    cout << circularQueue.enQueue(4) << endl;   //  返回 true
//    cout << circularQueue.Rear() << endl;       //   返回 4
//	return 0;
//}