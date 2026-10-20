# 3. Funciones: parámetros, sobrecarga, valor vs. referencia

## Teoría

Una función tiene tipo de retorno, nombre y parámetros:

```cpp
int sumar(int a, int b) {
    return a + b;
}
```

**Paso por valor** copia el argumento (los cambios dentro de la función no afectan al original). **Paso por referencia** (`&`) opera sobre la variable original:

```cpp
void incrementar(int& x) { x++; }   // modifica la variable original
void noIncrementa(int x) { x++; }   // modifica solo la copia local
```

**Sobrecarga (overload):** varias funciones con el mismo nombre pero distintos parámetros.

```cpp
int maximo(int a, int b);
double maximo(double a, double b);
```

**Parámetros por defecto:**

```cpp
void saludar(std::string nombre = "amigo");
```

## Ejercicios

### Ejercicio 1 — Swap manual

Implementa `void intercambiar(int& a, int& b)` que intercambie los valores de `a` y `b` usando paso por referencia. Léelos, intercámbialos e imprímelos.

### Ejercicio 2 — Funciones sobrecargadas

Implementa dos versiones de `maximo`: una para `int` y otra para `double`. Lee un tipo de dato, los dos valores, y muestra el máximo.

### Ejercicio 3 — Es palíndromo (función)

Implementa `bool esPalindromo(const std::string& s)` que indique si `s` se lee igual al derecho y al revés. Lee una palabra e imprime `SI` o `NO`.

### Ejercicio 4 — Factorial con función auxiliar

Implementa `long long factorial(int n)` (iterativo) y usa esa función para calcular `C(n, k) = n! / (k! * (n-k)!)`, el número combinatorio.
