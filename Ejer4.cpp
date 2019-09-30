/*
Inicio	            H. norte	    H. sur
21      Marzo	      Primavera	    Otoño
22      Junio	      Verano	      Invierno
24      Septiembre	Otoño	        Primavera
21      Diciembre	  Invierno	    Verano

Otoño 3 4 5 6
Invierno 6 7 8 9
Primavera 9 10 11 12
Verano 12 1 2 3
Obtener la estación del año a partir de los meses
*/
#include <iostream>
using namespace std;

int main() {
  int mes, fecha;
  string estacion;
  cout<<"Introduzca el mes (en forma de número): ";
  cin>>mes;
  switch(mes) {
    case 3:
      // estacion = "Verano";
      // estacion += " Otoño";
      cout<<"Introduzca fecha (en forma de número): ";
      cin>>fecha;
      if(fecha > 0 && fecha < 21)
        estacion = "Verano";
      else
        if(fecha > 20 && fecha < 32)
          estacion = "Otoño";
        else
          cout<<"esta fecha no existe";
      break;
    case 4:
    case 5:
      estacion = "Otoño";
      break;
    case 6:
      // estacion = "Otoño";
      // estacion += " Invierno";
      cout<<"Introduzca fecha (en forma de número): ";
      cin>>fecha;
      if(fecha > 0 && fecha < 22)
        estacion = "Otoño";
      else
        if(fecha > 21 && fecha < 32)
          estacion = "Invierno";
        else
          cout<<"esta fecha no existe";
      break;
    case 7:
    case 8:
      estacion = "Invierno";
      break;
    case 9:
      // estacion = "Invierno";
      // estacion += " Primavera";
      cout<<"Introduzca fecha (en forma de número): ";
      cin>>fecha;
      if(fecha > 0 && fecha < 24)
        estacion = "Invierno";
      else
        if(fecha > 23 && fecha < 32)
          estacion = "Primavera";
        else
          cout<<"esta fecha no existe";
      break;
    case 10:
    case 11:
      estacion = "Primavera";
      break;
    case 12:
      // estacion = "Primavera";
      // estacion += " Verano";
      cout<<"Introduzca fecha (en forma de número): ";
      cin>>fecha;
      if(fecha > 0 && fecha < 21)
        estacion = "Primavera";
      else
        if(fecha > 20 && fecha < 32)
          estacion = "Verano";
        else
          cout<<"esta fecha no existe";
      break;
    case 1:
    case 2:
      estacion = "Verano";
      break;
    default:
      estacion = "Este mes no existe :(";
  }
  cout<<estacion<<endl;
  return 0;
}
