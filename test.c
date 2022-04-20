#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

////声明一个结构体类型
//struct Stu
//{
//	//声明一个学生类型，是想通过学生类型来创建学生变量（对象）
//	//描述学生 - 属性 - 名字+电话+性别+年龄
//	char name[20];
//	char tele[12];
//	char gender[10];
//	int age;
//}s4,s5,s6;//全局变量
//
//struct Stu s3;//全局变量
//
//int main()
//{
//	//创建的结构体变量
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

////链表
////结构体的自引用
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