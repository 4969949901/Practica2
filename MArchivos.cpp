
#include <iostream>
#include <fstream>


using namespace std;
string texto;//variable de clase funcion en toda la clase

void abrirArchivo(string directorio){                //directorio-parametro
ifstream archivo ;
string texto; //alcance de variable en una sola funcion
archivo.open(directorio);
if(archivo.is_open()){
    while(getline(archivo,texto)){
        cout<<"Archivo 1 leido==>"<<texto<<endl;
    }
    archivo.close();
    }

    }

void leerArchivo(string directorio){
    ofstream archivo;
    archivo.open(directorio);
    if(archivo.is_open()){
        archivo<<texto<<"Texto para agregar";
        archivo.close();
        cout<<"Archivo 2 modificado";
    }else{
        cout<<"Error al leer el archivo";
    }

}
