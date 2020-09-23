#include<stdio.h>


void capturar_enteros(){
    int enteros[5];
    float prom;
    int suma=0;
    for (size_t i = 0; i < 5; i++)
    {
        scanf("%i", &enteros[i]);
    }
    for (size_t i = 0; i < 5; i++)
    {
        printf("%i\n", enteros[i]);
    }
    for (size_t i = 0; i < 5; i++)
    {
        suma = suma + enteros[i];
    }
    printf("suma: %i\n", suma);
    printf("promedio: %.2f\n", suma/5.0);
}

void mostrar(int n, char cadena[]){
    for (size_t i = 0; i < n; i++)
    {
        printf("%s",cadena);
    }
    
}

struct persona
{
    char nombre[20];
    char tipo[20];
    float fuerza;
    int salud;
}personas[5];

unsigned int cont = 0;

void capturar_persona(){
    if(cont < 5){
    printf("nombre: ");
    scanf("%s", personas[cont].nombre);
    printf("tipo: ");
    scanf("%s", personas[cont].tipo);
    printf("fuerza: ");
    scanf("%f", &personas[cont].fuerza);
    printf("salud: ");
    scanf("%i", &personas[cont].salud);
    cont++;
    }
    else{
        printf("arreglo de personas esta lleno");
    }
}

void mostrar_personas(){
    for (size_t i = 0; i < cont; i++)
    {
        printf("nombre: %s\n", personas[i].nombre);
        printf("tipo: %s\n", personas[i].tipo);
        printf("fuerza: %f\n", personas[i].fuerza);
        printf("salud: %i\n", personas[i].salud);
    }
    
}

int main(){
   char op;
    char cadena[20];
    int n;
   do
   {
       printf("1) capturar enteros\n");
       printf("2) mostrar cadena n veces\n");
       printf("3) agregar personajes\n");
       printf("4) mostrar personajes\n");
       
       printf("0) salir\n");
       scanf ("%c", &op);
       
        switch (op)
        {
        case '1':
            capturar_enteros();
            break;
        case '2':
            printf("escribe una cadena de hasta 20 caracteres: ");
            fflush(stdin);
            fgets(cadena, sizeof(cadena),stdin);
            printf("n: ");
            scanf("%i",&n);
            mostrar(n, cadena);
            break;
        case '3':
            capturar_persona();
            break;
        case '4':
            mostrar_personas();
            break;

        default:
            break;
        }

       fflush(stdin);
   } while (op!='0');


    return 0;
}