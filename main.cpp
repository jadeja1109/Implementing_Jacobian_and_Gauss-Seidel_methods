#include <iostream>
#include "header.h"
using namespace std;

const int max_iter=500;
int main()
{
    int n;
    cout<<"Enter the size of your matrix: "<<endl;
    cin >> n;

    // Declare the matrix A and right-hand side vector b

    double b[n];
    double x[n];

    double** A= new double*[n];


    // Read the size of the matrix and allocate memory for the arrays

    for (int i=0;i<n;i++)
    {
        A[i]=new double[n];
    }

    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
             A[i][j] = i_A(i,j);
        }
    }

    /*cout<< "Mat A" << endl;
    for(int i=0; i<n; i++)
    {

        for(int j = 0;j<n;j++)
        {
             cout<< A[i][j]<< " ";
        }
        cout<< endl;
    }*/

    for(int i=0;i<n;i++)
    {
        b[i] =1;
    }
    for(int i=0;i<n;i++)
    {
        x[i] =1;
    }


    double tolerance;
    int maxiter;
    cout << "Enter the tolerance: ";
    cin >> tolerance;
    cout << "Enter the maximum number of iterations: ";
    cin >> maxiter;
    cout << "Solving using Jacobi method:" << endl;
    jacobi( A,  b,  x, n);

    //matrix_A(A,n) ;
    vector_x(x,n);


    for (int i = 0; i < n; i++) {
        delete[] A[i];
    }
    delete[] A;

    return 0;
}


