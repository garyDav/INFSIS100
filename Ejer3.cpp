/*
Calves:
i)    "TIENES"
ii)   "QUE SER"
iii)  "INVITADO"
iv)   "PARA"
v)    "INGRESAR"
Si fallamos "TE EQUIVOCASTE DE FIESTA"
Si todo esta bien "BIENVENIDO A LA FIESTA"
*/
#include <iostream>
using namespace std;

int main() {
  //Declarar y asignar variables
  string c1="TIENES",c2="QUE SER",c3="INVITADO",c4="PARA",c5="INGRESAR";
  //Declarar variables
  string xc1,xc2,xc3,xc4,xc5;

  //Llenando datos
  cout<<"Ingrese clave 1: ";
  cin>>xc1;
  cout<<"Ingrese clave 2: ";
  cin>>xc2;
  cout<<"Ingrese clave 3: ";
  cin>>xc3;
  cout<<"Ingrese clave 4: ";
  cin>>xc4;
  cout<<"Ingrese clave 5: ";
  cin>>xc5;

  //Comparaciones
  if(c1 == xc1 && c2 == xc2 && c3 == xc3 && c4 == xc4 && c5 == xc5)
    cout<<"BIENVENIDO A LA FIESTA";
  else
    cout<<"TE EQUIVOCASTE DE FIESTA";

  return 0;
}
