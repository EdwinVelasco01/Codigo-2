#include <stdio.h>

char nombre[20]; char apellido[20]; char cedula[10];
int i; int op; int op2; int op3; int c; int op4;
char archivo[4]={'p','0','0','2'};

int main(){

    FILE *PPF=NULL;
    char cara[200];

    printf("Desea iniciar el programa?: \n");
    printf("Ingrese 1 para comenzar: \n");
    scanf("%d", &op);

    printf("--------------------------------------------------------------------------------------\n");

    if(op==1){

    printf("Ingrese el Nombre del paciente: \n");
    scanf("%s", &nombre);

    printf("Ingrese el Apellido del paciente: \n");
    scanf("%s", &apellido);
    printf("\n");

    printf("El nombre completo del paciente ingresado es: %02s %02s \n", nombre,apellido);
    printf("\n");

    printf("--------------------------------------------------------------------------------------\n");

    do
    {
        printf("Ingrese la cedula del paciente: \n");
        scanf("%s", &cedula);

    } while (cedula [c = 10]);
    

    printf("\n");

    printf("La cedula del paciente ingresado es: %s \n", cedula);

    printf("--------------------------------------------------------------------------------------\n");

    printf("Los datos ingresados son correctos?\nDe ser asi ingrese 1 para continuar, caso contrario ingrese 2 para reescribir los datos:\n ");
    scanf("%d", &op2);

    printf("--------------------------------------------------------------------------------------\n");

    if (op2==2){
        
        printf("Los datos ingresados son: \n");
        printf("%02s %02s \n", nombre, apellido);
        printf("%s \n", cedula);

        printf("--------------------------------------------------------------------------------------\n");

        printf("Desea cambiarlos? \n");
        printf("Ingrese 1 para si o 2 para no: \n");
        scanf("%d", &op3);

        printf("--------------------------------------------------------------------------------------\n");

        if (op3==1){
            
            printf("Ingrese el Nombre del paciente: \n");
            scanf("%s", &nombre);
            printf("Ingrese el Apellido del paciente: \n");
            scanf("%s", &apellido);
            do{
                printf("Ingrese la cedula del paciente: \n");
                scanf("%s", &cedula);
            } 
            while (cedula [(c) = 10]);

            printf("--------------------------------------------------------------------------------------\n");

            printf("Los nuevos datos ingresados son:  %02s %02s %02s \n", nombre, apellido, cedula);

            printf("--------------------------------------------------------------------------------------\n");

            printf("El registro se completo con exito \n");

            fprintf(PPF,"Los datos del paciente son: \n");
            fprintf(PPF,"Nombre: %s\n Apellido: %s\n Cedula: %s\n",nombre,apellido,cedula);

            PPF= fopen(archivo,"w");

            for (i = 0; i < 5; i+=5){
                fgets(cara,200,PPF);
                printf("%s",cara);
            }

            fclose(PPF);

        }
        else{
            printf("Los datos se registraron con exito \n");
            
            fprintf(PPF,"Los datos del paciente son: \n");
            fprintf(PPF,"Nombre: %s\n Apellido: %s\n Cedula: %s\n",nombre,apellido,cedula);

            PPF= fopen(archivo,"w");

            for (i = 0; i < 5; i+=5){
                fgets(cara,200,PPF);
                printf("%s",cara);
            }

            fclose(PPF);
        }

    }
    else{
        printf("Los datos se registraron con exito \n");

        PPF= fopen(archivo,"w+");

        fprintf(PPF,"Los datos del paciente son: \n");
        fprintf(PPF,"Nombre: %s\n Apellido: %s\n Cedula: %s\n",nombre,apellido,cedula);

        for (i = 0; i < 5; i+=5){
            fgets(cara,200,PPF);
            printf("%s",cara);
        }

        fclose(PPF);
    }  

}
else{;

    printf("Gracias por utilizar el programa \n");
    
    }

    return 0;

}