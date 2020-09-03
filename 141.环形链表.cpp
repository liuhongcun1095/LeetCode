////环形链表 双指针 || 哈希表
////给定一个链表，判断链表中是否有环。
//#include<iostream>
//#include<unordered_map>
//
//using namespace std;
//
//struct ListNode
//{
//    int val;
//    ListNode* next;
//    ListNode(int x) :val(x), next(nullptr) {}
//};
//
//////使用双指针（注意判断fast->next）
////class Solution {
////public:
////    bool hasCycle(ListNode* head) {
////        ListNode* slow=head, * fast=head;
////        if (head == nullptr) return false;
////        while (fast->next)
////        {
////            if (slow->next)
////                slow = slow->next;
////            else 
////                return false;
////            if (fast->next->next)
////                fast = fast->next->next;
////            else
////                return false;
////            if (slow == fast)
////                return true;
////        }
////        return false;
////    }
////};
//
////哈希表解法
//class Solution {
//public:
//    bool hasCycle(ListNode* head) {
//        unordered_map<ListNode*, bool> mp;
//        if (head == nullptr) return false;
//        while (head->next)
//        {
//            if (mp.find(head) != mp.end())
//                return true;
//            mp[head] = true;
//            head = head->next;
//        }
//        return false;
//    }
//};
//
//int main()
//{
//
//	return 0;
//}