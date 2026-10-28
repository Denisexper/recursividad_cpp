# 3. Funciones: parámetros, sobrecarga, valor vs. referencia

## Teoría

Una función tiene tipo de retorno, nombre y parámetros:

```cpp
double promedio(double a, double b) {
    return (a + b) / 2.0;
}
```

**Paso por valor** copia el argumento (los cambios dentro de la función no afectan al original). **Paso por referencia** (`&`) opera sobre la variable original:

```cpp
void duplicar(int& x) { x *= 2; }   // modifica la variable original
void noDuplica(int x) { x *= 2; }   // modifica solo la copia local
```

**Sobrecarga (overload):** varias funciones con el mismo nombre pero distintos parámetros.

```cpp
int absoluto(int x);
double absoluto(double x);
```

**Parámetros por defecto:**

```cpp
void imprimirLinea(char c = '-', int largo = 10);
```

## Ejercicios

### Ejercicio 1 — Ordenar dos valores por referencia

Implementa `void ordenar(int& a, int& b)` que deje `a <= b`, intercambiándolos si es necesario usando paso por referencia. Lee dos enteros, ordénalos e imprímelos.

### Ejercicio 2 — Funciones sobrecargadas de área

Implementa `double area(double lado)` (cuadrado) y `double area(double base, double altura)` (rectángulo) usando sobrecarga. Lee cuántos parámetros usar y calcula el área correspondiente.

### Ejercicio 3 — Es número armstrong (función)

Implementa `bool esArmstrong(int n)` que indique si `n` es igual a la suma de sus dígitos elevados a la cantidad de dígitos que tiene (ej. `153 = 1^3 + 5^3 + 3^3`). Lee un número e imprime `SI` o `NO`.

### Ejercicio 4 — MCD y MCM con función auxiliar

Implementa `int mcd(int a, int b)` (iterativo, algoritmo de Euclides) y usa esa función para calcular `mcm(a, b) = (a * b) / mcd(a, b)`.
