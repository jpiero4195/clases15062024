//Author: Jean Valencia
//fecha: 202-06-15
//Tema: Sobrecarga de funciones

#include <iostream>
using namespace std;

//divición de número entero
int divicion(int n1,int n2){
    return n1/n2;
}

//divición de número real
double divicion(double n1,double n2){
    return n1/n2;
}

//divición de número el primero entero y segundo real
double divicion(int n1,double n2){
    return n1/n2;
}

//divición de número el primero real y segundo entero
double divicion(double n1,int n2){
    return n1/n2;
}

int main(){
    cout<<endl<<"100/30 es: "<<divicion(100,30);
    cout<<endl<<"100/30 es: "<<divicion(100.0,30.0);
    cout<<endl<<"100/30 es: "<<divicion(100.0,30);
    cout<<endl<<"100/30 es: "<<divicion(100,30.0);
    return 0;
}