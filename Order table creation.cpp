//#define _crt_secure_no_warnings 1
//#define ERROR 0
//#define OK 1
//#define Overflow 2//上溢
//#define Underflow 3//下溢
//#define NotPresent 4//不存在
//#define Duplicate 5//有重复
//#include<stdio.h>
//#include<stdlib.h>
//typedef int Status;
//typedef int ElemType;
//typedef struct seqlist
//{
//	int maxLength;
//	ElemType *element;
//	int n;
//} SeqList;
//Status Init(SeqList* L, int msize)//顺序表的初始化
//{
//	L->maxLength = msize;
//	L->n = 0;
//	L->element = (ElemType*)malloc(sizeof(ElemType) * msize);//动态生成一维数组空间
//	if (!L->element)
//		return ERROR;
//	return OK;
//}
//Status Find(SeqList L, int i, ElemType* x)
//
//{
//	if (i < 0 || i>L.n - 1)//判断元素下标i是否越界
//		return ERROR;
//	*x = L.element[i];//取出element[i]值通过参数x返回
//	return OK;
//}
//Status Insert(SeqList* L, int i, ElemType x)
//{
//	int j;
//	if (i<-1 || i>L->n - 1)//下标i是否越界
//		return ERROR;
//	if(L->n==L->maxLength)//判断顺序表是否已满
//		return ERROR;
//	for (j = L->n - 1; j > i; j--)
//		L->element[j+ 1] = L->element[j];//从后往前逐个后移元素
//	L->element[i + 1] = x;//将新元素放入下标为i+1 的位置
//	L->n = L->n + 1;
//	return	OK;
//}
//Status Delete(SeqList* L, int i)
//{
//	int j;
//	if (i<0 || i>L->n - 1)//下标i是否越界（注意是i<0)
//		return ERROR;
//	if(!L->n)
//		return ERROR;
//	for (j = i + 1; j < L->n; j++)
//		L->element[j - 1] = L->element[j];
//	L->n--;
//	return OK;
//
//}
//Status Output(SeqList* L)
//{
//	int i;
//	if (L->n==0)//判断是否为空
//		return ERROR;
//	for (i = 0; i <L->n; i++)
//		printf("%d ", L->element[i]);
//	printf("\n");
//	return OK;
//
//		
//}
//
//
//
//void Destroy(SeqList* L)
//{
//	L->n = 0;
//	L->maxLength=0;
//	free(L->element);
//}
//void main1()
//{
//	int i;
//	SeqList list;
//	Init(&list, 10);
//	for (i = 0; i < 10; i++)
//		Insert(&list, i - 1, i);
//	Output(&list);
//	Delete(&list, 0);
//	Output(&list);
//	Destroy(&list);
//
//}