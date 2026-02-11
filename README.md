This project has been created as part of the 42 curriculum by kcanales.

# Push-Swap

## Introducción

El proyecto consiste en ordenar una pila de números utilizando únicamente operaciones específicas. El programa maneja dos pilas: la pila A (que empieza con todos los números) y la pila B (inicialmente vacía). El objetivo es terminar con todos los números ordenados de menor a mayor en la pila A, imprimiendo las instrucciones ejecutadas.

Se ejecuta desde la línea de comandos:
```
./push_swap 4 2 3 5 1
```
o
```
./push_swap "4 2 3 5 1"
```

## Algoritmo K-Sort

### 1. Normalización de números

Primero se transforman los números para que trabajen en un rango simple: el menor valor se convierte en 1 y el mayor en el total de elementos.

**Ejemplos:**
- `9999 5` → `2 1`
- `5 7 21 2 3` → `3 4 5 1 2`

### 2. Umbral de decisión

Se calcula un valor fijo al inicio:
```
const_decision_median = 1.3 × √(total de números en pila A)
```

### 3. Mover números a pila B

Mientras queden números en A:
```
SI (primer número de A ≤ cantidad actual en B):
    - Mover de A a B
    - Rotar B hacia arriba
    
SINO SI (primer número de A ≤ cantidad en B + const_decision_median):
    - Mover de A a B (sin rotar B)
    
SINO:
    - Rotar A hacia arriba (probar siguiente número)
```

Esto crea una **formación en K** en B: números pequeños en el centro, grandes en los extremos.

### 4. Devolver a pila A

Mientras queden números en B:
1. Localizar el **mayor número** de B y llevarlo a la cima
2. Moverlo de B a A

### 5. Finalizado

Al completar estos pasos, la pila A contiene todos los números ordenados. Solo queda imprimir cada operación realizada (`sa`, `sb`, `pa`, `pb`, `ra`, `rb`, etc.).

**Resultado:** Pila A perfectamente ordenada de menor a mayor.

## Instrucciones
Simplemente hacer make all y ejecutar ./push_swap con cualquier combinación de números.
Para depurar, compila todo con la flag -g hacinedo: make debug.

## Resources
Realizado con ayuda de repositorios de compañeros como de jquinde- o migugar2 o jurodrig.
La IA ha sido utilizada como tutor, preguntaba cosas que no comprendía de varias fuentes y me lo explicaba en detalle, le preguntaba con el objetivo de entenderlo y poder replicarlo.
