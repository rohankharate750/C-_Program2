




#include<stdio.h>

void Fun () 
{
    static  int i = 10;
    i++;
    printf("Value of i is : %d \n", i);

}
int main ()
{  
    // no = 51;
    Fun ();
    Fun ();
    Fun ();

    return 0; 
}