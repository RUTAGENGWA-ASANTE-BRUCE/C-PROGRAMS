#include <stdio.h>

int main(){
	int x,income,developers;
	int salary=2000;
	printf("Enter income for this month : ");
	scanf("%d",&income);
	printf("Enter number of developers that worked this month : ");
	scanf("%d",&developers);
	int bonus=((income*7)/100)/developers;
	int insurance=(salary*5)/100;
	int transport=(salary*5)/100;
	int totalSalary=salary	+bonus+insurance+transport;
    int	tax=(totalSalary*15)/100;
    int developerSalary=totalSalary-tax;
    printf("Each developers salary is %d\n",developerSalary);
    printf("Total tax collected is %d\n",tax*developers);
	return 0;
}