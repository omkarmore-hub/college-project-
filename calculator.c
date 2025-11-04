#include<stdio.h>
int main(){
float A, B;
char C;

printf("The value of first(A) number is: ");
scanf("%f", &A);

printf("The operator you want to use (+, -, *, /): ");
scanf(" %c", &C);

printf("The value of second(B) number is: ");
scanf("%f", &B);
if(C == '+') {
    printf("The addition of A+B is: %f\n", A+B);
}
else if(C == '-') {
    printf("The subtraction of A-B is: %f\n", A-B);
}
else if(C == '*') {
    printf("The multiplication of A*B is: %f\n", A*B);
}
else if(C == '/') {
    if(B != 0) {
        printf("The division of A/B is: %f\n", A/B);
    }
    else {
        printf("Error: Division by zero is not possible\n");
        printf("It tends to infinite\n");
    }
}
else {
    printf("Invalid operator! Please use +, -, *, or /\n");
}
printf("Thank you\n");

return 0;

}