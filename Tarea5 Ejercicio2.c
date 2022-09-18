#include <stdio.h>

int main()
{
    float descuento,kilos;
    float precio;
    printf("Cuantos kilos compro?  ");
    scanf("%f",&kilos);

    if(kilos >=0 && kilos <= 2)
    {
    printf("Tiene un descuento del 0% \n");
    descuento = 0;
    }else if(kilos >=2.01 && kilos <= 5){
    printf("Tiene un descuento del 10% \n");
    descuento = 10;
    }else if(kilos >=5.01 && kilos <= 10){
    printf("Tiene un descuento del 15% \n");
    descuento = 15;
    }else if(kilos >= 10.1){
    printf("Tiene un descuento del 20% \n");
    descuento =20;
    }
    printf("Cual es el precio por kilo del producto?: ");
    scanf("%f",&precio);
    precio = precio * kilos;
    printf("El precio de tus commpras sin descuento es de: %.2f \n",precio);
    descuento = descuento / 100;
    descuento = precio * descuento;
    precio -= descuento;
    printf("El precio de tus compras con descuento es de: %.2f \n",precio);
    return(0);
}
