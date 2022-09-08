#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;
int main()
{
    int numarticulo, opcion, Ano;// tuve que poner n por que no me dejaba poner la ñ
    float precio_unitario, iva, total;
    string Nombre, descripcion, caracteristicas, Clasificacion, Genero;

    cout << "\t ***Simulador Pagina de Videojuegos:D*** \n";
    cout << " 1.-Agregar Articulo\n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista Articulo\n 5.-Limpiar Pantalla\n 6.-Salir\n";
    cin >> opcion;

    switch (opcion)
    {
    case 1: //Agregar Articulo
        cout << "Ingrese el numero de articulo \n";
        cin >> numarticulo;
        cout << "ingrese el nombre del videojuego\n";
        cin.ignore();
        getline(cin, Nombre); 
        cout << "Año de lanzamiento\n";
        cin >> Ano;
        cout <<"Clasificacion\n";
        cin.ignore();
        getline(cin,Clasificacion);
        cout << "ingrese las caracteristicas del articulo\n";
        cin.ignore();
        getline(cin, caracteristicas);
        cout<< "ingrese la descripcion del articulo\n";
        cin.ignore();
        getline(cin, descripcion);
        cout<< "ingrese el Genero\n";
        cin.ignore();
        getline(cin, Genero);
        cout << "ingrese el precio unitario del articulo\n";
        cin >> precio_unitario;
        
        
        iva = precio_unitario * 0.16;
        total = precio_unitario + iva; //Cout<<“iva”<<iva;
        
        cout<< iva << "\n";
        cout<< total << "\n";
        return main();
        break;
    
       case 2: //Modificar Articulo
        break;

       case 3://Eliminar Articulo
        break;

       case 4: //Lista de Articulos
        break;
       
       case 5: 
        system("cls"); 
        return main();
        break;

      case 6: 
        cout << "Gracias por utilizar el programa \n";
        break;

    default:
        cout << "ingrese una opcion correcta \n";
        return main();

    }

}
