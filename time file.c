#include<time.h>
clock_t start,end;
{
     start=clock();
     //
     //
     //
     end=clock();
    double time=((double)(end-start))/CLOCKS_PER_SEC;
    printf("\nTime used=%f",time);
}