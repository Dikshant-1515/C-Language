// Loops are used to repeat similar part of code efficiently
// Three part of loop -- > 1.while loop
//                    -- > 2.do-while loop
//                    -- > 3.for loop

/* for while loop ::
while(condition){
    }
*/
#include <stdio.h>
int main(){
    int a;
    printf("Enter the no.");
    scanf("%d",&a);
     while(a<10){
        printf("%d\n",a);
       a++;
     }
    return 0;
}