#include <stdio.h>
#include <math.h>
int main(){

int num,temp,dig,count=0,sum=0,arm;
printf("enter number");
scanf("%d",&num);
temp=num;
while (num>0){
    dig=num%10;
    count=count+1;
    num=num/10;
}
arm=temp;
while(temp>0){
    dig=temp%10;
    sum=sum+pow(dig,count);
    temp=temp/10;
}
if (arm==sum){
    printf("the num is armstrong");}
else{
    printf("the num is not armstrong");}
}
