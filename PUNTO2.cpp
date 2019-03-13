#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;



int main(){
int i,n,suma;


cout<<"ingrese la cantidad de datos a sumar"<<endl;
cin>>i;

int *numero=new int[n];
for(n=0;n<i;n++){
cout<<"ingrese los numeros a sumar"<<endl;
cin>>numero[n];
}
for(n=0;n<i;n++){
suma=suma+numero[n];
}
cout<<"la suma de los numeros de los numeros es: "<<suma<<endl;
cout<<"la division de los numeros divido entre 3 es: "<<suma/3;
return 0;
}


