#include<iostream>
using namespace std;
class Alumno{
	
	protected : string nombre, apellido;
	int grado;
	protected : Alumno(string nom,string ape,int grad){
		nombre = nom;
		apellido = ape;
		grado = grad;
	}
	
	void agregar();
	void mostrar();
};
