# Hermione y la llegada de los Reapers

¡Esto es terrible! Nadie logró detener al PFL Pleités, y ahora los Reapers han llegado y traen consigo la destrucción del buen fútbol y la programación.

En estos momentos, Oof irá a recuperarse mientras investiga algo que ha llamado su atención desde hace un año. Además, Chriseme y Polanski investigarán todo lo posible sobre los Reapers.

Sin embargo, con las defensas Autovengadoras destruidas, nada podía detener el avance de las máquinas, que llegaron en hordas. A pesar de que aún no entiendes por qué le ayudaste al PFL Pleités hace unos momentos, necesitas saber cuántos Reapers han llegado al planeta.

Para esta tarea, tenemos la suerte de que Hermione ha tomado **N** fotografías distintas, asegurándose de que en cada una aparezcan exactamente **M** Reapers. Tras analizar las imágenes, se asignó a cada Reaper un identificador entero único, representado por **I**, el cual se mantiene igual en todas las fotografías en las que dicho Reaper aparece.

Tu tarea inicial es determinar cuántos Reapers han llegado en total.

## Entrada

La primera línea contiene dos enteros: **N** y **M**, que representan, respectivamente, la cantidad de fotografías que ha tomado Hermione y la cantidad de Reapers que aparecen en cada una de ellas.

Las siguientes **N** líneas contienen **M** enteros `I` cada una, representando el identificador único de cada Reaper.

## Salida

Debes imprimir un único entero: la cantidad de Reapers que han llegado.

## Restricciones

- 1 ≤ N ≤ 1000
- 1 ≤ M ≤ 10
- 1 ≤ I ≤ 10⁹

## Casos de prueba

### Caso 1

**Entrada:**
```
5 3
1 2 3
3 2 4
10 4 2
1 3 2
5 6 7
```

**Salida:**
```
8
```

### Caso 2

**Entrada:**
```
1 10
1 2 3 4 5 6 7 8 9 10
```

**Salida:**
```
10
```