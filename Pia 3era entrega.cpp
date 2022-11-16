#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

int* fechadelanzamiento, * orden, * numoc, num;
string* nombredeljuego, * caracteristicas, * descripcion, * clasificacion, * genero;
float* PrecioUnitario, * iva, * Total;

void agregar();
void modificar();
void eliminar();
void lista();
void archivo();

int main() {

    int opcion;
    printf("\t ***Simulador Pagina de Videojuegos*** \n");
    printf(" 1.-Agregar Articulo\n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista Articulo\n 5.-Limpiar Pantalla\n 6.-Salir\n");
    scanf_s("%d", &opcion);

    switch (opcion)
    {
    case 1://Agregar articulo
        agregar();
        return main();
        break;

    case 2://Modificar articulo
        modificar();
        return main();
        break;

    case 3://Eliminiar articulo
        eliminar();
        return main();
        break;

    case 4://lista del articulo
        lista();
        system("pause");
        return main();
        break;

    case 5://limpiar pantalla
        system("cls");
        return main();
        break;

    case 6://salir del menu
        cout << "Gracias por utilizar el programa \n";
        archivo();
        exit(1);
        break;


    default:
        cout << "ingrese una opcion correcta \n";
        return main();
        break;

    }
}

void agregar() {

    printf("Ingresa cuantos registros desea dar de alta: \n");
    scanf_s("%d", &num);

    numoc = new int[num];
    nombredeljuego = new string[num];
    fechadelanzamiento = new int[num];
    clasificacion = new string[num];
    caracteristicas = new string[num];
    descripcion = new string[num];
    genero = new string[num];
    PrecioUnitario = new float[num];
    iva = new float[num];
    Total = new float[num];

    for (int i = 0; i < num; i++)
    {
        numoc[i] = 20220000 + i;
        printf("Numero de articulo: %d", numoc[i]);

        printf("Ingrese El Nombre Del VideoJuego\n");
        cin.ignore();
        getline(cin, nombredeljuego[i]);

        printf("ingrese el precio del producto\n");
        scanf_s("%f", &PrecioUnitario[i]);
        iva[i] = PrecioUnitario[i] * 0.16;
        Total[i] = PrecioUnitario[i] + iva[i];

        printf("Ingrese la fecha de lanzamiento\n");
        scanf_s("%d", &fechadelanzamiento[i]);

        printf("Ingrese la clasificacion\n");
        cin.ignore();
        getline(cin, clasificacion[i]);

        printf("Ingrese las Caracteristicas\n");
        getline(cin, caracteristicas[i]);

        printf("Ingrese la Descripcion\n");
        getline(cin, descripcion[i]);

        printf("Ingrese el genero\n");
        getline(cin, genero[i]);

    }
}

