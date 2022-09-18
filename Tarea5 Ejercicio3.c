#include <stdio.h>

int main()
{
    float lado1,lado2,lado3;
    printf("Dame el primer valor del triangulo: ");
    scanf("%f",&lado1);
    printf("Dame el segundo valor del triangulo: ");
    scanf("%f",&lado2);
    printf("Dame el tercer valor del triangulo: ");
    scanf("%f",&lado3);

    if(lado1 == lado2 && lado2 == lado3 && lado1 ==lado3)
    {
        printf("Es un triangulo Equilatero");

    }else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
    {
        printf("Es un triangulo Isosceles");
    }else
    {
        printf("Es un trianguloe Escaleno");
    }
}
