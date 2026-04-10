#include <stdio.h>
#include <math.h>
int main() {
int num,i,sum=0;
printf("enter number"); 
scanf("%d",&num);
for (i=1;i<=num/2;i++) {
if (num%i==0){
sum=sum+i;
}
}
if (sum==num){
printf("the number is perfect");}
else{
printf("the number is not perfect");
}
}



