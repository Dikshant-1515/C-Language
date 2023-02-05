#include<stdio.h>

int main(){
    int x = 2;
    int y = 3;
     
    printf("The value of 8*y / 3*x is %d\n",8*y / 3*x);

//   8*3/3*2 ==24/6 will give wrong awnser
//  24/3*2
//  8*2
// 16    when priority operators will of same order HERE ASSOCIATIVITY WILL MOVE FROM LEFT TO RIGHT
    return 0;
}

//PRIORITY     OPERATORS
//1st          * / %
//2nd          + - 
//3rd          =