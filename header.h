#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED




double power(int base, int pwr);
int abs_int(int sum);
double abs(double prod);
double absol(double diff);
int error(double** A, double *b, double *x, int n);
double i_A(int i, int j);
void matrix_A(double** A, int n);
void vector_x(double *vec_x, int n);

void jacobi(double** A, double *x, double *b,int n);

#endif // HEADER_H_INCLUDED
