// ============================================================
//  Recursividad y búsqueda binaria en C++
//  Compilar:  g++ -std=c++17 -O2 -o ejemplos ejemplos.cpp
// ============================================================
 
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>   // std::sort, std::lower_bound, std::binary_search
 
// ============================================================
//  PARTE 1 — RECURSIVIDAD
// ============================================================
// Toda función recursiva necesita dos cosas:
//   1) Caso base: cuándo dejar de llamarse a sí misma.
//   2) Paso recursivo: acercarse al caso base en cada llamada.
// Sin caso base -> stack overflow.
 
// ---- 1.1 Factorial ----------------------------------------
long long factorial(int n) {
    if (n <= 1) return 1;            // caso base
    return n * factorial(n - 1);     // paso recursivo
}
 
// ---- 1.2 Fibonacci (versión ingenua) ----------------------
// Cuidado: es O(2^n). Sirve para entender, no para usar.
long long fibLento(int n) {
    if (n < 2) return n;
    return fibLento(n - 1) + fibLento(n - 2);
}
 
// ---- 1.3 Fibonacci con memorización -----------------------
// Guardamos resultados ya calculados -> O(n).
long long fibMemo(int n, std::vector<long long>& memo) {
    if (n < 2) return n;
    if (memo[n] != -1) return memo[n];       // ya lo calculamos antes
    return memo[n] = fibMemo(n - 1, memo) + fibMemo(n - 2, memo);
}
