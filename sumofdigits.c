#include <stdio.h>
int main(){
int num,dig,sum=0;
printf("enter number");
scanf("%d",&num);
while(num>0){
    dig=num%10;
    sum=sum+dig;
    num=num/10;
}
printf("%d", sum);
}
