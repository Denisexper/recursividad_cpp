# 5. Recursividad

## Teoría

Una función **recursiva** se llama a sí misma hasta llegar a un **caso base** que detiene la recursión. Toda función recursiva necesita:

1. **Caso base**: la condición que termina la recursión directamente (sin volver a llamarse).
2. **Caso recursivo**: la llamada a la misma función con un subproblema más pequeño.

```cpp
long long factorial(int n) {
    if (n <= 1) return 1;       // caso base
    return n * factorial(n - 1); // caso recursivo
}
```

Sin caso base (o si nunca se alcanza), la recursión nunca termina y provoca un desborde de pila (*stack overflow*).

Puedes profundizar más en este tema revisando las carpetas `main/`, `session-01/` y `test/06-recursividad` de este mismo repositorio.

## Ejercicios

### Ejercicio 1 — Máximo común divisor recursivo

Implementa `int mcdRecursivo(int a, int b)` usando el algoritmo de Euclides de forma recursiva (`mcd(a, 0) = a`, `mcd(a, b) = mcd(b, a % b)`).

### Ejercicio 2 — Es palíndromo recursivo

Implementa `bool esPalindromoRecursivo(const std::string& s, int inicio, int fin)` que compare los extremos del string y avance recursivamente hacia el centro. Imprime `SI` o `NO`.

### Ejercicio 3 — Cuenta de ocurrencias recursiva

Implementa `int contarOcurrencias(const std::vector<int>& v, int indice, int objetivo)` que cuente recursivamente cuántas veces aparece `objetivo` en `v`, sin usar bucles.

### Ejercicio 4 — Conversión a binario recursiva

Implementa `void aBinario(int n)` que imprima la representación binaria de `n` usando recursión (sin usar bucles ni estructuras de la STL para almacenar los dígitos).

**Entrada:** `13`
**Salida:** `1101`

### Ejercicio 5 — Subconjuntos (potencia de un conjunto)

Implementa `void subconjuntos(const std::vector<int>& v, int indice, std::vector<int>& actual)` que imprima todos los subconjuntos posibles de `v`, uno por línea, probando para cada elemento si se incluye o no.

**Entrada:** `1 2 3`
**Salida (en algún orden):**
```

1
2
1 2
3
1 3
2 3
1 2 3
```
