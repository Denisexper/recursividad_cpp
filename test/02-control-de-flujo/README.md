# 2. Control de flujo: `if`, `switch`, bucles

## Teoría

**Condicionales:**

```cpp
if (x > 0) {
    std::cout << "positivo";
} else if (x == 0) {
    std::cout << "cero";
} else {
    std::cout << "negativo";
}

switch (opcion) {
    case 1: std::cout << "uno"; break;
    case 2: std::cout << "dos"; break;
    default: std::cout << "otro";
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

### Ejercicio 1 — Números primos

Lee un entero `n` e imprime todos los números primos entre `1` y `n`, separados por espacio.

**Entrada:** `20`
**Salida:** `2 3 5 7 11 13 17 19`

### Ejercicio 2 — FizzBuzz

Para cada número del 1 al `n`: si es múltiplo de 3, imprime `Fizz`; si es múltiplo de 5, imprime `Buzz`; si es múltiplo de ambos, imprime `FizzBuzz`; en otro caso, imprime el número. Un valor por línea.

### Ejercicio 3 — Tabla de multiplicar

Lee un entero `n` e imprime su tabla de multiplicar del 1 al 10, con el formato:

```
n x 1 = n
n x 2 = 2n
...
```

### Ejercicio 4 — Suma de dígitos hasta un dígito

Lee un entero positivo y suma repetidamente sus dígitos hasta que el resultado tenga un solo dígito. Imprime ese dígito final.

**Entrada:** `9875`
**Salida:** `2` (9+8+7+5=29, 2+9=11, 1+1=2)
