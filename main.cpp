#include <iostream>
#include "archivo.h"


using namespace std;


//"C:\Users\helac\OneDrive\Documentos\Archivo2.txt"
int main() {

    abrirArchivo("C:/Users/helac/OneDrive/Documentos/Archivo2.txt" ); // parametro para poder mandar a llamar cualquier archivo de texto guardado en la pc
    cout<<endl;
    leerArchivo("C:/Users/helac/OneDrive/Escritorio/Archivo1.txt");
    cout<<endl;
    abrirArchivo("C:/Users/helac/OneDrive/Escritorio/Archivo1.txt");
    cout << "Lectura de datos" << endl;

    return 0;
}
