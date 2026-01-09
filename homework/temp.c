#include <stdio.h>
int main(){
float celsius, ferhenheit;

printf("enter a temprature in Celsius");
scanf("%f", &celsius );

ferhenheit = (9/5*celsius)+32;
printf("tempratur in farhenheit : %f" , ferhenheit);


    return 0;
} 