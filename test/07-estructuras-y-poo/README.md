# 7. Estructuras y POO (clases, constructores, herencia)

## Teoría

Un `struct` agrupa datos relacionados:

```cpp
struct Punto {
    double x;
    double y;
};
```

Una `class` agrupa datos (atributos) y comportamiento (métodos), con control de acceso (`public`/`private`):

```cpp
class Persona {
private:
    std::string nombre;
    int edad;
public:
    Persona(std::string n, int e) : nombre(n), edad(e) {} // constructor

    void presentarse() const {
        std::cout << "Soy " << nombre << ", tengo " << edad << " años" << std::endl;
    }
};
```

**Herencia**: una clase hija extiende a una clase base, reutilizando y pudiendo sobrescribir (`override`) su comportamiento:

```cpp
class Animal {
public:
    virtual void hacerSonido() const { std::cout << "..." << std::endl; }
};

class Perro : public Animal {
public:
    void hacerSonido() const override { std::cout << "Guau" << std::endl; }
};
```

`virtual` habilita el **polimorfismo**: llamar a `hacerSonido()` sobre un `Animal*` que apunta a un `Perro` ejecuta la versión de `Perro`.

## Ejercicios

### Ejercicio 1 — Clase `Rectangulo`

Implementa una clase `Rectangulo` con atributos privados `ancho` y `alto`, un constructor que los reciba, y los métodos `double area() const` y `double perimetro() const`.

### Ejercicio 2 — Clase `CuentaBancaria`

Implementa una clase `CuentaBancaria` con saldo privado, un constructor que reciba el saldo inicial, y los métodos `void depositar(double monto)`, `bool retirar(double monto)` (devuelve `false` si no hay saldo suficiente, sin modificarlo) y `double consultarSaldo() const`.

### Ejercicio 3 — Herencia: `Figura`, `Circulo`, `Cuadrado`

Crea una clase base `Figura` con un método virtual `double area() const`. Crea `Circulo` y `Cuadrado` que hereden de `Figura` y lo sobrescriban. En `main`, guarda varias figuras en un `std::vector<Figura*>` e imprime el área de cada una (polimorfismo).

### Ejercicio 4 — Sobrecarga de operadores

A la clase `Rectangulo` del ejercicio 1, agrégale el operador `==` (`bool operator==(const Rectangulo& otro) const`) que compare si dos rectángulos tienen la misma área.
