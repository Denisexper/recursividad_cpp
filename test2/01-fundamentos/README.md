# 1. Fundamentos: variables, tipos y E/S

## Teoría

Repaso rápido de tipos básicos y E/S:

```cpp
int cantidad = 3;
double precio = 4.5;
char inicial = 'D';
bool disponible = true;
std::string producto = "Lapiz"; // requiere #include <string>
```

```cpp
int x;
std::cin >> x;                              // leer un entero
std::cout << "Valor: " << x << std::endl;    // imprimir
```

## Ejercicios

Resuélvelos en `main.cpp`, cada uno en su función correspondiente.

### Ejercicio 1 — Factura simple

Lee el nombre de un producto (string), su precio unitario (double) y la cantidad comprada (int). Imprime el total a pagar con el formato:

```
Producto: <producto>, Total: <total>
```

### Ejercicio 2 — Conversión de unidades

Lee una distancia en kilómetros y conviértela a millas usando `millas = km * 0.621371`. Imprime el resultado con 2 decimales.

**Entrada:** `10`
**Salida:** `6.21`

### Ejercicio 3 — Área y perímetro de un rectángulo

Lee la base y la altura de un rectángulo (double) e imprime su área y su perímetro.

**Entrada:** `4 5`
**Salida:**
```
Area: 20.00
Perimetro: 18.00
```
