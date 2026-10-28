# 2. Control de flujo: `if`, `switch`, bucles

## Teoría

**Condicionales:**

```cpp
if (nota >= 10.5) {
    std::cout << "aprobado";
} else {
    std::cout << "reprobado";
}

switch (dia) {
    case 1: std::cout << "lunes"; break;
    case 7: std::cout << "domingo"; break;
    default: std::cout << "otro dia";
}
```

**Bucles:**

```cpp
for (int i = 0; i < n; i++) { /* ... */ }

while (condicion) { /* ... */ }

do { /* ... */ } while (condicion);
```

`break` corta el bucle; `continue` salta a la siguiente iteración.

## Ejercicios

### Ejercicio 1 — Números perfectos

Lee un entero `n` e imprime todos los números perfectos entre `1` y `n` (un número es perfecto si la suma de sus divisores propios, sin contarse a sí mismo, es igual a él mismo).

**Entrada:** `30`
**Salida:** `6 28`

### Ejercicio 2 — Clasificación de triángulo

Lee los tres lados de un triángulo (double) e indica si es `EQUILATERO`, `ISOSCELES` o `ESCALENO`.

### Ejercicio 3 — Patrón de asteriscos

Lee un entero `n` e imprime un triángulo rectángulo de asteriscos de `n` filas, por ejemplo para `n = 4`:

```
*
**
***
****
```

### Ejercicio 4 — Año bisiesto en rango

Lee dos años `a` y `b` (`a <= b`) e imprime, separados por espacio, todos los años bisiestos entre ambos (inclusive). Un año es bisiesto si es divisible por 4, salvo que sea divisible por 100 y no por 400.
