#include <stdio.h>
int main(){

int num,i,count=0;
printf("enter num");
scanf("%d",&num);
for (i=1;i<num/2;i++){
    if (num%i==0){
        count=count+1; } 
}
    if (count>2){
        printf("the number is not prime");}
    else {
        printf("the number is prime");}   
}    
