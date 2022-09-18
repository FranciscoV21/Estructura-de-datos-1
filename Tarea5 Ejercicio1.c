#include <stdio.h>

int main()
{
    int horas,minutos;
    printf("*La aplicacion maneja el sistema de 24 horas*\n");
    printf("Dame la hora: ");
    scanf("%d",&horas);
    printf("Dame los minutos: ");
    scanf("%d",&minutos);

    if(horas>=0 && horas<=11 && minutos>=0 && minutos<=59)
    {
        printf("Buenos dias");
    }else if(horas>=12 && horas<=17 && minutos>=0 && minutos<=59){
        printf("Buenas tardes");
    }else if(horas>=18 && horas<=23 && minutos>=0 && minutos<=59){
        printf("Buenas noches");}else{
            printf("Ingresaste una hora no valida");
    }
}
