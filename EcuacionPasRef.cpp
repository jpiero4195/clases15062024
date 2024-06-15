//Author: Jean Valencia
//fecha: 202-06-15
//Tema: Ecuación Cuadrática paso por refencia
/*Diseñe la función que resuelva el problema de la esucación cuadrática.
La función debe recibir en total 5 parámetros: los 3 primeros sin los valores a, b y c que representan los coeficiente
de la escuación.
Los 2 parámetros restantes representan los valores resultantes de la ecuación, en este caso x1, y x2 que se deben pasar como refenrecias.
La función devuelve falso, si la ecuación presenta errores;
caso contrario devuelve verdadero
x1=(-b + raiz(b*b -4*a*c)) /(2*a)
x2=(-b + sqrt(b*b -4*a*c)) /(2*a)
*/

#include <iostream>
#include <math.h>
using namespace std;

//Ejemplo de paso de parámetros por referencia
bool ecuacioncuadratica(double a,double b,double c, double &x1, double &x2){
    if(a==0){return false;}//divicion por 0
    //cálculo del descriminante
    double d= (b*b) - (4*a*c);
    if(d<0){return 0;}//raiz cuadrada negativa
    //calcular x1 y x2
    x1=(-b + sqrt(d)) /(2*a);
    x2=(-b + sqrt(d)) /(2*a);
    return true;//ecuación correcta
}

int main(){
    double x1, x2;
    bool res=ecuacioncuadratica(1,-4,4,x1,x2);
    if(res){
        cout<<"x1="<<x1<<endl;
        cout<<"x2="<<x2<<endl;
    }else{
        cout<<"Error: divición por 0 o raiz cuadrada negativa"<<endl;
    }
    return 0;
}