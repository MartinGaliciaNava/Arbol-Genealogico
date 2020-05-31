#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int x=0;
    do
    {
        printf("\n ELIGUE LA OPCION QUE QUIERAS PARA SABER EL NOMBRE DE ALGUN FAMILIAR TUYO: \n");
        printf("\n 1- BISABUELOS ");
        printf("\n 2- ABUELOS PATERNOS Y MATERNO ");
        printf("\n 3- PADRE Y TUS TIOS/AS ");
        printf("\n 4- MAMA Y TUS TIOS/AS ");
        printf("\n 5- HERMANAS ");
        printf("\n 6- PRIMOS ");
        printf("\n 7- SALIR FIN DEL PROGRAMA \n");
        printf("\n OPCION ELEGIDA: ");
        scanf("%d",&x);
		system("cls");
        switch(x)
        {
            case 1:
            	printf("\n\n");
                printf("\n\t\t **BISABUELOS MATERNOS ** \t\t");
                printf("\n Samuel Nava Elizalde y Nieves Vazquez Maldonado \n");
                printf("\n\n");
                break;

            case 2:
                printf("\n\n");
				printf("\n\t\t **ABUELOS PATERNOS** \t\t");
                printf("\n Demetrio Salvador Galicia Aguirre y Ma. Paz Muñoz Tiburcio \n");
                printf("\n\t\t **ABUELOS MATERNOS** \t\t");
                printf("\n Maria del Carmen Nava Vazquez \n");
                printf("\n\n");
                break;

            case 3:
                printf("\n\n");
                printf("\n\t\t **PADRE** \t\t");
                printf("\n Martin Galicia Muñoz \n ");
                printf("\n\t\t **TIOS/AS** \t\t");
                printf("\n Raul Galicia Muñoz \n");
                printf("\n Aron Galicia Muñoz \n");
                printf("\n Ana Maria Galicia Muñoz \n");
                printf("\n Ruben Galicia Muñoz \n");
                printf("\n Jose Angel Galicia Muñoz \n");
                printf("\n Eustaquio Salvador Galicia Muñoz \n");
				printf("\n\n");
                break;

            case 4:
                printf("\n\n");
                printf("\n\t\t **MADRE ** \t\t");
                printf("\n Ines Nava Vazquez \n");
                printf("\n\t\t **TIOS/AS** \t\t");
                printf("\n Margarita Nava Vazquez \n");
                printf("\n\n");
                break;

            case 5:
            	printf("\n\n");
            	printf("\n\t\t **HERMANAS** \t\t");
                printf("\n Diana Karen Galicia Nava \n");
                printf("\n Jennifer Galicia Nava \n");
                printf("\n\n");
                break;

            case 6:
            	printf("\n\n");
            	printf("\n\t\t **PRIMOS/AS** \t\t");
                printf("\n Luis Angel Basurto Galicia\n");
                printf("\n Lisett Jessica Basurto Galicia \n");
                printf("\n Jaquelin Lopez Nava \n");
                printf("\n Jonathan Lopez Nava \n");
                printf("\n Hector Galicia Lara\n");
                printf("\n David Galicia Lara \n");
                printf("\n Emilio Galicia Lara \n");
                printf("\n\n");
                break;
                default:
                printf("Fin del Programa \n");
                printf("\n\n");
        }
    }while(x<=6&&x>0);
    return 0;
}
