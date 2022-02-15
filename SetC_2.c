#include<stdio.h>

int main(){

int op;
double num1;
double num2;


void addition(double num1,double num2);
void substraction(double num1,double num2);
void multiply(double num1,double num2);
void devide(double num1,double num2);

printf("Enter 2 numbers:");
scanf("%lf %lf",&num1,&num2);


printf("Press 1 to add two numbers\n");
printf("Press 2 to substract two numbers\n");
printf("Press 3 to multiply two numbers\n");
printf("Press 4 to divide two numbers\n");
printf("Enter 5 to exit\n");
printf("Enter your choice:\n");
scanf("%d",&op);

switch(op){
case 1:
addition(num1,num2);
break;

case 2:
substraction(num1,num2);
break;

case 3:
multiply(num1,num2);
break;

case 4:
devide(num1,num2);
break;

case 5:
printf("exit");
break;


default:
printf("Invalid value");
break;

void(*func[4])(double,double)={&addition,&substraction,&multiply,&devide};
(*func[op-1])(num1,num2);
return(0);


}
}

void addition(double num1,double num2){
double ans;
ans=num1+num2;
printf("Addition is %lf+%lf=%lf\n",num1,num2,ans);
return;
}

void substraction(double num1,double num2){
double ans;
ans=num1-num2;
printf("Substraction is%lf-%lf=%lf\n",num1,num2,ans);
return;
}


void multiply(double num1,double num2){
double ans;
ans=num1*num2;
printf("Substraction is%lf*%lf=%lf\n",num1,num2,ans);
return;
}


void devide(double num1,double num2){
double ans;
ans=num1/num2;
printf("Substraction is%lf/%lf=%lf\n",num1,num2,ans);
return;
}


