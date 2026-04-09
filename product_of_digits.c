#include <stdio.h>
int main(){
    
int num,dig,prod=1;

printf("enter a number");
scanf("%d",&num);
while (num>0){
    dig=num%10;
    prod=prod*dig;
    num=num/10;
}
printf("%d",prod);
    
}
