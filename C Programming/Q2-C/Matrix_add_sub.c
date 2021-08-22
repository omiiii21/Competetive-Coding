#include <stdio.h>
#include <stdalign.h>

void display(int[][3]);
void main()
{
    int c;
    void func1();
    void func2();
    void func3();
    void func4();
    void func5();

    printf("\n Matrix Functions:");
    printf("\n-------------------------------------");
    printf("\n Matrix Addition            : 1");
    printf("\n Matrix Subtraction         : 2");
    printf("\n Enter Your Choice          : ");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        func1();
        break;
    case 2:
        func2();
        break;
    default:
        printf("\nInvalid Choice");
    }
   
}

void func1()
{
    int x[3][3], y[3][3], z[3][3];
    void getmatrix(int[][3]);
    void addition(int[][3], int[][3], int[][3]);
    
    getmatrix(x);
    getmatrix(y);
    addition(x, y, z);
    printf("\n - : Matrix 1: - \n");
    display(x);
    printf("\n - : Matrix 2: - \n");
    display(y);
    printf("\n - : Matrix Addition (Result): - \n");
    display(z);
}
void getmatrix(int t[][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter element [%d][%d] : ", i, j);
            scanf("%d", &t[i][j]);
        }
    }
}
void addition(int p[][3], int q[][3], int r[][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            r[i][j] = p[i][j] + q[i][j];
    }
}
void func2()
{
    int x[3][3], y[3][3], z[3][3];
    void getmatrix(int[][3]);
    void subtraction(int[][3], int[][3], int[][3]);
   
    getmatrix(x);
    getmatrix(y);
    subtraction(x, y, z);
    printf("\n - : Matrix 1: - \n");
    display(x);
    printf("\n - : Matrix 2: - \n");
    display(y);
    printf("\n - : Matrix Subtraction (Result): - \n");
    display(z);
}
void subtraction(int p[3][3], int q[3][3], int r[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            r[i][j] = p[i][j] - q[i][j];
    }
}

 void display(int m[][3])
       {
           int i,j;
           printf("\n\n");
           for(i=0;i<3;i++)
           {
               for(j=0;j<3;j++)
                   printf("%d  ",m[i][j]);
               printf("\n");
           }
       }