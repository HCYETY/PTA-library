/*
����ĿҪ��ʵ����������������ʵ�����¹��ܣ�
�������ɸ�����������-1��������ȡ����������ӽڵ�ķ�ʽ������һ���������� ��������������������

1������β����ӽڵ㺯����struct link *AppendNode(struct link *head,int data);
head������ͷ�ڵ�ָ�룬���headΪNULL������½�ͷ�ڵ�
data��Ҫ��ӵĽڵ�data��ֵ
�������أ���ӹ��ڵ�������ͷ�ڵ�ָ��

2��������ʾ��������void DisplyNode(struct link *head);
head ������ͷ�ڵ�ָ��

3��ɾ�������ڴ溯����void DeleteMemory(struct link *head);
head������ͷ�ڵ�ָ��

�����ʽ:
һϵ������������-1����
�����ʽ:
������������е�ÿһ�ÿ����֮����->����

��������:
1 3 5 7 9 -1
�������:
1->3->5->7->9
*/

#include <stdio.h>
#include <stdlib.h>

struct link  // �������
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
    struct link *head = NULL; /* ����ͷָ�� */
    while (1)
    {
        scanf("%d",&data);
        if (data==-1) break;

        head = AppendNode(head,data); /* ��headΪͷָ�������ĩβ��ӽڵ� */
    }
    DisplyNode(head); /* ��ʾ��ǰ�����еĸ��ڵ���Ϣ */
    DeleteMemory(head); /* �ͷ����ж�̬������ڴ� */
    return 0;
}

// β�����ӽ��
// head:������Ҫ���ӽ�������
// data���½��������������
// ���أ������˽��֮��������ͷָ��
/*�ڴ�ʵ�� struct link *AppendNode(struct link *head,int data); */
struct link *AppendNode(struct link *head,int data)
{
	struct link *nodeptr = (struct link*)malloc(sizeof(struct link));
	//malloc�����Ƿ����ڴ溯����malloc(n)����n���ֽڵ��ڴ����򣬷���ָ�������ײ���ָ�롣
	//sizeof(struct link)�ǵõ�link�ṹ��Ĵ洢���ȣ��ֽ�����
	// (struct link*)����ʡ�ԣ������޷���ֵ��nodtptr������ 
	nodeptr->data = data;
	nodeptr->next = NULL;
	if (head==NULL)
		head = nodeptr;
	else {
		//�ߵ�β��
		struct link *ptr = head;
		while(ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = nodeptr; 
	}
	return head;
}

/*�ڴ�ʵ�� void DisplyNode(struct link *head); */
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

// �ͷ�������ڴ�ռ�
// head�������ͷָ��
/*�ڴ�ʵ�� void DeleteMemory(struct link *head);*/
void DeleteMemory(struct link *head)
{
	if (head == NULL)
		return;
	struct link *ptr = head;
	while(ptr->next != NULL) {
		struct link *old = ptr;
		ptr = ptr->next;
		free(old);  //�ͷ�oldָ����ڴ����� 
	}
	free(ptr);  //�ͷ�β����� 
	return;
}
