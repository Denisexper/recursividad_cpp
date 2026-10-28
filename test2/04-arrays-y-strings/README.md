# 4. Arrays y strings

## Teoría

**Arrays de tamaño fijo:**

```cpp
int arr[5] = {1, 2, 3, 4, 5};
for (int i = 0; i < 5; i++) std::cout << arr[i];
```

**`std::vector`** como reemplazo moderno de los arrays fijos:

```cpp
#include <vector>
std::vector<int> v(n); // vector de tamaño n
for (int i = 0; i < n; i++) std::cin >> v[i];
```

**Strings** (`#include <string>`) soportan `+` para concatenar, `.size()`, `[]` para acceder a caracteres, `.substr(inicio, largo)`, `.find(...)`.

```cpp
std::string s = "hola";
s += " mundo";
std::cout << s.size(); // 10
```

## Ejercicios

### Ejercicio 1 — Segundo mayor de un arreglo

Lee `n` y luego `n` enteros. Imprime el segundo valor más grande (sin repetir el máximo si hay empates, es decir, el mayor valor distinto al máximo).

**Entrada:**
```
5
3 7 2 9 4
```
**Salida:** `7`

### Ejercicio 2 — Rotar un arreglo

Lee `n` enteros y un entero `k`, y muestra el arreglo rotado `k` posiciones a la izquierda.

**Entrada:**
```
5
1 2 3 4 5
2
```
**Salida:** `3 4 5 1 2`

### Ejercicio 3 — Comprimir repetidos

Lee una línea de texto formada solo por letras minúsculas y comprime las repeticiones consecutivas con el formato `letra+cantidad` (si la cantidad es 1, no se escribe el número).

**Entrada:** `aaabccccd`
**Salida:** `a3bc4d`

### Ejercicio 4 — Es subsecuencia

Lee dos palabras `a` y `b`, y determina si `a` es subsecuencia de `b` (todas las letras de `a` aparecen en `b` en el mismo orden, no necesariamente consecutivas). Imprime `SI` o `NO`.

**Entrada:** `ace abcde`
**Salida:** `SI`
