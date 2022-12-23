#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>

//#define MAXN 10
//
//double f(int n, double a[], double x);
//
//int main()
//{
//    int n, i;
//    double a[MAXN], x;
//
//    scanf("%d %lf", &n, &x);
//    for (i = 0; i <= n; i++)
//        scanf("%lf", &a[i]);
//    printf("%.1f\n", f(n, a, x));
//    return 0;
//}
//double f(int n, double a[], double x)
//{
//    if(n==0)
//      return a[0];
//    return a[n]*pow(x,n)+f(n-1,a,x);
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
//}
//int main()
//{
//    double a = 1e10;
//    printf("%.f", a);
//
//}
//#include <stdio.h>
//
//void Print_Factorial(const int N);
//
//int main()
//{
//    int N;
//
//    scanf("%d", &N);
//    Print_Factorial(N);
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//void Print_Factorial(const int N)
//{
//    int i = 1;
//    double n = 1;
//    if (N < 0)
//    {
//        printf("Invalid input");
//    }
//    else
//    {
//        for (i = 1; i <= N; i++)
//        {
//            n *= i;
//        }
//        printf("%.f", n);
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int cm = 0;
//    scanf("%d", &cm);
//    double foot = 0, inch = 0;
//    foot = cm / 0.3048 / 12;
//    inch = (int)(cm / 0.3048 )% 12;
//    printf("%.f %.f", foot, inch);
//    return 0;
//}
////
//#include<stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int input = 0, time = 0;
//    scanf("%d %d", &input, &time);
//    int hour = input / 100;
//    int min = input % 100;
//    //计算时间
//    if (abs(time) >= 60)
//    {
//        hour += time / 60;
//        min += time % 60;
//    }
//    else
//        min += time;
//    //分钟进位，退位
//    if (abs(min) >= 60)
//    {
//        hour += min / 60;
//        min = min % 60;
//    }
//    else if (min < 0)
//    {
//        hour--;
//        min += 60;
//    }
//    //小时进位，退位
//    if (hour >= 24)
//    {
//        hour -= 24;
//    }
//    if (hour < 0)
//    {
//        hour += 24;
//    }
//    //输出结果和分钟为0的情况
//    if (min == 0)
//        printf("%d%d%d", hour, min, min);
//    else
//        printf("%d%d", hour, min);
//    return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//    printf("------------------------------------\n");
//    printf("Province      Area(km2)   Pop.(10K)\n");
//    printf("------------------------------------\n");
//    printf("Anhui         139600.00   6461.00\n");
//    printf("Beijing        16410.54   1180.70\n");
//    printf("Chongqing      82400.00   3144.23\n");
//    printf("Shanghai        6340.50   1360.26\n");
//    printf("Zhejiang      101800.00   4894.00\n");
//    printf("------------------------------------\n");
//    return 0;
//}
//int main()
//{
//    float f1;
//    float f2;
//    int in;
//    char cha;
//    scanf("%f %d %c %f", &f1, &in, &cha, &f2);
//    printf("%c %d %.2f %.1f", cha, in, f1, f2);
//}
//int main()
//{
//    int arr[5] = { 0 };
//    arr[8] = 20;
//    printf("%d", arr[8]);
//    return 0;
//}
#include<stdlib.h>
int main()
{
    int* p = (int*)malloc(sizeof(int));

    return 0;

}