#include "Estudiante_Tarea.cpp"
#include<iostream>
using namespace std;

class Estudiante:Alumno{
	
	private: string carnet;
	public: 
	Estudiante(string nom, string ape, int grad, string n):Alumno(nom,ape,grad){
		carnet = n;
	}
	
	void SetCarnet(string n){carnet=n;}
	void setNombre(string nom){nombre=nom;}
	void setApellido(string ape){apellido=ape;}
	void setGrado(int grad){grado = grad;}
	
	string getCarnet(){return carnet;}
	string getNombre(){return nombre;}
	string getApellido(){return apellido;}
	int getGrado(){return grado;}
	
	void mostrar(){
		cout<<"--------------------------------------"<<endl;
		cout<<carnet<<","<<nombre<<","<<apellido<<","<<grado<<","<<endl;
	}
};








