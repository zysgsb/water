#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<iostream>

#include<assert.h>
using namespace std;
#define A1 2  //左矩阵的行和列
#define B1 2
#define A2 2//右矩阵的行和列
#define B2 2

void ABC(double arr1[][A1], double arr2[][B2], double arr3[][B2], int b1, int a2, int a1, int b2)
{
    assert(a1 == b2);
    int i = 0;//行
    int j = 0;//列
    int k = 0;
    printf("数组arr1*arr2=");

    for (i = 0; i < b1; i++)
    {
        for (j = 0; j < b2; j++)
        {
            for (k = 0; k < a1; k++)
            {
                arr3[i][j] = arr1[i][k] * arr2[k][j];
                printf("%lf  ", arr3[i][j]);

                /*if (k % 3 == 0)
                    cout << "\n";*/


            }
        }
    }
    

}


int main()
{
    int x, n;
    n = 4;
    int a[5];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);//插入数字

    for (int i = 0; i < n; i++)
    {
        if (a[i] > x)
        {
            for (int j = n; j > i; j--)
            {

                a[j] = a[j - 1];
            }
            a[i] = x;
            break;
        }
    }
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ", a[i]);
    }
    cout << "\n";
    double arr1[B1][A1] = { 1,2 ,8,5 };
    double arr2[A2][B2] = { 3,4 ,5,6  };
    double arr3[B1][B2] = { 0 };
    ABC(arr1, arr2, arr3, B1, A2, A1, B2);




    return 0;
}

