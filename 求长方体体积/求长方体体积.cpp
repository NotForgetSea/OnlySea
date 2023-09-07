#include<stdio.h>
#include<stdlib.h>
int volume(int x, int y, int z)
{
	return (x*y*z);

}
int main()
{
	int a, b, c, v, r;
	printf("请输入立方体三边的整数长度");
	r=scanf_s("%d%d%d", &a, &b, &c);/*r表示应该正确读到几个整数，括号内表示abc均为整数*/
	if (r == 3 && a>0 && b>0 && c>0)/*表示 如果r正确读到三个整数，就开始执行下一行*/
	{
		v=volume(a, b, c);
		printf("该立方体体积是%d",v);
	}
	else printf("输入错误！");
	system("pause");
	return 0;
}
