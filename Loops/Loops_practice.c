// Write a program to print first ten even numbers using 
// FOR LOOP
// WHILE LOOP
// DO WHILE LOOP

// USING FOR LOOP
#include <stdio.h>
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    for (2; num <= 20 ; num++)
    {  if (num%2==0){
        printf("%d\n",num);
    }
    }
    return 0;
}



// USING WHILE LOOP

#include<stdio.h>
int main(){
    int num = 2;
    while (num<=20)
    {
    printf("%d\n",num);
    num+=2;
     }
    return 0;
}


// USING DO WHILE LOOP

#include <stdio.h>
int main(){
    int num=2;
    do
    {
        printf("%d\n",num);
        num+=2;
    }
     while (num<=10);

    return 0;
}










// Write a program to print 1,4,6,............,81,100
// USING FOR LOOP

#include <stdio.h>
int main(){
    int num=1;
    for (1; num <=10; num++);
    {
    printf("%d\n",num);
    }
    
    return 0;
}


// USING WHILE LOOP

#include <stdio.h>
int main(){
    int num=1;
    while(num<=10){
        printf("%d\n",num*num);
        num++;
    }
    return 0;
}


// USING DO WHILE LOOP

#include <stdio.h>
int main(){
    int num=1;
    do
    {
    printf("%d\n",num*num);
    num++;

    } while (num<=10);
    
    return 0;
}