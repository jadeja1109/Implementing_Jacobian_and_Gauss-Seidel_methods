#include<iostream>
#include "header.h"
using namespace std;

double power(int base, int pwr)
{
    double sqr = 1;
    for(int i=0; i<pwr;i++)
        sqr = sqr*base;
    return sqr;
}

int abs_int(int sum)
{
    if(sum>0) return sum;
    else return -sum;
}
double absol(double diff)
{
    if(diff>0) return diff;
    else return -diff;
}
//For calculating error.
int error(double** A, double *b, double *x, int n)
{
    double tol=0.001;
    double epsilon;
    for (int m=0; m<n; m++)
    {
        epsilon =0;
        for(int r=0;r<n;r++)
        {
        epsilon = epsilon + A[m][r]*x[r];
        }
        if(absol(epsilon-b[m])<tol) ;
        else return 1;
    }
    return 0;
}

//Initializing matrix A
double i_A(int i, int j)
{
    double res;
    if(i==j) return 1.0;
    else if(abs_int(i-j) <= 10)
        {
            res =  (-1)/(power(2, power(2, (abs_int(i-j)))));
            return res;
        }
    else return 0;
}

void matrix_A(double ** A, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<< A[i][j]<<" ";
        }
        cout<<endl;
    }
}

void vector_x(double *x, int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<x[i]<<" ";
        cout<<endl;
    }
}

// Function to solve linear system using Jacobi method
void jacobi(double** A, double *b, double *x, int n)
{
    double epsilon;
    cout<< "inside jacobi\n";

    while( error(A,b,x,n) == 1)
    {
    for(int i=0;i<n;i++){

            epsilon = 0;
            for(int j=0;j<n;j++)
            {
                if(j==i);
                else
                {
                    epsilon += A[i][j]*x[j];
                }

            }
            x[i] = (b[i]-epsilon)/A[i][i];
    }

    }
}


