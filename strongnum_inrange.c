#include <stdio.h>
#include <math.h>

int fact(int n){
if (n==0 || n==1){
return 1;}
else{
return n*fact(n-1);
}
}
int main() {
int num,temp,dig,sum,i;

printf("enter range");
scanf("%d",&num);

for (i=1;i<=num;i++){
sum=0;
temp=i ;
while (temp>0){
dig=temp%10;   
sum=sum+fact(dig);
temp=temp/10;
}
if (i==sum){
printf("%d " ,i);
}   
}
}
