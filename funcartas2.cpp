//Author: Jean Valencia
//fecha: 202-06-15
//Tema: Diseñe la función que imprima las 52 cartas de un mazo de naipes
/*
1A   brillo     corazón    trébol     negro
2    brillo     corazón    trébol     negro
3    brillo     corazón    trébol     negro
4    brillo     corazón    trébol     negro
5    brillo     corazón    trébol     negro
6    brillo     corazón    trébol     negro
7    brillo     corazón    trébol     negro
8    brillo     corazón    trébol     negro
9    brillo     corazón    trébol     negro
10   brillo     corazón    trébol     negro
11-J brillo     corazón    trébol     negro
12-Q brillo     corazón    trébol     negro
13-K brillo     corazón    trébol     negro
*/

#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

void imprimircarta(string ncarta1="",string nsimbolo1="",string ncarta2="",string nsimbolo2="",string ncarta3="",string nsimbolo3="",string ncarta4="",string nsimbolo4=""){
    cout<<"╔════════════╗ "<<" ╔════════════╗ "<<" ╔════════════╗ "<<" ╔════════════╗"<<endl;
    cout<<"║        "<<nsimbolo1<<ncarta1<<" ║ "<<" ║        "<<nsimbolo2<<ncarta2<<" ║ "<<" ║        "<<nsimbolo3<<ncarta3<<" ║ "<<" ║        "<<nsimbolo4<<ncarta4<<" ║"<<endl;
    cout<<"║            ║ "<<" ║            ║ "<<" ║            ║ "<<" ║            ║"<<endl;
    cout<<"║            ║ "<<" ║            ║ "<<" ║            ║ "<<" ║            ║"<<endl;
    cout<<"║     "<<ncarta1<<"     ║ "<<" ║     "<<ncarta2<<"     ║ "<<" ║     "<<ncarta3<<"     ║ "<<" ║     "<<ncarta4<<"     ║"<<endl;
    cout<<"║            ║ "<<" ║            ║ "<<" ║            ║ "<<" ║            ║"<<endl;
    cout<<"║            ║ "<<" ║            ║ "<<" ║            ║ "<<" ║            ║"<<endl;
    cout<<"║ "<<nsimbolo1<<ncarta1<<"        ║ "<<" ║ "<<nsimbolo2<<ncarta2<<"        ║ "<<" ║ "<<nsimbolo3<<ncarta3<<"        ║ "<<" ║ "<<nsimbolo4<<ncarta4<<"        ║"<<endl;
    cout<<"╚════════════╝ "<<" ╚════════════╝ "<<" ╚════════════╝ "<<" ╚════════════╝"<<endl;
}

string cartanum(){
    string ncarta="";
    int carta = 1 + rand() % (13);
    switch(carta){
        case 1:ncarta="A ";break;
        case 2:ncarta="2 ";break;
        case 3:ncarta="3 ";break;
        case 4:ncarta="4 ";break;
        case 5:ncarta="5 ";break;
        case 6:ncarta="6 ";break;
        case 7:ncarta="7 ";break;
        case 8:ncarta="8 ";break;
        case 9:ncarta="9 ";break;
        case 10:ncarta="10";break;
        case 11:ncarta="J ";break;
        case 12:ncarta="Q ";break;
        case 13:ncarta="K ";break;
    }
    return ncarta;
}
string cartasimb(){
    int color = 1 + rand() % (4);
    string nsimbolo="";
    switch (color){
        case 1:nsimbolo="♦";break;
        case 2:nsimbolo="♥";break;//03
        case 3:nsimbolo="♣";break;//05
        case 4:nsimbolo="♠";break;//06
    }
    return nsimbolo;
}

int main(){
    srand(time(NULL));
    int tiro=1;
    do{
        cout<<"\nPara finalizar presiona 0" << endl;
        cout<<"\nPulsar 1 parar que salga una carta aleatoria:" << endl;
        cin >> tiro;
        imprimircarta(cartanum(),cartasimb(),cartanum(),cartasimb(),cartanum(),cartasimb(),cartanum(),cartasimb());
    }while(tiro==1);
    return 0;
}