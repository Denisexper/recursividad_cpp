# Guía de ejercicios de C++

Esta carpeta es una guía progresiva para aprender los temas más importantes de C++. Cada subcarpeta cubre un tema, con una explicación corta, ejemplos de sintaxis y una serie de ejercicios para practicar.

## Cómo usarla

1. Entra a la carpeta del tema en orden (están numeradas).
2. Lee el `README.md` del tema: tiene el resumen de la teoría y el enunciado de cada ejercicio.
3. Resuelve los ejercicios directamente en el `main.cpp` de esa carpeta, dentro de las funciones marcadas con `// TODO`.
4. Compila y corre para probar tu solución:

```bash
g++ -std=c++17 -Wall -Wextra -o main main.cpp
./main
```

## Temario

| # | Tema | Carpeta |
|---|------|---------|
| 1 | Fundamentos: variables, tipos y E/S | [01-fundamentos](01-fundamentos) |
| 2 | Control de flujo: `if`, `switch`, bucles | [02-control-de-flujo](02-control-de-flujo) |
| 3 | Funciones: parámetros, sobrecarga, valor vs. referencia | [03-funciones](03-funciones) |
| 4 | Arrays y strings | [04-arrays-y-strings](04-arrays-y-strings) |
| 5 | Punteros y referencias | [05-punteros-y-referencias](05-punteros-y-referencias) |
| 6 | Recursividad | [06-recursividad](06-recursividad) |
| 7 | Estructuras y POO (clases, constructores, herencia) | [07-estructuras-y-poo](07-estructuras-y-poo) |
| 8 | STL: `vector`, `map`, `set`, algoritmos | [08-stl](08-stl) |
| 9 | Memoria dinámica: `new`/`delete`, smart pointers | [09-memoria-dinamica](09-memoria-dinamica) |

Se recomienda avanzar en orden, ya que cada tema usa conceptos de los anteriores.
