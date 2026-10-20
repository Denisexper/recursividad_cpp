# 5. Punteros y referencias

## Teoría

Un **puntero** guarda la dirección de memoria de una variable:

```cpp
int x = 10;
int* p = &x;      // p apunta a x
std::cout << *p;  // 10 (desreferenciar: acceder al valor apuntado)
*p = 20;          // modifica x a través del puntero
```

Una **referencia** es un alias de otra variable (no una dirección que se pueda reasignar):

```cpp
int x = 10;
int& ref = x; // ref y x son la misma variable
ref = 20;     // x ahora es 20
```

Diferencia clave: un puntero puede ser `nullptr` y puede reapuntar a otra variable; una referencia debe inicializarse al declararse y siempre se refiere a la misma variable.

Los punteros también sirven para recorrer arrays, ya que `arr[i]` es equivalente a `*(arr + i)`.

## Ejercicios

### Ejercicio 1 — Modificar mediante puntero

Declara un entero `x`, un puntero `p` que apunte a `x`, y usa `*p` para duplicar el valor de `x`. Imprime `x` antes y después.

### Ejercicio 2 — Suma usando punteros

Implementa `int sumaArreglo(int* arr, int n)` que recorra el arreglo usando aritmética de punteros (`*(arr + i)`) en vez de `arr[i]`, y devuelva la suma.

### Ejercicio 3 — Intercambiar con punteros

Implementa `void intercambiar(int* a, int* b)` (con punteros, no referencias) que intercambie los valores apuntados por `a` y `b`.

### Ejercicio 4 — Min y max por referencia

Implementa `void minYmax(const std::vector<int>& v, int& minimo, int& maximo)` que calcule el mínimo y el máximo de `v` y los devuelva mediante los parámetros por referencia `minimo` y `maximo`.
