#include <fstream>
#include "Complejo.hpp"
#include <iostream>
using namespace std;


void pruebaOperaciones(){
    /*Esta función crea dos complejos y prueba las operaciones
    de imprimir, sumar, multiplicar, multiplicar escalar, agregar 
    y obtener conjugado*/

    //Crea dos complejos c1 y c2
    Complejo c1(3.0, 2.0);
    Complejo c2(1.5, -0.5);

    //Imprime c1 y c2
    cout << "Complejo 1: ";
    c1.imprime();
    cout << endl;
    cout << "Complejo 2: ";
    c2.imprime();
    cout << endl;

    //Prueba el agregar, voy a agregar a c1 el complejo c2
    cout << "Agregar: ";
    c1.agregar(c2);

    //Imprimo c1 para ver el cambio
    cout << "Complejo 1 después de agregar: ";
    c1.imprime();
    cout << endl;

    //Pruebo la suma de c1 con c2, imprimo el resultado
    Complejo suma = c1.suma(c2);
    cout << "Suma: ";
    suma.imprime();
    cout << endl;

    //Pruebo la multiplicación de c1 con c2, imprimo el resultado
    Complejo multiplicacion = c1.multiplicacion(c2);
    cout << "Multiplicación: ";
    multiplicacion.imprime();
    cout << endl;

    //Pruebo la multiplicación escalar c1 con 3.5, imprimo el resultado
    Complejo multiplicacionEscalar = c1.multiEscalar(3.5);
    cout << "Multiplicación escalar: ";
    multiplicacionEscalar.imprime();
    cout << endl;

    //Saca el conjugado de c1 y guarda en otra variable
    Complejo conjugadoC1 = c1.conjugado();

    //Imprime el conjugado de c1
    cout << "Conjugado de c1: ";
    conjugadoC1.imprime();
    cout << endl;
}

void cargaDatosSuma(int num){
    /* Esta función recibe datos para crear num objetos Complejo, 
    después de recibirlos los suma todos e imprime a pantalla el resultado*/
    //Creamos arreglo de num Complejos
    Complejo complejos[num];
   
    //Cargar datos de teclado para crear los n complejos, usa un for 
    double re, im;
    for (int i=0; i<num; i++){
        //Recibir los datos por teclado, dos por renglón
        cout << "Ingrese la parte real del complejo " << i+1 << ": ";
        cin >> re;
        cout << "Ingrese la parte imaginaria del complejo " << i+1 << ": ";
        cin >> im;

        //Crear el complejo y guardarlo en el arreglo
        complejos[i] = Complejo(re, im);
    }
    
    Complejo resultado;
    //Sumar todos los complejos del arreglo con un ciclo y guardarlo en la variable resultado
    for (int i=0; i<num; i++){
        resultado.agregar(complejos[i]);
    }
    
    //Imprimo el resultado fuera del ciclo
    cout << "Resultado de la suma: ";
    resultado.imprime();
    cout << endl;
}

void cargaArchivoMultiEscalar(double num){
    /*Esta función carga los datos de un archivo Datos.txt y crea números complejos y los despliega
    Después de crearlos los multiplica todos por num y los despliega a pantalla de nuevo */
    //Declaro el arreglo de máximo 20 Complejos
    const int MAX_COMPLEJOS = 20;
    Complejo complejos[MAX_COMPLEJOS];

    //Crea el objeto ifstream 
    ifstream archivo;
    
    //Vincula el ifstream para abrir el archivo Datos.txt
    archivo.open("Datos.txt");
    
    int numDatos=0;
    double re, im;
    //Lee los datos del archivo y crea los complejos, usa un while
    while (archivo >> re >> im){
        if (numDatos >= MAX_COMPLEJOS){
            cout << "Error: Se han leído más datos de los permitidos." << endl;
            break;
        }
        
        //Crear el complejo y guardarlo en el arreglo
        complejos[numDatos] = Complejo(re, im);
        numDatos++;
    }
    archivo.close();

    //Recorre el arreglo y multiplica cada complejo por num
    for (int i=0; i<numDatos; i++){
        complejos[i] = complejos[i].multiEscalar(num);
    }
    
    cout << "Complejos multiplicados por " << num << ":" << endl;
    //Recorre con un ciclo y muestra los complejos del arreglo
    for (int i=0; i<numDatos; i++){
        complejos[i].imprime();
        cout << endl;
    }
}

int main() {
    int opc;
    while(opc!=4){
        cout << "1-Prueba operaciones\n, 2-Recibe n y suma\n, 3-Carga archivo y multiplica\n, 4-Salir\n" << endl;
        cin >> opc;
        switch(opc){
            case 1:
            {
                //llama a la función que prueba las operaciones
                pruebaOperaciones();
                break;
            }
            case 2:
            {
                //Carga datos de teclado y suma
                int cuantos;
                cin >> cuantos;
                //Llama a la función que carga n los datos y suma
                cargaDatosSuma(cuantos);
                break;
            }
            case 3:
            {
                //Carga un archivo datos y agrega un complejo a todos los datos
                //Recibe por cuánto quieres multiplicar los datos del arreglo
                double porCuanto;
                cin >> porCuanto;
                //llama a la función que carga el archivo y multiplica
                cargaArchivoMultiEscalar(porCuanto);
                break;
            }
            case 4:
            {
                cout << "Saliendo del programa..." << endl;
                break;
            }
            default:
            {
                cout << "Opcion Incorrecta" << endl;
            }
        }
    }
    return 0;
}