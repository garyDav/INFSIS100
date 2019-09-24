//Ax^2+Bx+C=0
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  //Declaración de variables
  int A,B,C,x,y,d,x1,x2;
  cout<<"Ingrese A: ";
  cin>>A;
  cout<<"Ingrese B: ";
  cin>>B;
  cout<<"Ingrese C: ";
  cin>>C;
  //a)
  if(A == 0 && B == 0)
    cout<<"La ecuación no es de segundo grado, es degenerada"<<endl;
  //b)
  if(A == 0 && B != 0) {
    x = -C/B;
    cout<<"x = "<<x<<endl;
  }
  //c) i)
  d= (B*B)-4*A*C;
  if(d >= 0) {
    x1 = (-B+sqrt(pow(B,2)-4*A*C))/2*A;
    x2 = (-B-sqrt(pow(B,2)-4*A*C))/2*A;
    cout<<"x1 = "<<x1<<", x2 = "<<x2;
  }
  //c) ii)
  if(d < 0) {
    x = -B/2*A;
    y = abs( (pow(B, 2)-4*A*C)/2*A );
    cout<<"x+yi"<<endl<<x<<"+"<<y<<"i"<<endl;
    cout<<"x-yi"<<endl<<x<<"-"<<y<<"i"<<endl;
  }

  return 0;
}