void modificar() {
    int comp1, opcion;
    do {
        printf("Ingresa el n%cmero de art%cculo a modificar: \n", 163, 161);
        scanf_s("%d", &comp1);
    } while (comp1 <= 0);

    printf("\t Selecciona el tipo de modificaci%cn va a hacer: \n", 162);
    printf(" 1.- Total \n 2.- Nombre \n 3.- A%co de lanzamiento \n 4.- Descripci%cn \n 5.- Clasificaci%cn \n 6.- G%cnero \n 7.- Caracter%csticas \n 8.- Precio Unitario \n", 164, 162, 162, 130, 161);
    scanf_s("%d", &opcion);

    switch (opcion) {
    case 1://Completo
        for (int i = 0; i < num; i++) {
            if (comp1 == numoc[i]) {
                numoc[i] = 201021 + i;
                printf("N%cmero de art%cculo: %d \n", 163, 161, numoc[i]);
                printf("Ingresa el nombre del videojuego: \n");
                cin.ignore();
                getline(cin, nombredeljuego[i]);
                printf("Ingresa el a%co de lanzamiento: \n", 164);
                scanf_s("%d", &fechadelanzamiento[i]);
                printf("Ingresa la descripci%cn del videojuego: \n", 162);
                cin.ignore();
                getline(cin, descripcion[i]);
                printf("Ingresa la clasificaci%cn del videojuego: \n", 162);
                getline(cin, clasificacion[i]);
                printf("Ingresa el g%cnero del videojuego: \n", 130);
                getline(cin, genero[i]);
                printf("Ingresa las caracter%csticas del videojuego: \n", 161);
                getline(cin, caracteristicas[i]);
                printf("Ingrese el precio unitario: \n");
                scanf_s("%f", &PrecioUnitario[i]);
                iva[i] = PrecioUnitario[i] * .16;
                Total[i] = PrecioUnitario[i] * 1.16;
            }
        }
        break;

    case 2://Editar nombre
        for (int i = 0; i < num; i++) {
            if (comp1 == numoc[i]) {
                numoc[i] = 201021 + i;
                printf("N%cmero de art%cculo: %d \n", 163, 161, numoc[i]);
                printf("Ingresa el nombre del videojuego: \n");
                cin.ignore();
                getline(cin, nombredeljuego[i]);
            }
        }
        break;

    case 3://Editar año
        for (int i = 0; i < num; i++) {
            if (comp1 == numoc[i]) {
                numoc[i] = 201021 + i;
                printf("N%cmero de art%cculo: %d \n", 163, 161, numoc[i]);
                printf("Ingresa el a%co de lanzamiento: \n", 164);
                scanf_s("%d", &fechadelanzamiento[i]);
            }
        }
        break;

    case 4://Editar descripcion
        for (int i = 0; i < num; i++) {
            if (comp1 == numoc[i]) {
                numoc[i] = 201021 + i;
                printf("N%cmero de art%cculo: %d \n", 163, 161, numoc[i]);
                printf("Ingresa la descripci%cn del videojuego: \n", 162);
                cin.ignore();
                getline(cin, descripcion[i]);
            }
        }
        break;

    case 5://Editar clasificacion
        for (int i = 0; i < num; i++) {
            if (comp1 == numoc[i]) {
                numoc[i] = 201021 + i;
                printf("N%cmero de art%cculo: %d \n", 163, 161, numoc[i]);
                printf("Ingresa la clasificaci%cn del videojuego: \n", 162);
                cin.ignore();
                getline(cin, clasificacion[i]);
            }
        }
        break;

    case 6://Editar género
        for (int i = 0; i < num; i++) {
            if (comp1 == numoc[i]) {
                numoc[i] = 201021 + i;
                printf("N%cmero de art%cculo: %d \n", 163, 161, numoc[i]);
                printf("Ingresa el g%cnero del videojuego: \n", 130);
                cin.ignore();
                getline(cin, genero[i]);
            }
        }
        break;

    case 7://Editar caracteristicas
        for (int i = 0; i < num; i++) {
            if (comp1 == numoc[i]) {
                numoc[i] = 201021 + i;
                printf("N%cmero de art%cculo: %d \n", 163, 161, numoc[i]);
                printf("Ingresa las caracter%csticas del videojuego: \n", 161);
                cin.ignore();
                getline(cin, caracteristicas[i]);
            }
        }
        break;

    case 8://Editar precio
        for (int i = 0; i < num; i++) {
            if (comp1 == numoc[i]) {
                numoc[i] = 201021 + i;
                printf("N%cmero de art%cculo: %d \n", 163, 161, numoc[i]);
                printf("Ingrese el precio unitario: \n");
                scanf_s("%f", &PrecioUnitario[i]);
                iva[i] = PrecioUnitario[i] * .16;
                Total[i] = PrecioUnitario[i] * 1.16;
            }
        }
        break;

    default:
        printf("\t Opci%cn inv%clida, vuelva a intentarlo... \n", 162, 160);
        printf("\n");
        system("pause");
        return modificar();
        break;

    }

}

void eliminar() {
    int comp;
    printf("Ingresa el numero de compra: \n");
    scanf_s("%d", &comp);

    for (int i = 0; i < num; i++) {
        if (comp == numoc[i]) {
            numoc[i] = 0;
        }
    }

}

