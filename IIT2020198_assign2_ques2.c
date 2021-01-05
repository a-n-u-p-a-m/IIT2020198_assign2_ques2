/*Checking limit of unsigned int and short*/

#include <stdio.h>
int main(void)

{
    unsigned short x=65535;   /*Assigning value for short*/
    unsigned int y=4294967295;   /*Assigning value for int*/
    
    x=x+1;  /*Assigning value 1 greater than limit*/
    y=y+1;  /*Assigning value 1 greater than limit*/
    
    printf("x=%hd and y=%d\n",x,y);
    return 0;
}    
