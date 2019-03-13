#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;



int main(){

int i,n;

cout<<"cuantas personas hay en salor de clase"<<endl;
cin>>i;

int *stud=new int[n];

for(n=0;n<i;n++){
cout<<"ingrese nota del alumno"<<endl<<n+1<<":";
cin>>stud[n];
}
cout<<"las notas son"<<endl;
for(n=0;n<i;n++){
cout<<" "<<stud[n];
}
delete[]stud;
return 0;
}



