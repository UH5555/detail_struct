#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

////����һ���ṹ������
//struct Stu
//{
//	//����һ��ѧ�����ͣ�����ͨ��ѧ������������ѧ������������
//	//����ѧ�� - ���� - ����+�绰+�Ա�+����
//	char name[20];
//	char tele[12];
//	char gender[10];
//	int age;
//}s4,s5,s6;//ȫ�ֱ���
//
//struct Stu s3;//ȫ�ֱ���
//
//int main()
//{
//	//�����Ľṹ�����
//	struct Stu s1;
//	struct Stu s3;
//	return 0;
//}

//struct
//{
//	int a;
//	char c;
//}sa;
//
//struct
//{
//	int a;
//	char c;
//}* psa;
//
//int main()
//{
//	return 0;
//}

////����
////�ṹ���������
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//
//int main()
//{
//	return 0;
//}

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}

struct S1
{
	char c1;
	int a;
	char c2;
};

struct S2
{
	char c1;
	char c2;
	int a;
};

int main()
{
	struct S1 s1 = { 0 };
	printf("%d\n", sizeof(s1));
	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2));
	return 0;
}