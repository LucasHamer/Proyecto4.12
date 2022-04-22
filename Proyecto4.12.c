#include<stdio.h>
#include<stdlib.h>

int main()
{
    float valorxhora,canthora,sueldo;
    printf("Ingrese la cantidad de horas que trabajo: ");
    scanf("%f",&canthora);
    printf("Ingrese lo que gana por hora: ");
    scanf("%f",&valorxhora);

    if(canthora>=50 && canthora<150)
    {
        sueldo=canthora*valorxhora+500;
        printf("Su sueldo es de : $%0.2f",sueldo);
    }
    else if(canthora>=150)
    {
        sueldo=canthora*valorxhora+1500;
        printf("Su sueldo es de : $%0.2f",sueldo);
    }
    else
    {
        sueldo=canthora*valorxhora;
        printf("Su sueldo es de : $%0.2f",sueldo);
    }

    return 0;
}
