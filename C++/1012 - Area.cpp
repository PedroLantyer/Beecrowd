#include <iostream>
#include <cmath>

void triangulo(double A, double C)
{
    double area = ((A*C)/2.0);
    printf("TRIANGULO: %.3f\n", area);
}

void circulo(double C)
{
    double pi = 3.14159;
    double area = pi*(pow(C,2));
    printf("CIRCULO: %.3f\n", area);
}

void trapezio(double A, double B, double C)
{
    double area = ((A+B)*C)/2.0;
    printf("TRAPEZIO: %.3f\n", area);
}

void quadrado(double B)
{
    double area = pow(B,2);
    printf("QUADRADO: %.3f\n", area);
}

void retangulo(double A, double B)
{
    double area = A*B;
    printf("RETANGULO: %.3f\n", area);
}

int main()
{
   double A,B,C;
   scanf("%lf %lf %lf",&A,&B,&C);
   triangulo(A,C);
   circulo(C);
   trapezio(A,B,C);
   quadrado(B);
   retangulo(A,B);
   return 0;
}