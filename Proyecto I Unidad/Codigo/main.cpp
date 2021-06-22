#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    
    int opcion=0;
    system("color C");
    cout<<"\n\n\t***************"<<endl;
    cout<<"\tMENU DE JUEGOS"<<endl;//Nombre del menu
    cout<<"\t***************"<<endl;
    cout<<endl;
    cout<<"1-> StarShip"<<endl;//opcion numero1
    cout<<"2-> Snake "<<endl;//opcion numero2
    cout<<"Seleccione un juego: ";//se pide al usuario que seleccione una opcion ingresando un numero entero
    cin>>opcion;
    system("cls");
    switch (opcion)
    {
    case 1:
    { 
        system("color 3");
        starShip();
        break;
    }
    case 2:
    { 
        system ("color 6");
        snake();
        break;
    }
    }
    return 0;
}