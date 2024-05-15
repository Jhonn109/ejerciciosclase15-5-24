#include <iostream>
using namespace std;
int main(){

float angulo1 = 0.00;
float angulo2 = 0.00;
float respuesta = 0.00;
cout<<"Programa para calcular el recer angulo de un triangulo \n";
cout<<"ingrese el primer angulo \n";
cin>>angulo1;
cout<<"ingrese el segundo angulo \n";
cin>>angulo2;

respuesta = 180 - angulo1 - angulo2;

if( angulo1 < 0 || angulo2 <0)
{
  cout<<"Uno de los valores no estan permitido"; 

}
else
{
    
    respuesta = 180 - angulo1 - angulo2;
   cout<<"el valor del tercer angulo es ";

}

return 0;

}