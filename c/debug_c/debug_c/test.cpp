#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>

#define MAXN 10

double f(int n, double a[], double x);

int main()
{
    int n, i;
    double a[MAXN], x;

    scanf("%d %lf", &n, &x);
    for (i = 0; i <= n; i++)
        scanf("%lf", &a[i]);
    printf("%.1f\n", f(n, a, x));
    return 0;
}
double f(int n, double a[], double x)
{
    if(n==0)
      return a[0];
    return a[n]*pow(x,n)+f(n-1,a,x);
   /* int i = 0, j = 0;
    double sum = 0; double t = 1;
    for (i = 0; i <= n; i++)
    {
        if (i == 0)
            sum += a[0];
        else
        {
            t = 1;
            for (j = 0; j <= i-1; j++)
                t *= x;
            sum += a[i] * t;
        }
    }
    return sum;*/
}