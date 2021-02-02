#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define DI 3.14

int main()
{
     printf("This is the value of PI : %g\n",DI);
    printf("Current date is : %s\n",__DATE__);
    printf("Current Line is %d\n",__LINE__);
    printf("Current file name is %s\n",__FILE__);
    printf("ANSII:%d\n",__STDC__);
    srand(time(NULL));          //srand takes seed as an input and is defined inside stdlib.h
    printf("The random number between 0 to 100 is : %d",rand()%100);
    return 0;
}