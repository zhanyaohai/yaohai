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
     printf("------------单利计算------------");
    printf("\n");
     printf("\n本金：");
     scanf("%lf",&principal);
     printf("利率：");
     scanf("%f",&interest);
     printf("年限：");
     scanf("%d",&year);
     finalValue = principal * (interest * year +1);
     printf("\n本息=%lf",finalValue);
     printf("\n");
     printf("\n");
}
void compound()
{
     printf("------------复利计算------------");
    printf("\n");
     printf("\n本金：");
     scanf("%lf",&principal);
     printf("利率：");
     scanf("%f",&interest);
     printf("年限：");
     scanf("%d",&year);
     finalValue = principal * pow(interest + 1,year);
     printf("\n本息=%lf",finalValue);
     printf("\n");
     printf("\n");
}
void principalCalc()
{
     printf("------------本金计算------------");
     printf("\n");
     printf("\n本息：");
     scanf("%lf",&principal);
     printf("利率：");
     scanf("%f",&interest);
     printf("年限：");
     scanf("%d",&year);
     principal = finalValue / pow(interest + 1,year);
     printf("\n本金=%lf",finalValue);
     printf("\n");
     printf("\n");
}
void main()
{     
     system("mode con cols=32 lines=16");
     printf("-----------超级计算器-----------");
     printf("\n1、单利计算");
     printf("\n2、复利计算");
     printf("\n3、本金计算");
    printf("\n");
    printf("\n计算类型：");
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
