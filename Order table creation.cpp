//#define _crt_secure_no_warnings 1
//#define ERROR 0
//#define OK 1
//#define Overflow 2//����
//#define Underflow 3//����
//#define NotPresent 4//������
//#define Duplicate 5//���ظ�
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
//Status Init(SeqList* L, int msize)//˳���ĳ�ʼ��
//{
//	L->maxLength = msize;
//	L->n = 0;
//	L->element = (ElemType*)malloc(sizeof(ElemType) * msize);//��̬����һά����ռ�
//	if (!L->element)
//		return ERROR;
//	return OK;
//}
//Status Find(SeqList L, int i, ElemType* x)
//
//{
//	if (i < 0 || i>L.n - 1)//�ж�Ԫ���±�i�Ƿ�Խ��
//		return ERROR;
//	*x = L.element[i];//ȡ��element[i]ֵͨ������x����
//	return OK;
//}
//Status Insert(SeqList* L, int i, ElemType x)
//{
//	int j;
//	if (i<-1 || i>L->n - 1)//�±�i�Ƿ�Խ��
//		return ERROR;
//	if(L->n==L->maxLength)//�ж�˳����Ƿ�����
//		return ERROR;
//	for (j = L->n - 1; j > i; j--)
//		L->element[j+ 1] = L->element[j];//�Ӻ���ǰ�������Ԫ��
//	L->element[i + 1] = x;//����Ԫ�ط����±�Ϊi+1 ��λ��
//	L->n = L->n + 1;
//	return	OK;
//}
//Status Delete(SeqList* L, int i)
//{
//	int j;
//	if (i<0 || i>L->n - 1)//�±�i�Ƿ�Խ�磨ע����i<0)
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
//	if (L->n==0)//�ж��Ƿ�Ϊ��
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