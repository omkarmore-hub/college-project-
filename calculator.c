#include<stdio.h>
int main() {
  int a,b;
  char c;
  printf("Enter First Number ");
  scanf("%d",&a);
    printf("Enter Second Number "); 
    scanf("%d",&b);
    printf("Enter Operator (+, -, *, /): ");
    scanf(" %c",&c);
  if(c=='+'){
    printf("%d\n",a+b);
  } else if(c=='-'){
    printf("%d\n",a-b);
  } else if(c=='*'){
    printf("%d\n",a*b);
  } else if(c=='/'){
    if(b!=0){
      printf("%f\n",(float)a/b);
    } else {
      printf("Error: Division by zero\n");
    }
  } 
   


return 0;
}