// Create a mini calculator
# include <stdio.h>
 
int main() {
 
   char operato;
   double firstNumber,secondNumber;
 
   printf("Enter an operator (+, -, *,): ");
   scanf("%c", &operato);
 
   printf("Enter two operands: ");
   scanf("%lf %lf",&firstNumber, &secondNumber);
 
   switch(operato)
   {
       case '+':
           printf("%.1lf + %.1lf = %.1lf",firstNumber, secondNumber, firstNumber + secondNumber);
           break;
 
       case '-':
           printf("%.1lf - %.1lf = %.1lf",firstNumber, secondNumber, firstNumber - secondNumber);
           break;
 
       case '*':
           printf("%.1lf * %.1lf = %.1lf",firstNumber, secondNumber, firstNumber * secondNumber);
           break;
 
       case '/':
           printf("%.1lf / %.1lf = %.1lf",firstNumber, secondNumber, firstNumber / secondNumber);
           break;
 
       // operator doesn't match any case constant (+, -, *, /)
       default:
           printf("Error! operator is not correct");
   }
   
   return 0;
}
