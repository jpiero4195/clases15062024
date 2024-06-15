//Author: Jean Valencia
//fecha: 202-06-15
//Tema: Pasos de parametros pro valor

#include <iostream>
using namespace std;

//Ejemplo de paso de parámetros por valor
int PasoxValor(int num){

    num=num*10;
    cout<<endl<<"El valor de la variable dentro de la función: "<<num;
    return 1;
}

int main(){
    int num=2;
    cout<<endl<<"Valor de la variable antes de llamar a la función: "<<num;
    PasoxValor(num);
    cout<<endl<<"Valor de la variable después de llamar a la función: "<<num;
    return 0;
}