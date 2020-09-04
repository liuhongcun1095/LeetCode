////用两个栈实现队列
//#include<iostream>
//#include<stack>
//
//using  namespace std;
//
//class MyQueue {
//private:
//    stack<int> s_in, s_out;
//public:
//    /** Initialize your data structure here. */
//    MyQueue() {
//        while (!s_in.empty())
//            s_in.pop();
//        while (!s_out.empty())
//            s_out.pop();
//    }
//
//    /** Push element x to the back of queue. */
//    void push(int x) {
//        s_in.emplace(x);
//    }
//
//    /** Removes the element from in front of queue and returns that element. */
//    int pop() {
//        if (!this->empty())
//        {
//            if (s_out.empty())
//            {
//                while (!s_in.empty())
//                {
//                    s_out.emplace(s_in.top());
//                    s_in.pop();
//                } 
//            }
//            int ret = s_out.top();
//            s_out.pop();
//            return ret;
//        }
//        return -1;
//    }
//
//    /** Get the front element. */
//    int peek() {
//        if (!this->empty())
//        {
//            int ret = this->pop();
//            s_out.emplace(ret);
//            return ret;
//        }
//        return -1;
//    }
//
//    /** Returns whether the queue is empty. */
//    bool empty() {
//        return (s_in.empty() && s_out.empty());
//    }
//};
//
//int main()
//{
//    MyQueue* obj = new MyQueue();
//    obj->push(5);
//    int param_2 = obj->pop();
//    int param_3 = obj->peek();
//    bool param_4 = obj->empty();
//    return 0;
//}