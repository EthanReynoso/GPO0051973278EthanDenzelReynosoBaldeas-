#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;
struct {
    int numarticulo, opcion,fechadelanzamiento, orden, numoc, idcontrato;
    string nombredeljuego, caracteristicas, descripcion, clasificacion, genero, proveedor;
    float PrecioUnitario, iva, Total, subtotal;

}Orden[3];
int main()
{
    int numarticulo, opcion, fechadelanzamiento, orden, numoc, idcontrato;
    float precio_unitario, iva, total, subtotal;
    string nombredeljuego, descripcion, caracteristicas, clasificacion, genero, proveedor;
    while (true) {
        cout << "\t ***Simulador Pagina de Videojuegos*** \n";
        cout << " 1.-Agregar Articulo\n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista Articulo\n 5.-Limpiar Pantalla\n 6.-Salir\n";
        cin >> opcion;

        switch (opcion)
        {
        case 1://Agregar articulo
            for (int i = 0; i < 3; i++)
            {
                Orden[i].idcontrato = 20220000 + i;
                printf("Numero del articulo: %d \n", i);
                int salida = 1;

                do
                {
                    printf("ingrese el id del contrato\n");
                    scanf_s("%d", &Orden[i].numoc);
                } while (Orden[i].numoc == Orden[i - 1].numoc || Orden[i].numoc == Orden[i - 2].numoc);


                //
                printf("Ingrese El Nombre Del VideoJuego\n");
                cin.ignore();
                getline(cin, Orden[i].proveedor);
                
                printf("ingrese el precio del producto\n");
                scanf_s("%f", &Orden[i].subtotal);
                Orden[i].iva = Orden[i].subtotal * .16;
                Orden[i].Total = Orden[i].subtotal + Orden[i].iva;

                //
                printf("Ingrese la fecha de lanzamiento\n");
                cin >> Orden[i].fechadelanzamiento;
                
                //
                printf("Ingrese la clasificacion\n");
                cin.ignore();
                getline(cin, Orden[i].clasificacion);

                //
                printf("Ingrese las Caracteristicas\n");
                cin.ignore();
                getline(cin, Orden[i].caracteristicas);

                //
                printf("Ingrese la Descripcion\n");
                cin.ignore();
                getline(cin, Orden[i].descripcion);

                //
                printf("Ingrese el genero\n");
                cin.ignore();
                getline(cin, Orden[i].genero);





                

                
            }
            break;
        
        case 3://Eliminiar articulo













        case 4://lista del articulo
            for (int i = 0; i < 3; i++) {
                
                printf("Nombre del videojuego: %s \n", Orden[i].proveedor.c_str());
                
                printf("Precio del videojuego: %d \n", Orden[i].subtotal);

                printf("Fecha de lanzamiento: %d \n", Orden[i].fechadelanzamiento);

                printf("Clasificacion: %s \n", Orden[i].clasificacion.c_str());

                printf("Caracteristicas: %s \n", Orden[i].caracteristicas.c_str());

                printf("Descripcion: %s \n", Orden[i].descripcion.c_str());

                printf("Genero: %s \n", Orden[i].genero.c_str());
                
                printf("El subtotal: %d  \n", Orden[i].subtotal);
               
                printf("numoc: %d \n", Orden[i].numoc);


            }
            break;

        case 5://limpiar pantalla
            system("cls");
            return main();
            break;

        case 6://salir del menu
            cout << "Gracias por utilizar el programa \n";
            break;

        default:
            cout << "ingrese una opcion correcta \n";
            return main();

        }
    }


}