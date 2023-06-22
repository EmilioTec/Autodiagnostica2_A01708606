#include <fstream>
#include "Complejo.hpp"
using namespace std;


void pruebaOperaciones(){
    /*Esta función crea dos complejos y prueba las operaciones
    de imprimir, sumar, multiplicar, multiplicar escalar, agregar 
    y obtener conjugado*/

    //Crea dos complejos c1 y c2

    //Imprime c1 y c2

    //Prueba el agregar, voy a agregar a c1 el complejo c2
    cout<<"Agregar: ";
 
    //Imprimo c1 para ver el cambio
 
    //Pruebo la suma de c1 con c2, imprimo el resultado

    cout<< "Suma: ";
    //Imprime el resultado de suma

    //Pruebo la multiplicación de c1 con c2, imprimo el resultado
   
    cout<< "Mutiplicacion: ";
    //Imprime el resultado de multiplicación

    //Pruebo la multiplicación escalar c1 con 3.5, imprimo el resultado
    
    cout<<"Multiplicacion escalar: ";
    //Imprime el resultado de multiplicación escalar

    //saca el conjugado de c1 y guarda en otra variable

    //Imprime el conjugado de c1
    cout<<"Conjugado de c1: ";

}

void cargaDatosSuma(int num){
    /* Esta función recibe datos para crear num objetos Complejo, 
    después de recibirlos los suma todos e imprime a pantalla el resultado*/
    //Creamos arreglo de num Complejos
   
    //Cargar datos de teclado para crear los n complejos, usa un for 
    double re, im;
    for (int i=0; i<num; i++){
        //Recibir los datos por teclado, dos por renglón

        //Crear el complejo y guardarlo en el arreglo

    }
    
    Complejo resultado;
    //Sumar todos los complejos del arreglo con un ciclo y guardarlo en la variable resultado
    
    //imprimo el resultado fuera del ciclo
  
}

void cargaArchivoMultiEscalar(double num){
    /*Esta función carga los datos de un archivo Datos.txt y crea números complejos y los despliega
    Después de crearlos los multiplica todos por num y los despliega a pantalla de nuevo */
    //Declaro el arreglo de máximo 20 Complejos

    //Crea el objeto ifstream 

    //Vincula el ifstream para abrir el archivo Datos.txt
    
    int numDatos=0;
    double re, im;
    //Lee los datos del archivo y crea los complejos, usa un while


   //Recorre el arreglo y multiplica cada complejo por num


    
    cout<<"Ya multiplicados por "<<num << endl;
    //Recorre con un ciclo y muestra los complejos del arreglo
}

int main() {
  int opc;
  while(opc!=4){
    cout<<"1-Prueba operaciones\n, 2-Recibe n y suma\n, 3-Carga archivo y multiplica\n, 4-Salir\n"<<endl;
    cin>>opc;
    switch(opc){
        case 1:
        {
            //llama a la función que prueba las operaciones
            break;
        }
        case 2:
        {
            //Carga datos de teclado y suma
            int cuantos;
            cin>>cuantos;
            //Llama a la función que carga n los datos y suma
            break;
        }
        case 3:
        {
            //Carga un archivo datos y agrega un complejo a todos los datos
            //Recibe por cuánto quieres multiplicar los datos del arreglo
            double porCuanto;
            cin>>porCuanto;
            //llama a la función que carga el archivo y multiplica
            break;
        }
        case 4:
        {
            cout<< "Saliendo del programa..."<<endl;
            break;
        }
        default:
        {
            cout<<"Opcion Incorrecta"<<endl;
        }
    }
 }
  return 0;
}