#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;



int main(){

int i,n,usua=0,t,j=0;
float prom=0;
cout<<"Ingrese la cantidad de usuarios"<<endl;
cin>>i;

int *usuario=new int[n];
for(n=0;n<i;n++){
	cout<<"ingrese el numero del servicio :"<<endl<<n+1<<":";
	cin>>usua;
	}
	
	if(usua==1){
		usuario[n]=50;
		
	}else
	if(usua==2){
		usuario[n]=30;
			
	}else
	if(usua==3){
		usuario[n]=40;
		
	}
	for(n=0;n<i;n++){
		prom=usuario[n]+prom;
	}
	
	prom=prom/i;
	cout<<"el promedio de tiempo"<<prom;
	
		//delete[]usua;
	
return 0;
}
