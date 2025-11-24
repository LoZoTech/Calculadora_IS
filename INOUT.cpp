#include "Inout.h"
using namespace std;

void mensajeInicio() {
    cout << "------Calculadora nivel 2do de carrera------" << endl;
    cout << "Escribir el comando, el numero 1 y el numero 2" << endl;
    cout << "    [Help] para mostrar comandos" << endl;
    cout << "    [Exit] para apagar calculadora" << endl;
}

void help() {
    cout << "Operaciones disponibles:" << endl;
    cout << "Help: muestra este mensaje de ayuda" << endl;
    cout << "Add: suma ambos numeros" << endl;
    cout << "Sub: resta el primero menos el segundo" << endl;
    cout << "Mul: multiplica ambos numeros" << endl;
    cout << "Div: divide el primero por el segundo" << endl;
    cout << "Exp: eleva el primero al segundo" << endl;
}

tDatos lectura() {
    tDatos datos;
    datos.num1 = 0;
    datos.num2 = 0;

    cin >> datos.operador;
    // Solo pedimos números si NO es Help ni Exit
    if (datos.operador != "Help" && datos.operador != "Exit") {
        cin >> datos.num1 >> datos.num2;
    }    
    return datos;
}

// Muestra la solución con el formato ":resultado" [cite: 21, 57]
void mostrarSolucion(double sol) {
    cout << "    :" << sol << endl;
}

// Muestra mensaje de error [cite: 22]
void mostrarError(string error) {
    cout << "[ERROR] " << error << endl;
}

// Getters [cite: 25-27]
double getNum1(tDatos datos) { return datos.num1; }
double getNum2(tDatos datos) { return datos.num2; }
string getOperator(tDatos datos) { return datos.operador; }
