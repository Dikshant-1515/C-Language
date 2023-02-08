//1Q. Print the age 

#include<stdio.h>
int main(){
   int a = 10;
   if (a = 11){
      printf("I am 11\n");
   }
   else{
      printf("I am not 11\n");
   } 
    
   return 0;
}


// 2Q. Calculate percentage of the subjects

  #include<stdio.h>
int main(){
    int physics, chemistry, maths;
    float total;
    printf("Enter Physics marks\n");
    scanf("%d",&physics);

    printf("Enter Chemistry marks\n");
    scanf("%d",&chemistry);

    printf("Enter Maths marks\n");
    scanf("%d",&maths);

    total = (physics+maths+chemistry)/3;
    if ((total<40) || physics<33 || maths<33 || chemistry<33){
        printf("Your total percentage is %f and you are failed\n",total);
        }
    else{
        printf("Your total percentage is %f and you are passed\n",total);
    }

    return 0;
}


//3Q. Calculate the tax

#include<stdio.h>
int main(){
    float income;
    float tax;
    printf("Your income is \n");
    scanf("%f",&income);

   if (income>250000 && income< 5000000){
   tax = tax+0.05*(income-2500000);
    }
   
   else if(income>5000000 && income< 1000000){
    tax = tax+0.2*(income-5000000);
    }

    else if (income>1000000){
    tax = tax+0.3*(income-1000000);
        }

    printf("The tax to be paid %f\n",tax);  
    return 0;
}


//Q.4. Print the year is Leap year or not 

#include<stdio.h>
int main (){
    int year;
    printf("Year is\n");
    scanf("%d",&year);
    if (year%4==0){
        printf("This year is leap year\n");
    }
    else if (year%400==0 && year%100==0) {
        printf("This year is leap\n");
    }
    else{
        printf("Its not a leap year\n");
    }
    return 0;
}


//Q.5. Print wheather the number is greatest among four number or not 

#include<stdio.h>
int main (){
    int number1,number2,number3,number4;
    printf("Enter the number \n");
    scanf("%d %d %d %d",&number1,&number2,&number3,&number4);

    if (number1>=number2 && number1>=number3 && number1>=number4){
        printf("Ther largest number is: %d",number1);
        }
    else if (number2>=number1 && number2>=number3 && number2>=number4){
        printf("The largest number is: %d",number2);
    }  
    else if (number3>=number1 && number3>=number2 && number3>=number4){
          printf("The largest number is: %d",number3);
          }
    else 
        printf("The largest number is: %d",number4);
          
          return 0 ;
}

//Q.6. Find the character is lower or not 
#include <stdio.h>
int main(){
    // 97 - 122 = a-z  ASSCII VALUES
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);
    if(ch<=122 && ch>=97){
        printf("It is a lower case character : %c",ch);
    }
    else
    printf("It is not a lower case character : %c",ch);

    
    return 0;
}

