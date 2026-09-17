#include <math.h>
#include <iostream>
 using namespace std; 


int main()
{
   double segundos;
   double tiempo_minutos;
   
   cout << "Ingresa la cantidad de segundos que deseas convertir: ";
   cin >> segundos;
   
   tiempo_minutos = (segundos / 60);
   
   cout << "El tiempo en minutos es de: " << tiempo_minutos;
   
}
