#include<stdio.h>
#include<math.h>
main()
{
	float h,b;
	int f,n;
	printf("请输入复利：");
	scanf("%d",&f);
	printf("请输入回报率：");
	scanf("%f",&h);
	printf("请输入年限：");
	scanf("%d",&n);
	b=f/pow(1+h,n);
	printf("得到的本金为：");
	printf("%f",b);
	return 0;
}

