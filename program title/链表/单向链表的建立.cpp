/*
本题目要求实现下面三个函数，实现如下功能：
输入若干个正整数，以-1结束，采取向链表中添加节点的方式来建立一个单向链表。 遍历并输出这个单向链表。

1、链表尾部添加节点函数：struct link *AppendNode(struct link *head,int data);
head：链表头节点指针，如果head为NULL，则会新建头节点
data：要添加的节点data数值
函数返回：添加过节点后的链表头节点指针

2、遍历显示链表函数：void DisplyNode(struct link *head);
head ：链表头节点指针

3、删除链表内存函数：void DeleteMemory(struct link *head);
head：链表头节点指针

输入格式:
一系列正整数，以-1结束
输出格式:
输出单向链表中的每一项，每个数之间以->连接

输入样例:
1 3 5 7 9 -1
输出样例:
1->3->5->7->9
*/

#include <stdio.h>
#include <stdlib.h>

struct link  // 结点类型
{
    int data;
    struct link *next;
};

struct link *AppendNode(struct link *head,int data);
void DisplyNode(struct link *head);
void DeleteMemory(struct link *head);

int main()
{
    char c;
    int data = 0;
    struct link *head = NULL; /* 链表头指针 */
    while (1)
    {
        scanf("%d",&data);
        if (data==-1) break;

        head = AppendNode(head,data); /* 向head为头指针的链表末尾添加节点 */
    }
    DisplyNode(head); /* 显示当前链表中的各节点信息 */
    DeleteMemory(head); /* 释放所有动态分配的内存 */
    return 0;
}

// 尾部增加结点
// head:代表了要增加结点的链表
// data：新结点的数据域的内容
// 返回：增加了结点之后的链表的头指针
/*在此实现 struct link *AppendNode(struct link *head,int data); */
struct link *AppendNode(struct link *head,int data)
{
	struct link *nodeptr = (struct link*)malloc(sizeof(struct link));
	//malloc函数是分配内存函数。malloc(n)分配n个字节的内存区域，返回指向区域首部的指针。
	//sizeof(struct link)是得到link结构体的存储长度（字节数）
	// (struct link*)不能省略，否则无法赋值给nodtptr变量。 
	nodeptr->data = data;
	nodeptr->next = NULL;
	if (head==NULL)
		head = nodeptr;
	else {
		//走到尾部
		struct link *ptr = head;
		while(ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = nodeptr; 
	}
	return head;
}

/*在此实现 void DisplyNode(struct link *head); */
void DisplyNode(struct link *head)
{
	if (head==NULL)
		return;
	struct link *ptr = head;
	printf("%d", head->data);
	while(ptr->next != NULL) {
		ptr = ptr->next;
		printf("->%d", ptr->data);
	}
	return;
}

// 释放链表的内存空间
// head：链表的头指针
/*在此实现 void DeleteMemory(struct link *head);*/
void DeleteMemory(struct link *head)
{
	if (head == NULL)
		return;
	struct link *ptr = head;
	while(ptr->next != NULL) {
		struct link *old = ptr;
		ptr = ptr->next;
		free(old);  //释放old指向的内存区域 
	}
	free(ptr);  //释放尾部结点 
	return;
}
