#include <iostream>

using namespace std;

int main() 
{
   float Precio, Cantidad;
   char Producto;
   cout<< "Digite el nombre del producto: ";
   cin>> Producto;
   cout<< "Digite la Precio del producto: ";
   cin>> Precio;
   cout<< "Digite la Cantidad comprada: ";
   cin>> Cantidad;

   cout<< "El costo total de la compra es: "<< Precio*Cantidad<<endl;

}
