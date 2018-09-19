#include<stdio.h>
#include<math.h>
#define EXP 0.0000000001
int main()
{
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);    //是%lf，不是%1f 
	if(a>-EXP&&a<EXP)
	{
		printf("不是一元二次方程"); 
	}
	else
	{
		double disc=b*b-4*a*c;
		if(disc>-EXP&&disc<EXP)
		{
			printf("解为:%1f",(-b)/2*a);
		}
		else if(disc>=EXP)
		{
			printf("解为:%1f%1f",(-b+sqrt(disc))/2*a,(-b-sqrt(disc))/2*a);
		}
		else
		printf("无解"); 
	}
	return 0;
} 
