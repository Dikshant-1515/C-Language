// i++ means first print then increment 
// ++i means first increment then print

// i++ ---> i is increased by 1
// i-- --> i is decreased by 1

#include <stdio.h>
int main(){
    int i = 5;
    printf("The value after i++ is %d\n",i++);
    printf("The value after i is %d\n",i);
    return 0;
}