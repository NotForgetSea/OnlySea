#include<stdio.h>
#include<stdlib.h>
int volume(int x, int y, int z)
{
	return (x*y*z);

}
int main()
{
	int a, b, c, v, r;
	printf("���������������ߵ���������");
	r=scanf_s("%d%d%d", &a, &b, &c);/*r��ʾӦ����ȷ�������������������ڱ�ʾabc��Ϊ����*/
	if (r == 3 && a>0 && b>0 && c>0)/*��ʾ ���r��ȷ���������������Ϳ�ʼִ����һ��*/
	{
		v=volume(a, b, c);
		printf("�������������%d",v);
	}
	else printf("�������");
	system("pause");
	return 0;
}
