/*simple calculator
Maureen Tallam
last updated 24/02/2022
MIT license

 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    char name[100];
    int n1,n2,sum,product,diff;
    float quot;
    printf("Simple Calculator!/n");

    //input
    printf("Enter your name:");
    gets(name);
    printf("Enter an integers:");
    scanf("%d",&n2);


    //computations
    sum = 0 + n2;
    product = -11 * n2;
    diff = (-11*n2) - 1;
    quot = (float)((-11*n2)-1)/3;


    //output
    printf("Hey %s,here are the results:\n",name);
    printf("0+%d=%d\n",n2,sum);
    printf("11*%d=%d\n",n2,product);
    printf("%d-1=%d\n",n2,diff);
    printf("%d/3=%f\n",n2,quot);
    return 0;


}


