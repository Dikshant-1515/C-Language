//Q.1. Area of rectangle//

// PART 1
#include<stdio.h>
int main (){
    int length = 2;
    int breadth = 3;
    printf("The area of rectangle is %d ",length*breadth);
    return 0 ;
}

//PART 2
#include<stdio.h>
int main (){
    int length,breadth;
    printf("The length of rectangle is ");
    scanf("%d",&length);

    printf("The breadth of rectangle is ");
    scanf("%d",&breadth);

    printf("The area of rectangle is %d",length*breadth);
    return 0 ;
}



// Q.2.Area of a circle and modify it to calculate the volume of cylinder give its radius and height
#include<stdio.h>
int main(){
    float radius,height;
    float pi = 3.14;

    printf("Enter the value of radius ");
    scanf("%f",&radius);

    printf("Enter the value of height ");
    scanf("%f",&height);

    printf("The value of pi is %f \n",pi);
    
    printf("The volume  of cylinder is %f",pi*height*radius*radius);
    return 0 ;
}



// Q.3.Convert Celcius to Farenheit
#include<stdio.h>
int main(){
float celcius;
printf("Enter the value of Celcius \n");
scanf("%f",&celcius);

printf("Value of farenhiet is %f",celcius*9/5+32);
return 0 ;
}



// Q.4.Simple interest
#include<stdio.h>
int main(){
    int principle,time,rate;
   
    printf("Enter the value of principle \n");
    scanf("%d",&principle);
    
    printf("Enter the value of time \n");
    scanf("%d",&time);
     
    printf("Enter the value of rate \n");
    scanf("%d",&rate);

    printf("Simple interest is %d", principle*rate*time/100);
    return 0 ;
}
