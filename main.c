#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//FALTA [15;19]
void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();
void ejercicio5();
void ejercicio6();
void ejercicio7();
void ejercicio8();
void ejercicio9();
void ejercicio10();
void ejercicio11();
void ejercicio12();
void ejercicio13();
void ejercicio14();
void ejercicio15();
void ejercicio16();
void ejercicio17();
void ejercicio18();
void ejercicio19();
void tamanoMatriz(int *f,int *c);                                                                               //(1)
void cargaMatrizInt(int f,int c,int matriz[f][c]);                                                              //(2)
void muestraMatrizInt(int f,int c,int matriz[f][c]);                                                            //(3)
void cargaMatrizRandom(int f,int c,int matriz[f][c]);                                                           //(4)
float sumaElementos(int f,int c,int matriz[f][c]);                                                              //(5)
float promedioMatriz(int f,int c,int matriz[f][c]);                                                             //(6)
int busquedaElemento(int f,int c,int matriz[f][c],int busqueda);                                                //(7)
int cargaMatrizPalabras(char palabra[15][25]);                                                                  //(8)
void muestraPalabras(char palabras[15][25],int cantidad);                                                       //(9)
int busquedaPalabra(char palabras[15][25],int cantidad,char busqueda[1][25]);                                   //(10)
void ordenSeleccion(char palabras[15][25],int cantidad);                                                        //(11)
int posicionMenor(char palabras[15][25],int a,int cantidad);                                                    //(12)
int determinanteMatriz2X2(int f,int c,int matriz[f][c]);                                                        //(13)
void multiplicacionMatrices(int f,int c,int matriz1[f][c],int g,int d,int matriz2[g][d],int resultado[f][d]);   //(14)
int main()
{
    int ejercicio;
    do
    {
        do
        {
            printf("EJERCICIOS                                                 INGRESAR");
            printf("\nEJERCICIO 1  ...................................................  1");
            printf("\nEJERCICIO 2  ...................................................  2");
            printf("\nEJERCICIO 3  ...................................................  3");
            printf("\nEJERCICIO 4  ...................................................  4");
            printf("\nEJERCICIO 5  ...................................................  5");
            printf("\nEJERCICIO 6  ...................................................  6");
            printf("\nEJERCICIO 7  ...................................................  7");
            printf("\nEJERCICIO 8  ...................................................  8");
            printf("\nEJERCICIO 9  ...................................................  9");
            printf("\nEJERCICIO 10 ................................................... 10");
            printf("\nEJERCICIO 11 ................................................... 11");
            printf("\nEJERCICIO 12 ................................................... 12");
            printf("\nEJERCICIO 13 ................................................... 13");
            printf("\nEJERCICIO 14 ................................................... 14");
            printf("\nEJERCICIO 15 ................................................... 15");
            printf("\nEJERCICIO 16 ................................................... 16");
            printf("\nEJERCICIO 17 ................................................... 17");
            printf("\nEJERCICIO 18 ................................................... 18");
            printf("\nEJERCICIO 19 ................................................... 19\n");
            printf("\nIngrese el ejercicio: ");
            scanf("%i",&ejercicio);
        }
        while(ejercicio!=1 && ejercicio!=2 && ejercicio!=3 && ejercicio!=4 && ejercicio!=5 && ejercicio!=6 && ejercicio!=7 && ejercicio!=8 && ejercicio!=9 && ejercicio!=10 && ejercicio!=11 && ejercicio!=12 && ejercicio!=13 && ejercicio!=0);
        if(ejercicio!=0)
        {
            printf("\nEJERCICIO %i\n\n",ejercicio);
        }
        switch(ejercicio)
        {
            case 1:
            {
                ejercicio1();
            }
            break;
            case 2:
            {
                ejercicio2();
            }
            break;
            case 3:
            {
                ejercicio3();
            }
            break;
            case 4:
            {
                ejercicio4();
            }
            break;
            case 5:
            {
                ejercicio5();
            }
            break;
            case 6:
            {
                ejercicio6();
            }
            break;
            case 7:
            {
                ejercicio7();
            }
            break;
            case 8:
            {
                ejercicio8();
            }
            break;
            case 9:
            {
                ejercicio9();
            }
            break;
            case 10:
            {
                ejercicio10();
            }
            break;
            case 11:
            {
                ejercicio11();
            }
            break;
            case 12:
            {
                ejercicio12();
            }
            break;
            case 13:
            {
                ejercicio13();
            }
            break;
            case 14:
            {
                ejercicio13();
            }
            break;
            case 15:
            {
                ejercicio13();
            }
            break;
            case 16:
            {
                ejercicio13();
            }
            break;
            case 17:
            {
                ejercicio13();
            }
            break;
            case 18:
            {
                ejercicio13();
            }
            break;
            case 19:
            {
                ejercicio13();
            }
            break;
        }
    }
    while(ejercicio!=0);
    printf("\nTP4 BIS TERMINADO\n");
    printf("\nVersion 1.2\n");
    return 0;
}
void tamanoMatriz(int *f,int *c)                                                                                //INICIO FUNCION TAMANOMATRIZ               (1)
{
    printf("Ingrese la cantidad deseada de filas: ");
    scanf("%i",f);
    printf("Ingrese la cantidad deseada de columnas: ");
    scanf("%i",c);
    printf("\nLa matriz sera de %ix%i\n\n",*f,*c);
}                                                                                                               //FIN FUNCION TAMANOMATRIZ
void cargaMatrizInt(int f,int c,int matriz[f][c])                                                               //INICIO FUNCION CARGAMATRIZINT             (2)
{
    int a,b;
    for(a=0;a<f;a++)
    {
        for(b=0;b<c;b++)
        {
            printf("Ingrese un numero entero para la posicion %i%i: ",a+1,b+1);
            scanf("%i",&matriz[a][b]);
        }
    }
    printf("\n");
}                                                                                                               //FIN FUNCION CARGAMATRIZINT
void muestraMatrizInt(int f,int c,int matriz[f][c])                                                             //INICIO FUNCION MUESTRAMATRIZINT           (3)
{
    int a,b;
    for(a=0;a<f;a++)
    {
        for(b=0;b<c;b++)
        {
            printf("|%i| ",matriz[a][b]);
        }
        printf("\n");
    }
    printf("\n");
}                                                                                                               //FIN FUNCION MUESTRAMATRIZINT
void cargaMatrizRandom(int f,int c,int matriz[f][c])                                                            //INICIO FUNCION CARGAMATRIZRANDOM          (4)
{
    int a,b;
    srand(time(NULL));                                                                                          //INICIALIZA EL GENERADOR DE NUMEROS RANDOM
    for(a=0;a<f;a++)
    {
        for(b=0;b<c;b++)
        {
            matriz[a][b]=rand()%10;
        }
    }
}                                                                                                               //FIN FUNCION CARGAMATRIZRANDOM
float sumaElementos(int f,int c,int matriz[f][c])                                                               //INICIO FUNCION SUMAELEMENTOS              (5)
{
    float suma=0;
    int a,b;
    for(a=0;a<f;a++)
    {
        for(b=0;b<c;b++)
        {
            suma=suma+matriz[a][b];
        }
    }
    return suma;
}                                                                                                               //FIN FUNCION SUMAELEMENTOS
float promedioMatriz(int f,int c,int matriz[f][c])                                                              //INICIO FUNCION PROMEDIOMATRIZ             (6)
{
    float promedio,suma;
    suma=sumaElementos(f,c,matriz);                                                                             //FUNCION SUMAELEMENTOS
    promedio=suma/(f*c);
    return promedio;
}                                                                                                               //FIN FUNCION PROMEDIOMATRIZ
int busquedaElemento(int f,int c,int matriz[f][c],int busqueda)                                                 //INICIO FUNCION BUSQUEDAELEMENTO           (7)
{
    int a,b,flag=0;
    for(a=0;a<f && flag==0;a++)
    {
        for(b=0;b<c && flag==0;b++)
        {
            if(matriz[a][b]==busqueda)
            {
                flag=1;
            }
        }
    }
    return flag;
}                                                                                                               //FIN FUNCION BUSQUEDAELEMENTO
int cargaMatrizPalabras(char palabra[15][25])                                                                   //INICIO FUNCION CARGAMATRIZCOMPLETA        (8)
{
    int a;
    char continuar='s';
    for(a=0;a<15 && continuar=='s';a++)
    {
        printf("Ingrese una palabra (maximo 25 letras): ");
        fflush(stdin);
        gets(palabra[a]);
        printf("Desea ingresar otra palabra? s/n Respuesta: ");
        fflush(stdin);
        scanf("%c",&continuar);
    }
    printf("\n");
    return a;
}                                                                                                               //FIN FUNCION CARGAMATRIZPALABRAS
void muestraPalabras(char palabras[15][25],int cantidad)                                                        //INICIO FUNCION MUESTRAPALABRAS            (9)
{
    int a;
    printf("Palabras:\n\n");
    for(a=0;a<cantidad;a++)
    {
        printf("%s\n",palabras[a]);
    }
}                                                                                                               //FIN FUNCION MUESTRAPALABRAS
int busquedaPalabra(char palabras[15][25],int cantidad,char busqueda[1][25])                                    //INICIO FUNCION BUSQUEDAELEMENTO           (10)
{
    int a=0,flag=0;
    while(a<cantidad && flag==0)
    {
        if(strcmp(palabras[a],busqueda[0])==0)
        {
            flag=1;
        }
        a++;
    }
    return flag;
}                                                                                                               //FIN FUNCION BUSQUEDAELEMENTO
void ordenSeleccion(char palabras[15][25],int cantidad)                                                         //INICIO FUNCION ORDENSELLECION             (11)
{
    int a=0,posicion;
    char aux[1][25];
    while(a<cantidad-1)
    {
        posicion=posicionMenor(palabras,a,cantidad);                                                            //FUNCION POSICIONMENOR
        strcpy(aux[0],palabras[posicion]);
        strcpy(palabras[posicion],palabras[a]);
        strcpy(palabras[a],aux[0]);
        a++;
    }
}                                                                                                               //FIN FUNCION ORDENSELLECION
int posicionMenor(char palabras[15][25],int a,int cantidad)                                                     //INICIO FUNCION POSICIONMENOR              (12)
{
    int posicion=a;
    int i=a+1;
    char menor[1][25];
    strcpy(menor[0],palabras[a]);
    while(i<cantidad)
    {
        if(strcmp(menor[0],palabras[i])==1)
        {
            strcpy(menor[0],palabras[i]);
            posicion=i;
        }
        i++;
    }
    return posicion;
}                                                                                                               //FIN FUNCION POSICIONMENOR
int determinanteMatriz2X2(int f,int c,int matriz[f][c])                                                         //INICIO FUNCION DETERMINANTEMATRIZ2X2      (13)
{
    int determinante;
    determinante=matriz[0][0]*matriz[1][1]-matriz[0][1]*matriz[1][0];
    return determinante;
}                                                                                                               //FIN FUNCION DETERMINANTEMATRIZ2X2
void multiplicacionMatrices(int f,int c,int matriz1[f][c],int g,int d,int matriz2[g][d],int resultado[f][d])    //INICIO FUNCION MULTIPLICACIONMATRICES     (14)
{
    int x,a,b,suma;
    for(x=0;x<d;x++)
    {
        for(a=0;a<f;a++)
        {
            suma=0;
            for(b=0;b<c;b++)
            {
                suma=suma+matriz1[a][b]*matriz2[b][x];
            }
            resultado[a][x]=suma;
        }
    }
}                                                                                                                   //FIN FUNCION DETERMINANTEMATRIZ2X2
void ejercicio1()
{
    //Hacer una función que reciba como parámetro una matriz de números enteros y permita que el usuario ingrese valores al mismo por teclado.
    //La función debe cargar la matriz por completo.
    int f,c;
    tamanoMatriz(&f,&c);                                                                                        //FUNCION TAMANOMATRIZ
    int matriz[f][c];
    cargaMatrizInt(f,c,matriz);                                                                                 //FUNCION CARGAMATRIZINT
    muestraMatrizInt(f,c,matriz);                                                                               //FUNCION MUESTRAMATRIZINT
}
void ejercicio2()
{
    //Hacer una función que reciba como parámetro una matriz de números enteros y permita que el usuario ingrese valores al mismo por teclado.
    //La función debe cargar la matriz por completo.
    int f,c;
    tamanoMatriz(&f,&c);                                                                                        //FUNCION TAMANOMATRIZ
    int matriz[f][c];
    cargaMatrizInt(f,c,matriz);                                                                                 //FUNCION CARGAMATRIZINT
    muestraMatrizInt(f,c,matriz);                                                                               //FUNCION MUESTRAMATRIZINT
}
void ejercicio3()
{
    //Hacer una función que reciba como parámetro una matriz de números enteros y que cargue la misma con números aleatorios (sin intervención del usuario).
    //La función debe cargar la matriz por completo.
    int f,c;
    tamanoMatriz(&f,&c);                                                                                        //FUNCION TAMANOMATRIZ
    int matriz[f][c];
    cargaMatrizRandom(f,c,matriz);                                                                              //FUNCION CARGAMATRIZRANDOM
    muestraMatrizInt(f,c,matriz);                                                                               //FUNCION MUESTRAMATRIZ
}
void ejercicio4()
{
    //Hacer una función tipo int que sume el contenido total de una matriz de números enteros.
    int f,c;
    float suma;
    tamanoMatriz(&f,&c);                                                                                        //FUNCION TAMANOMATRIZ
    int matriz[f][c];
    cargaMatrizRandom(f,c,matriz);                                                                              //FUNCION CARGAMATRIZRANDOM
    muestraMatrizInt(f,c,matriz);                                                                               //FUNCION MUESTRAMATRIZ
    suma=sumaElementos(f,c,matriz);                                                                             //FUNCION SUMAELEMENTOS
    printf("Suma: %.0f\n\n",suma);
}
void ejercicio5()
{
    //Hacer una función tipo float que calcule el promedio de una matriz de números enteros.
    int f,c;
    float promedio;
    tamanoMatriz(&f,&c);                                                                                        //FUNCION TAMANOMATRIZ
    int matriz[f][c];
    cargaMatrizRandom(f,c,matriz);                                                                              //FUNCION CARGAMATRIZRANDOM
    muestraMatrizInt(f,c,matriz);                                                                               //FUNCION MUESTRAMATRIZ
    promedio=promedioMatriz(f,c,matriz);                                                                        //FUNCION PROMEDIOMATRIZ
    printf("Promedio: %.2f\n\n",promedio);
}
void ejercicio6()
{
    //Hacer una función que determine si un elemento se encuentra dentro de una matriz de números enteros.
    //La función recibe la matriz y el dato a buscar.
    int f,c,busqueda,flag;
    tamanoMatriz(&f,&c);                                                                                        //FUNCION TAMANOMATRIZ
    int matriz[f][c];
    cargaMatrizRandom(f,c,matriz);                                                                              //FUNCION CARGAMATRIZRANDOM
    muestraMatrizInt(f,c,matriz);                                                                               //FUNCION MUESTRAMATRIZ
    printf("Ingrese el numero que desea buscar: ");
    scanf("%i",&busqueda);
    flag=busquedaElemento(f,c,matriz,busqueda);                                                                 //FUNCION BUSQUEDAELEMENTOS
    if(flag==1)
    {
        printf("\nEl %i esta en la matriz.\n\n",busqueda);
    }
    else
    {
        printf("\nEl %i no esta en la matriz.\n\n",busqueda);
    }
}
void ejercicio7()
{
    //Hacer una función que cargue un arreglo de palabras (strings).
    //La función debe retornar cuantas palabras se cargaron.
    int cantidad;
    char palabras[15][25];
    cantidad=cargaMatrizPalabras(palabras);                                                                     //FUNCION CARGAMATRIZPALABRAS
    muestraPalabras(palabras,cantidad);                                                                         //FUNCION MUESTRAPALABRAS
    printf("\nSe cargaron %i palabras.\n\n",cantidad);
}
void ejercicio8()
{
    //Hacer una función que muestre un arreglo de palabras.
    int cantidad;
    char palabras[15][25];
    cantidad=cargaMatrizPalabras(palabras);                                                                     //FUNCION CARGAMATRIZPALABRAS
    muestraPalabras(palabras,cantidad);                                                                         //FUNCION MUESTRAPALABRAS
    printf("\n");
}
void ejercicio9()
{
    //Hacer una función que determine si una palabra se encuentra dentro de un arreglo de palabras.
    //La función recibe el arreglo, la cantidad de palabras que contiene y la palabra a buscar.
    int cantidad,flag;
    char palabras[15][25],busqueda[1][25];
    cantidad=cargaMatrizPalabras(palabras);                                                                     //FUNCION CARGAMATRIZRANDOM
    muestraPalabras(palabras,cantidad);                                                                         //FUNCION MUESTRAPALABRAS
    printf("\nIngrese la palabra que desea buscar: ");
    fflush(stdin);
    gets(busqueda[0]);
    flag=busquedaPalabra(palabras,cantidad,busqueda);                                                           //FUNCION BUSQUEDAELEMENTOS
    if(flag==1)
    {
        printf("\nLa palabra \"%s\" esta en la lista de palabras.\n\n",busqueda[0]);
    }
    else
    {
        printf("\nLa palabra \"%s\" no esta en la lista de palabras.\n\n",busqueda[0]);
    }
}
void ejercicio10()
{
    //Hacer una función que determine si una palabra se encuentra dentro de un arreglo de palabras ordenado alfabéticamente.
    //La función recibe el arreglo, la cantidad de palabras que contiene y la palabra a buscar.
    int cantidad,flag;
    char palabras[15][25],busqueda[1][25];
    cantidad=cargaMatrizPalabras(palabras);                                                                     //FUNCION CARGAMATRIZPALABRAS
    muestraPalabras(palabras,cantidad);                                                                         //FUNCION MUESTRAPALABRAS
    ordenSeleccion(palabras,cantidad);
    printf("\nPalabras Ordenadas\n");
    muestraPalabras(palabras,cantidad);                                                                         //FUNCION MUESTRAPALABRAS
    printf("\nIngrese la palabra que desea buscar: ");
    fflush(stdin);
    gets(busqueda[0]);
    flag=busquedaPalabra(palabras,cantidad,busqueda);                                                           //FUNCION BUSQUEDAELEMENTOS
    if(flag==1)
    {
        printf("\nLa palabra \"%s\" esta en la lista de palabras.\n\n",busqueda[0]);
    }
    else
    {
        printf("\nLa palabra \"%s\" no esta en la lista de palabras.\n\n",busqueda[0]);
    }
}
void ejercicio11()
{
    //Hacer una función (o varias) que ordene un arreglo de palabras por orden alfabético.
    //(Por selección o inserción, el que más te guste).
    int cantidad;
    char palabras[15][25];
    cantidad=cargaMatrizPalabras(palabras);                                                                     //FUNCION CARGAMATRIZPALABRAS
    muestraPalabras(palabras,cantidad);                                                                         //FUNCION MUESTRAPALABRAS
    ordenSeleccion(palabras,cantidad);
    printf("\nPalabras Ordenadas\n");
    muestraPalabras(palabras,cantidad);                                                                         //FUNCION MUESTRAPALABRAS
    printf("\n");
}
void ejercicio12()
{
    //Hacer una función que retorne el determinante de una matriz de 2x2.
    int f=2,c=2,determinante;
    int matriz[f][c];
    cargaMatrizRandom(f,c,matriz);                                                                              //FUNCION CARGAMATRIZRANDOM
    muestraMatrizInt(f,c,matriz);                                                                               //FUNCION MUESTRAMATRIZ
    determinante=determinanteMatriz2X2(f,c,matriz);                                                             //FUNCION DETERMINANTEMATRIZ2X2
    printf("El determinante de la matriz es %i\n\n",determinante);
}
void ejercicio13()
{
    //Función que verifique si una matriz de 2x2 tiene inversa.
    int f=2,c=2,determinante;
    int matriz[f][c];
    cargaMatrizRandom(f,c,matriz);                                                                              //FUNCION CARGAMATRIZRANDOM
    muestraMatrizInt(f,c,matriz);                                                                               //FUNCION MUESTRAMATRIZ
    determinante=determinanteMatriz2X2(f,c,matriz);                                                             //FUNCION DETERMINANTEMATRIZ2X2
    if(determinante!=0)
    {
        printf("La matriz tiene inversa.\n\n");
    }
    else
    {
        printf("La matriz no tiene inversa.\n\n");
    }
}
void ejercicio14()
{
    //Hacer una función que multiplique una matriz de 2x2 por una matriz de 2x5.
    int f=2,c=2,g=2,d=5;
    int matriz1[f][c],matriz2[g][d],resultado[f][d];
    cargaMatrizRandom(f,c,matriz1);                                                                             //FUNCION CARGAMATRIZRANDOM
    printf("La matriz 2X2 es:\n");
    muestraMatrizInt(f,c,matriz1);                                                                              //FUNCION MUESTRAMATRIZ
    cargaMatrizRandom(g,d,matriz2);                                                                             //FUNCION CARGAMATRIZRANDOM
    printf("La matriz 2X5 es:\n");
    muestraMatrizInt(g,d,matriz2);                                                                              //FUNCION MUESTRAMATRIZ
    multiplicacionMatrices(f,c,matriz1,g,d,matriz2,resultado);                                                  //FUNCION MULTIPLICACIONMATRICES
    printf("La matriz resultante 2X5 es:\n");
    muestraMatrizInt(f,d,resultado);                                                                            //FUNCION MUESTRAMATRIZ
}
void ejercicio15()
{
    //Hacer una función que calcule la matriz inversa de una matriz de 2x2.
}
void ejercicio16()
{
    //Los resultados de las últimas elecciones a Intendente en el pueblo “La Matrix” han sido los siguientes:
    //Distrito Candidato A Candidato B Candidato C Candidato D
    //  1       194         48          206         45
    //  2       180         20          320         16
    //  3       221         90          140         20
    //  4       432         51          821         14
    //  5       820         61          946         18
    //Escribir un programa que haga las siguientes tareas:
    //a. Imprimir la tabla anterior con cabeceras incluidas.
    //b. Calcular e imprimir el número total de votos recibidos por cada candidato y el porcentaje total de votos emitidos. Así mismo, visualizar el candidato más votado.
    //c. Si algún candidato recibe más del 50% de los votos, el programa imprimirá un mensaje declarándose ganador.
    //d. Si algún candidato recibe menos del 50% de los votos, el programa debe imprimir el nombre de los dos candidatos más votados que serán los que pasen a la segunda ronda de las elecciones.
}
void ejercicio17()
{
    //Hacer una función que verifique si una matriz cuadrada es simétrica.
    //(A[i][j] == A[j][i])
}
void ejercicio18()
{
    //Hacer una función que genere la matriz identidad.
}
void ejercicio19()
{
    //Hacer una función que calcule la matriz traspuesta.
}
