#include<stdio.h>
#include<math.h>
main()
{
	float h,b;
	int f,n;
	printf("�����븴����");
	scanf("%d",&f);
	printf("������ر��ʣ�");
	scanf("%f",&h);
	printf("���������ޣ�");
	scanf("%d",&n);
	b=f/pow(1+h,n);
	printf("�õ��ı���Ϊ��");
	printf("%f",b);
	return 0;
}

