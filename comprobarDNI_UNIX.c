// Programa que te dice la letra del DNI según el número
// Esta version es para UNIX
// Creado por @miancolrin

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    
    setlocale(LC_CTYPE, "Spanish");
    
    int numeroDNI;
    int resto;
    
    printf("###########################################################\n");
    printf("Programa que averigua la letra del DNI a partir del número");
    printf("\n###########################################################");
    
    printf("\n\nIntroduce el número de DNI/NIF: ");
    scanf("%d", &numeroDNI);
    
    resto = numeroDNI % 23;
    
    switch(resto){
        case 0:{
            printf("\n\nLa letra del DNI/NIF %d es T", numeroDNI);
            break;
        }
        case 1:{
            printf("\n\nLa letra del DNI/NIF %d es R", numeroDNI);
            break;
        }
        case 2:{
            printf("\n\nLa letra del DNI/NIF %d es W", numeroDNI);
            break;
        }
        case 3:{
            printf("\n\nLa letra del DNI/NIF %d es A", numeroDNI);
            break;
        }
        case 4:{
            printf("\n\nLa letra del DNI/NIF %d es G", numeroDNI);
            break;
        }
        case 5:{
            printf("\n\nLa letra del DNI/NIF %d es M", numeroDNI);
            break;
        }
        case 6:{
            printf("\n\nLa letra del DNI/NIF %d es Y", numeroDNI);
            break;
        }
        case 7:{
            printf("\n\nLa letra del DNI/NIF %d es F", numeroDNI);
            break;
        }
        case 8:{
            printf("\n\nLa letra del DNI/NIF %d es P", numeroDNI);
            break;
        }
        case 9:{
            printf("\n\nLa letra del DNI/NIF %d es D", numeroDNI);
            break;
        }
        case 10:{
            printf("\n\nLa letra del DNI/NIF %d es X", numeroDNI);
            break;
        }
        case 11:{
            printf("\n\nLa letra del DNI/NIF %d es B", numeroDNI);
            break;
        }
        case 12:{
            printf("\n\nLa letra del DNI/NIF %d es N", numeroDNI);
            break;
        }
        case 13:{
            printf("\n\nLa letra del DNI/NIF %d es J", numeroDNI);
            break;
        }
        case 14:{
            printf("\n\nLa letra del DNI/NIF %d es Z", numeroDNI);
            break;
        }
        case 15:{
            printf("\n\nLa letra del DNI/NIF %d es S", numeroDNI);
            break;
        }
        case 16:{
            printf("\n\nLa letra del DNI/NIF %d es Q", numeroDNI);
            break;
        }
        case 17:{
            printf("\n\nLa letra del DNI/NIF %d es V", numeroDNI);
            break;
        }
        case 18:{
            printf("\n\nLa letra del DNI/NIF %d es H", numeroDNI);
            break;
        }
        case 19:{
            printf("\n\nLa letra del DNI/NIF %d es L", numeroDNI);
            break;
        }
        case 20:{
            printf("\n\nLa letra del DNI/NIF %d es C", numeroDNI);
            break;
        }
        case 21:{
            printf("\n\nLa letra del DNI/NIF %d es K", numeroDNI);
            break;
        }
        case 22:{
            printf("\n\nLa letra del DNI/NIF %d es E", numeroDNI);
            break;
        }
            
    } // Cierra el Switch
    
    printf("\n\n");
    
} // Cierra el main
