
#include<stdio.h>

struct Demo

{
    int *p;
    float *q;
    double d;


};


int main()
{ 
    struct demo obj;
    int i = 11;

    float f = 90.9999;

    obj.p=&i;
    obj.q =&f;
    obj.d = 90.9999;

    printf("%d ",*(obj.p));
    printf("%d",*(obj.d));

    return 0;


}