#include <stdio.h>
int main(){
float celsius, ferhenheit;

printf("enter a temprature in Celsius : ");
scanf("%f", &celsius );

ferhenheit = (1.8 * celsius) + 32;
printf("tempratur in farhenheit : %f" , ferhenheit);


    return 0;
} 