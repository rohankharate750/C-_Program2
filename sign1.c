

#include<stdio.h>

int main()
{ 
    
    int i = 10;

    signed int j = 20;
     signed int k = -30;

    unsigned int a = 40; 
   // unsigned int b = -40;

   int x = 10;
   short int y = 10;
   long int z = 10;

   printf("%d\n",i);
   printf(" %d\n",j);
   printf(" %d\n",k);
   printf("%d\n",a);
   printf("size of x is : %d\n",sizeof(x));
   printf("size of y is : %d\n", sizeof(y));

   printf("size of z is : %d\n" ,sizeof(z));
   


    return 0;

}