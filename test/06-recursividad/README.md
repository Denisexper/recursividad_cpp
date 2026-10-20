# 6. Recursividad

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

Puedes profundizar más en este tema revisando las carpetas `main/` y `session-01/` de este mismo repositorio, que tienen ejercicios de recursividad con contexto narrativo.

## Ejercicios

### Ejercicio 1 — Factorial recursivo

Implementa `long long factorial(int n)` de forma recursiva.

### Ejercicio 2 — Fibonacci recursivo

Implementa `long long fibonacci(int n)` (con `fibonacci(0) = 0`, `fibonacci(1) = 1`) de forma recursiva.

### Ejercicio 3 — Suma de dígitos recursiva

Implementa `int sumaDigitos(int n)` que sume los dígitos de `n` de forma recursiva (sin bucles).

### Ejercicio 4 — Potencia rápida

Implementa `long long potencia(long long base, int exp)` usando el truco de exponenciación recursiva:

```
potencia(b, 0) = 1
potencia(b, e) = potencia(b, e/2)^2            si e es par
potencia(b, e) = b * potencia(b, e/2)^2        si e es impar
```

Esto calcula `base^exp` en O(log exp) en lugar de O(exp).

### Ejercicio 5 — Torres de Hanói

Implementa `void hanoi(int n, char origen, char destino, char auxiliar)` que imprima la secuencia de movimientos para resolver el problema de las Torres de Hanói con `n` discos, con el formato:

```
Mover disco 1 de A a C
Mover disco 2 de A a B
...
```
