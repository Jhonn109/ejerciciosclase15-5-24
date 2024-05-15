//Realice un programa que ingresando las notas de 6 evaluaciones. Que calcule
//el promedio final de la materia y le indique si paso o no la materia. Utilizando
//los siguientes porcentajes para evaluar.
#include <iostream>
#include <string>
using namespace std;
int main(){
   string nombre;
   float Nota_Corto1 =0.00, Nota_Corto2=0.00, Nota_1_Parcial=0.00, Nota_2_parcial=0.00, Nota_laboratorio=0.00, Nota_proyecto=0.00, Promedio=0.00;
   cout<<"Ingrese su nombre: ";
   cin>> nombre;
   cout<<"Ingrese su nota de examen corto 1: ";
   cin>>Nota_Corto1;
 cout<<"Ingrese su nota de examen corto 2: ";
   cin>>Nota_Corto2;
 cout<<"Ingrese su nota del primer pacial: ";
   cin>>Nota_1_Parcial;
 cout<<"Ingrese su nota del segundo parcial: ";
   cin>>Nota_2_parcial;
 cout<<"Ingrese su nota de laboratorio: ";
   cin>>Nota_laboratorio;
 cout<<"Ingrese su nota de proyecto: ";
   cin>>Nota_proyecto;
   Promedio = (Nota_Corto1 * 0.1) + (Nota_Corto2*0.1) + (Nota_1_Parcial*0.15) +  (Nota_2_parcial*0.20) + (Nota_laboratorio*0.20) + (Nota_proyecto*0.25);
 
    if( Promedio<6.00){
        cout<<"Usted reprobo la materia";
        cin>>Promedio;
    }

  else{
    cout<<Promedio<<" " <<nombre<<" "<<"Usted Aprobo la materia";
  }
 
 
    return 0;
} 