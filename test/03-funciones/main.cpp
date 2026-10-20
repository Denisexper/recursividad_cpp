#include <iostream>
#include <string>

// Ejercicio 1 — Swap manual
void intercambiar(int& a, int& b) {
    // TODO: intercambiar los valores de a y b.
}

void probarIntercambio() {
    int a, b;
    std::cin >> a >> b;
    intercambiar(a, b);
    std::cout << a << " " << b << std::endl;
}

// Ejercicio 2 — Funciones sobrecargadas
int maximo(int a, int b) {
    // TODO
    return 0;
}

double maximo(double a, double b) {
    // TODO
    return 0;
}

// Ejercicio 3 — Es palíndromo (función)
bool esPalindromo(const std::string& s) {
    // TODO
    return false;
}

// Ejercicio 4 — Factorial con función auxiliar
long long factorial(int n) {
    // TODO
    return 0;
}

long long combinatorio(int n, int k) {
    // TODO: usar factorial() para calcular C(n, k).
    return 0;
}

int main() {
    probarIntercambio();
    return 0;
}
