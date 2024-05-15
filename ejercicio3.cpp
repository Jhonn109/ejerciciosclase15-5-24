//Desarrolle un programa que considere las siguientes reglas:
//Un ángulo se considera agudo si es menor de 90°, obtuso si es mayo de 90° y
//recto si es igual a 90°.
#include <iostream>
using namespace std;
int main(){
    float Angulo = 0;
    cout<<"ingrese el angulo: ";
    cin>>Angulo;

    if( Angulo<90){
        cout<<"Su angulo es agudo";
        cin>>Angulo;
    }
  else if ( Angulo>90){
     cout<< "Su angulo es obtuso";

    }
    else
    {
      cout<<"Su angulo es un angulo recto";
}
    
      
    
    
    return 0;
    
    }