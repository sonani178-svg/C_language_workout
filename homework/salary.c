#include <stdio.h>
int main(){
int salary, hra, da, ta;

int grosssalary;


printf("enter salary, hra, da, ta");

scanf("%d %d %d %d", &salary, &hra, &da, &ta);

grosssalary = salary + hra + da +ta;
//if salary is greater than 10000 get 10% allowense

if(salary>=10000)
{
hra = salary * 0.1;
da = salary * 0.1;
ta = salary * 0.1;
}
else
//if salary is less than 10000 get % allowense
printf("didn't get allowense");

  grosssalary = salary + hra + da +ta;

printf("grosssalary : %d\n", grosssalary);


return 0;


}