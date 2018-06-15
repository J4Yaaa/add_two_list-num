#pragma once
#include <stddef.h>

typedef int LinkType;

typedef struct ListNode
{
    LinkType data;
    struct ListNode* next;
    ListNode(LinkType x):data(x),next(nullptr)
    {}
}ListNode;

void LinkListInit(ListNode** head);

void LiskListPrint(ListNode* head);

ListNode* LinkListPushBack(ListNode** head,LinkType value);

void LinkListReversePrint(ListNode* head);//逆序打印单链表.

void LinkListInsertBefore(ListNode** head, ListNode* pos, LinkType value);//不允许遍历链表, 在 pos之前插入

ListNode* JosephCycle(ListNode* head, size_t food);//约瑟夫环

void LinkListReverse(ListNode** head);//单链表逆置
void LinkListReverse2(ListNode** head);

void LinkListBubbleSort(ListNode* head);//单链表的冒泡排序

ListNode* LinkListMerge(ListNode* head1, ListNode* head2);//将两个有序链表, 合并成一个有序链表

ListNode* FindMidNode(ListNode* head);//找到链表中间的节点

ListNode* FindLastKNode(ListNode* head, size_t K);//找到倒数第 K 个节点.

void EraseLastKNode(ListNode** head, size_t K);//删除倒数第K个节点

ListNode* HasCycle(ListNode* head);//判定单链表是否带环. 如果带环返回1

size_t GetCycleLen(ListNode* head);//如果链表带环, 求出环的长度

ListNode* GetCycleEntry(ListNode* head);//如果链表带环, 求出环的入口

ListNode* HasCross(ListNode* head1, ListNode* head2);//判定两个链表是否相交, 并求出交点
