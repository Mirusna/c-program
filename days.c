#include<stdio.h>
int main()
{
int days=365,years,weeks,hours;
printf("Enter the number of days:");
scanf("%d",&days);
hours=days*24;
years=(days/365);
weeks=(days%365)/7;
days=days-(years*365)+(weeks*7);
printf("No of hours:%d\n",hours);
printf("No of weeks:%d\n",weeks);
printf("No of days:%d\n",days);
printf("No of years:%d\n",years);
return 0;
}
