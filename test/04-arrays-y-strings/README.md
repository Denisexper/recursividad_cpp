# 4. Arrays y strings

## Teoría

**Arrays de tamaño fijo:**

```cpp
int arr[5] = {1, 2, 3, 4, 5};
for (int i = 0; i < 5; i++) std::cout << arr[i];
```

**`std::vector`** es un array dinámico (lo verás en profundidad en el tema de STL), pero aquí lo usamos como reemplazo moderno de los arrays fijos:

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

### Ejercicio 1 — Suma y máximo de un arreglo

Lee `n` y luego `n` enteros. Imprime la suma y el valor máximo.

**Entrada:**
```
5
3 7 2 9 4
```
**Salida:**
```
Suma: 25
Maximo: 9
```

### Ejercicio 2 — Invertir un arreglo

Lee `n` enteros y muéstralos en orden inverso, sin usar ninguna estructura de la STL para invertir (hazlo con un bucle).

### Ejercicio 3 — Contar vocales

Lee una línea de texto y cuenta cuántas vocales (a, e, i, o, u, mayúsculas o minúsculas) contiene.

### Ejercicio 4 — Es anagrama

Lee dos palabras y determina si son anagramas entre sí (contienen las mismas letras, en cualquier orden). Imprime `SI` o `NO`.

**Entrada:** `amor roma`
**Salida:** `SI`
