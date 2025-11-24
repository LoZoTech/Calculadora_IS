#include "INOUT.h"
#include "Operations.h"
using namespace std;

int main() {
    mensajeInicio();

    tDatos datos;
    bool running = true;

    while (running) {
        datos = lectura();

        if (getOperator(datos) == "Exit") {
            running = false;
        }
        else if (getOperator(datos) == "Help") {
            help();
        }
        else {
            double resultado = execute(datos);
            
            // Pequeña comprobación para no imprimir resultado si hubo error de comando
            string op = getOperator(datos);
            if(op == "Add" || op == "Sub" || op == "Mul" || op == "Div" || op == "Exp"){
                 mostrarSolucion(resultado);
            }
        }
    }

    return 0;
}
