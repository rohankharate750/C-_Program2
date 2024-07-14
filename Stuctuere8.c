#include<stdio.h>

struct Hello 
{
    int no;
    float d;

};
struct Demo
{
    int i ;
    float f ;
    struct Hello hobj;


}dobj;
int main ()
{
    dobj.i = 11;
    dobj.f = 90.99;

    dobj.hobj.no = 21;
    dobj.hobj.d = 90.88; 

    return 0;

}
//hello obj independly create karu sakata 
///aata create karu sakatoy....