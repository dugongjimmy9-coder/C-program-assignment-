/*Name: Mugo James kinyua 
Reg No:CT100/G/30663/26
Description: Hello world program 
Date:18/09/26
Version:2
*/

//variable and Data types

#include<stdio.h>

int main(){
//decrare and initialize variables 
char grade ='A';//%c
char name [21] ={"James"};//%s
int age=21;//%d
float marks=70;//%f
double pi = 3.142;//%1f

printf("Enter your grade \t");
scanf("%c",& grade);

printf("Enter your name:\t");
scanf("%s",& name);

printf("Enter your age:\t");
scanf("%d",&age);

printf("Enter the value of pi:\t");
scanf("%f",&marks);

printf("Enter the value of pi:\t");
scanf("%lf",&pi);

printf("The grade is %c \n", grade);
printf("my name is %s \n", name);
printf("I am %d years old \n",age);
printf("I scored %.2f marks in KCSE \n",marks);
printf("The value of pi is %.3lf \n",pi);


return 0;
}