void lista() {
    int OPCION;
    string Opcion;

    printf("1.genero: \n 2. clasificacion \n");
    scanf_s("%d", &OPCION);
    switch (OPCION) {
    case 1:
        printf("ingrese el genero \n");
        cin.ignore();
        getline(cin, Opcion);
        for (int i = 0; i < num; i++) {
            if (genero[i] == Opcion) {
                if (numoc[i] != 0) {
                    printf("numoc: %d \n", numoc[i]);

                    printf("Nombre del videojuego: %s \n", nombredeljuego[i].c_str());

                    printf("Fecha de lanzamiento: %d \n", fechadelanzamiento[i]);

                    printf("Clasificacion: %s \n", clasificacion[i].c_str());

                    printf("Caracteristicas: %s \n", caracteristicas[i].c_str());

                    printf("Descripcion: %s \n", descripcion[i].c_str());

                    printf("Genero: %s \n", genero[i].c_str());

                    printf("Precio del videojuego: %f \n", PrecioUnitario[i]);

                    printf("Total: %f \n", Total[i]);
                }
            }
        }
    case 2:
        printf("ingrese el clasificacion \n");
        cin.ignore();
        getline(cin, Opcion);
        for (int i = 0; i < num; i++) {
            if (clasificacion[i] == Opcion) {
                if (numoc[i] != 0) {
                    printf("numoc: %d \n", numoc[i]);

                    printf("Nombre del videojuego: %s \n", nombredeljuego[i].c_str());

                    printf("Fecha de lanzamiento: %d \n", fechadelanzamiento[i]);

                    printf("Clasificacion: %s \n", clasificacion[i].c_str());

                    printf("Caracteristicas: %s \n", caracteristicas[i].c_str());

                    printf("Descripcion: %s \n", descripcion[i].c_str());

                    printf("Genero: %s \n", genero[i].c_str());

                    printf("Precio del videojuego: %f \n", PrecioUnitario[i]);

                    printf("Total: %f \n", Total[i]);
                }
            }
        }



    }


    for (int i = 0; i < num; i++) {
        printf("numoc: %d \n", numoc[i]);

        printf("Nombre del videojuego: %s \n", nombredeljuego[i].c_str());

        printf("Fecha de lanzamiento: %d \n", fechadelanzamiento[i]);

        printf("Clasificacion: %s \n", clasificacion[i].c_str());

        printf("Caracteristicas: %s \n", caracteristicas[i].c_str());

        printf("Descripcion: %s \n", descripcion[i].c_str());

        printf("Genero: %s \n", genero[i].c_str());

        printf("Precio del videojuego: %f \n", PrecioUnitario[i]);

        printf("Total: %f \n", Total[i]);
    }
}

void archivo() {
    ofstream archiv;
    string namearch;
    namearch = "Simulador Pagina de Videojuegos";

    archiv.open(namearch.c_str(), ios::out);
    if (archiv.fail()) {
        printf("\t ¡No Se Encuentra el producto! \n El archivo no existe \n");
        system("pause");
        exit(1);
    }

    for (int i = 0; i < num; i++) {
        if (numoc[i] != 0) {
            archiv << "\t \t Lista De Videojuegos \n";
            archiv << "Numero De Orden de compra: ";
            archiv << numoc[i] << "\n";
            archiv << "Nombre del videojuego: ";
            archiv << nombredeljuego[i].c_str() << "\n";
            archiv << "Fecha De Lanzamiento: ";
            archiv << fechadelanzamiento[i] << "\n";
            archiv << "Descripcion: ";
            archiv << descripcion[i].c_str() << "\n";
            archiv << "Clasificacion: ";
            archiv << clasificacion[i].c_str() << "\n";
            archiv << "Caracteristicas: ";
            archiv << caracteristicas[i].c_str() << "\n";
            archiv << "Genero: ";
            archiv << genero[i].c_str() << "\n";
            archiv << "Precio: $";
            archiv << PrecioUnitario[i] << "\n";
            archiv << "IVA: $";
            archiv << iva[i] << "\n";
            archiv << "TOTAL: $";
            archiv << Total[i] << "\n \n";
        }
    }

    archiv.close();

}