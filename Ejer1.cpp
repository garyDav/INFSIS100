//Triangulo: Equilátero, Isósceles, Escaleno
#include <iostream>
using namespace std;

int main() {
  //Declarando variables
  int l1,l2,l3;
  //Llenar datos
  cout<<"Ingrese lado 1: ";
  cin>>l1;
  cout<<"Ingrese lado 2: ";
  cin>>l2;
  cout<<"Ingrese lado 3: ";
  cin>>l3;

  //Mensaje por consola
  cout<<"Según los lados del triángulo, "<<l1<<" "<<l2<<" "<<l3<<" es: ";
  //Equilátero 3 lados iguales
  if(l1 == l2 && l2 == l3)
    cout<<"Equilátero"<<endl;
  //Isósceles 2 lados iguales
  if(l1 == l2 && l1 != l3)
    cout<<"Isósceles"<<endl;
  //Escaleno lados diferentes
  if(l1 != l2 && l1 != l3)
    cout<<"Escaleno"<<endl;
  return 0;
}
