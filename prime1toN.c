#include <stdio.h>

int main() {
int num,i,j,isprime;

printf("enter number");
scanf("%d",&num);

for (i=2;i<=num;i++){
isprime=1;

for (j=2;j<=i/2;j++){
if (i%j==0){
isprime=0;
break;
}
}
if (isprime==1){
printf("%d\n",  i);
}
}
}