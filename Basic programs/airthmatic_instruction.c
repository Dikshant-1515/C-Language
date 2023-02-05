#include<stdio.h>
#include<math.h>

int main (){
    int a = 4;
    int b = 8;
    int z ;
    z = b*a;   //Legal
    //b*a = z  Illegal

    printf("The value of z is: %d\n",z);
    printf("The value of a + b is: %d\n",a+b);
    printf("The value of a - b is: %d\n",a-b);
    printf("The value of a * b is: %d\n",a*b);
    printf("The value of a / b is: %d\n",a/b);
    
    printf("5 when divided by 2 leaves a remainder of %d\n",5%2);
    printf("-5 when divided by 2 leaves a remainder of %d\n",-5%2);
    printf("-5 when divided by -2 leaves a remainder of %d\n",5%-2);

//There is no operator tp perform exponentiation in C
    printf("The value of 4 ^ 5 is %d\n",4^5);  //-----> Will not produce 4 to the power 5
    printf("The value of 4 to the power 5 is  %f\n",pow(2,5));
    
    printf("The value of 6 + 5 is %d\n",6 + 5);
    printf("The value of 6 + 5.6 is %f\n",6 + 5.6);
    return 0 ;


}