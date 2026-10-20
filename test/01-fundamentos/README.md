# 1. Fundamentos: variables, tipos y E/S

## Teoría

C++ es un lenguaje de **tipado estático**: cada variable tiene un tipo fijo desde que se declara.

Tipos básicos más usados:

```cpp
int edad = 20;          // entero
double precio = 19.99;  // decimal de doble precisión
char letra = 'A';       // un solo carácter
bool activo = true;     // true / false
std::string nombre = "Denis"; // cadena de texto (requiere #include <string>)
```

Entrada y salida con `cin`/`cout` (requiere `#include <iostream>`):

```cpp
int x;
std::cin >> x;                 // leer un entero
std::cout << "Valor: " << x << std::endl; // imprimir
```

Constantes con `const`, y operadores aritméticos (`+ - * / %`), de comparación (`== != < > <= >=`) y lógicos (`&& || !`).

## Ejercicios

Resuélvelos en `main.cpp`, cada uno en su función correspondiente.

### Ejercicio 1 — Datos personales

Lee el nombre (string), la edad (int) y la estatura en metros (double) de una persona, e imprime un resumen con el formato:

```
Nombre: <nombre>, Edad: <edad>, Estatura: <estatura> m
```

### Ejercicio 2 — Conversión de temperatura

Lee una temperatura en grados Celsius y conviértela a Fahrenheit usando la fórmula `F = C * 9/5 + 32`. Imprime el resultado con 2 decimales.

**Entrada:** `25`
**Salida:** `77.00`

### Ejercicio 3 — Promedio de tres notas

Lee tres números de tipo `double` (notas de 0 a 20) e imprime su promedio. Si el promedio es mayor o igual a 10.5, imprime además `APROBADO`; si no, `REPROBADO`.

**Entrada:** `12 15 18`
**Salida:**
```
Promedio: 15.00
APROBADO
```
