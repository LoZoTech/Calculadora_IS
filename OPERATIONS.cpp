#include "OPERATIONS.h"
#include <string>
using namespace std;

double add(double num1, double num2) {
    return num1 + num2;
}

double sub(double num1, double num2) {
    return num1 - num2;
}

double mul(double num1, double num2) {
    return num1 * num2;
}

// División controlando división por cero
double divOp(double num1, double num2) {
    if (num2 == 0) {
        mostrarError("No se puede dividir por cero");
        return 0.0; 
    }
    return num1 / num2;
}

double expOp(double num1, double num2) {
    return pow(num1, num2);
}

double execute(tDatos datos) {
    string op = getOperator(datos);
    double n1 = getNum1(datos);
    double n2 = getNum2(datos);
    double res = 0.0;

    if (op == "Add") {
        res = add(n1, n2);
    }
    else if (op == "Sub") {
        res = sub(n1, n2);
    }
    else if (op == "Mul") {
        res = mul(n1, n2);
    }
    else if (op == "Div") {
        res = divOp(n1, n2);
    }
    else if (op == "Exp") {
        res = expOp(n1, n2);
    }
    else {
        // Si se pide una que no existe, lanza error
        mostrarError("Comando desconocido");
    }
    return res;
}
