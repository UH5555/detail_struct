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

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	printf("%d\n", sizeof(struct S3));//16
//	printf("%d\n", sizeof(struct S4));//32
//	return 0;
//}

////����Ĭ�϶�����
//#pragma pack(4)
//struct S
//{
//	char c1;
//	double d;
//};
//#pragma pack()
////ȡ��Ĭ�϶�����
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}

struct S
{
	char c;
	int i;
	double d;
};

#include <stddef.h>
int main()
{
	//����ƫ����
	printf("%d\n", offsetof(struct S, c));
	printf("%d\n", offsetof(struct S, i));
	printf("%d\n", offsetof(struct S, d));
	return 0;
}