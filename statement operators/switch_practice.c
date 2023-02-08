// Write a program to accept an alphabet and print the word
#include <stdio.h>
int main(){
    char key;
    printf("Enter the alphabet: ");
    scanf("%c",&key);
    switch(key)
    {
    case 'A':
    case 'a':

    printf("Arjun");
        break;

    case 'B':
    case 'b':

    printf("Balram");
    break;

    case 'C':
    case 'c':

    printf("Chnakya");
    break;

    case 'D':
    case 'd':

    printf("Dron");
    break;

    case 'E':
    case 'e':

    printf("Ekalavya");
    break;

    case 'F':
    case 'f':
    printf("Food");
    break;


    default:
    printf("Error");
        break;
    }

    return 0;
} 

// Write a program to accept an aplhabet and check it is vowel or contant

#include <stdio.h>
int main()
{
    char key;
    printf("Enter the alphabet: ");
    scanf("%c", &key);
    switch (key)
    {
    case 'A':
    case 'a':

    case 'E':
    case 'e':

    case 'I':
    case 'i':

    case 'O':
    case 'o':

    case 'U':
    case 'u':

        printf("Vowel");
        break;

    default:
        printf("Consonent");
    }
    return 0;
}

/* Write a program to accept two number and one sign from a user
+ Addition
- Subtraction
* Multiplication
/ Divide
& Average
$ Max
_ Min  */

 #include <stdio.h>
int main()
{
    float num1, num2,ans;
    char result;
    printf("result\n");
    scanf("%c",&result);

    printf("Enter the value of num1 and num2 \n");
    scanf("%f %f", &num1, &num2);

    switch (result)
    {
    case '+':
        ans = num1 + num2;
        printf("%f", ans);
        break;

    case '-':
        ans = num1 - num2;
        printf("%f", ans);
        break;

    case '*':
        ans = num1 * num2;
        printf("%f", ans);
        break;

    case '/':
        ans = num1 / num2;
        printf("%f", ans);
        break;

    case '&':
        ans = num1 + num2 / 2;
        printf("%f", ans);
        break;

    case '$':
        if (num1>num2)
        {
            printf("%.2f is max",num1);
        }
        else{
            printf("%.2f is max",num2);
        }
        break;

    case '_':
        if (num2<num1)
        {
            printf("%.2f is min",num2);
        }
        else{
            printf("%.2f is min",num1);
        }
        break;

    default:
        break;
    }

    return 0;
}