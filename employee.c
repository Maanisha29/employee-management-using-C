#include<stdio.h>
typedef struct student
{
    int roll_no;
    char empname[10];
    int emp_experience;
    float empsalary;


}acer;
int main()
{
    int n,i;
    scanf("%d",&n);
    acer a[n];
    for(i=0;i<n;i++)
  scanf("%d%s%d%f",&a[i].roll_no,a[i].empname,&a[i].emp_experience,&a[i].empsalary);
  for(i=0;i<n;i++)
  {
      if(a[i].emp_experience>=5 && a[i].empsalary>=50000)
      printf("%s\n",a[i].empname);
  }
 }