#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int a;
int year;
float interest;
double principal;
double finalValue;
void simple()
{
     printf("------------��������------------");
    printf("\n");
     printf("\n����");
     scanf("%lf",&principal);
     printf("���ʣ�");
     scanf("%f",&interest);
     printf("���ޣ�");
     scanf("%d",&year);
     finalValue = principal * (interest * year +1);
     printf("\n��Ϣ=%lf",finalValue);
     printf("\n");
     printf("\n");
}
void compound()
{
     printf("------------��������------------");
    printf("\n");
     printf("\n����");
     scanf("%lf",&principal);
     printf("���ʣ�");
     scanf("%f",&interest);
     printf("���ޣ�");
     scanf("%d",&year);
     finalValue = principal * pow(interest + 1,year);
     printf("\n��Ϣ=%lf",finalValue);
     printf("\n");
     printf("\n");
}
void principalCalc()
{
     printf("------------�������------------");
     printf("\n");
     printf("\n��Ϣ��");
     scanf("%lf",&principal);
     printf("���ʣ�");
     scanf("%f",&interest);
     printf("���ޣ�");
     scanf("%d",&year);
     principal = finalValue / pow(interest + 1,year);
     printf("\n����=%lf",finalValue);
     printf("\n");
     printf("\n");
}
void main()
{     
     system("mode con cols=32 lines=16");
     printf("-----------����������-----------");
     printf("\n1����������");
     printf("\n2����������");
     printf("\n3���������");
    printf("\n");
    printf("\n�������ͣ�");
     scanf("%d",&a);
     system("cls");
    switch(a)
     {
     case 1:
         simple();
         break;
     case 2:
         compound();
         break;
     case 3:
         principalCalc();
         break;
     }
}
