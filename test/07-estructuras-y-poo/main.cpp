#include <iostream>
#include <vector>

// Ejercicio 1 — Clase Rectangulo
class Rectangulo {
private:
    double ancho;
    double alto;
public:
    Rectangulo(double a, double h) : ancho(a), alto(h) {}

    double area() const {
        // TODO
        return 0;
    }

    double perimetro() const {
        // TODO
        return 0;
    }

    // Ejercicio 4 — Sobrecarga de operadores
    bool operator==(const Rectangulo& otro) const {
        // TODO
        return false;
    }
};

// Ejercicio 2 — Clase CuentaBancaria
class CuentaBancaria {
private:
    double saldo;
public:
    CuentaBancaria(double saldoInicial) : saldo(saldoInicial) {}

    void depositar(double monto) {
        // TODO
    }

    bool retirar(double monto) {
        // TODO
        return false;
    }

    double consultarSaldo() const {
        return saldo;
    }
};

// Ejercicio 3 — Herencia: Figura, Circulo, Cuadrado
class Figura {
public:
    virtual double area() const { return 0; }
    virtual ~Figura() {}
};

class Circulo : public Figura {
private:
    double radio;
public:
    Circulo(double r) : radio(r) {}
    double area() const override {
        // TODO
        return 0;
    }
};

class Cuadrado : public Figura {
private:
    double lado;
public:
    Cuadrado(double l) : lado(l) {}
    double area() const override {
        // TODO
        return 0;
    }
};

int main() {
    Rectangulo r(3, 4);
    std::cout << r.area() << std::endl;
    return 0;
}
