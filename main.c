#include <stdio.h>
#include <stdlib.h>
#define CAPACITY 1000

struct arrays
{
    int n;
    int a[CAPACITY];
    int* ptr;
};
void stru(struct arrays p);

int main()
{
    struct arrays a;
    a.n = 4;
    a.ptr = (int*)malloc(a.n * sizeof(int));
    for (int i = 0; i < a.n; ++i)
    {
        a.a[i] = i+1;
        a.ptr[i] = i+1;
    }
    stru(a);
    for(int i = 0; i<a.n; ++i)
    {
        printf("a%d = %d\n",i+1, a.a[i]);
        printf("ptr%d = %d\n",i+1,  a.ptr[i]);
    }
    return 0;
}
void stru(struct arrays p)
{
    for(int i = 0; i<p.n; ++i)
    {
        p.a[i] = p.a[i] * p.a[i];
        p.ptr[i] = p.ptr[i] * p.ptr[i];
    }
}
