#include "Estudiante_2.cpp"
#include<iostream>
using namespace std;
main(){
	string carnet,nombre,apellido;
	int grado;
	cout<<"Ingrese el Carnet: ";
	cin>>carnet;
	cout<<"Ingrese los Nombre: ";
	cin>>nombre;
	cout<<"Ingrese los Apellido: ";
	cin>>apellido;
	cout<<"Ingrese el Grado: ";
	cin>>grado;
	
	Estudiante obj = Estudiante(nombre,apellido,grado,carnet);
	obj.mostrar();
	
	cout<<"----------------Modificar----------------"<<endl;
	cout<<"Ingrese el Carnet: ";
	cin>>carnet;
	cout<<"Ingrese el Nombre: ";
	cin>>nombre;
	cout<<"Ingrese el Apellido: ";
	cin>>apellido;
	cout<<"Ingrese el Grado: ";
	cin>>grado;
	
	obj.SetCarnet(carnet);
	obj.setNombre(nombre);
	obj.setApellido(apellido);
	obj.setGrado(grado);
	
	cout<<obj.getCarnet()<<endl;
	cout<<obj.getNombre()<<endl;
	cout<<obj.getApellido()<<endl;
	cout<<obj.getGrado()<<endl;
	
}
