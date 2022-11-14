#include <stdio.h>
#include "PriorityQueue.h"

/* BST (Binary Search Tree)
        - Arbol
        - Binario
        - Hijo Izq - menor
        - Hijo Der - mayor
        - No usar con ARREGLOS porque NO esta BALANCEADO
 Heaps - MinHeap - MaxHeap (Heap - 'Monticulo de prioridad')
          - Arbol
          - Binario
          - Se alinea a la izquierda - se va balanceando de izq a der
          - Esta balanceado
          - ...
          - Puede tener valores repetidos
          - Tiene + restricciones topologicas
          - Similar a un arbol binario pero NO de busqueda
 MinHeap - Elemento con menos valor en la raiz del arbol
            - Cada nodo es menor que sus hijos
            - La raiz es el valor menor o igual de todo el arbol
 MaxHeap - Elemento con mayor valor en la raiz del arbol
            - Cada nodo es mayor o igual que sus hijos
            - La raiz es el valor mayor de todo el arbol
 Heapify - Si no se respeta la condición de orden (Cada nodo es menor que sus hijos/Cada nodo es mayor que sus hijos)
            - Se hace swap de padre-hijo, hasta que se respete la condición de orden
 Heapify Up - comparación y swaps con los de arriba
 Heapify Down - comparación y swaps con los de abajo

 Arboles - EAR vs Arreglos
        HIJO_L = 2n+1
        HIJO_R = 2n+2
        PADRE  = (n-1)/2
 */

int main() {

    // Logramos implementar la parte no comentada
    PriorityQueue *pq = p_queue_new();

    p_queue_enqueue(pq, "Foo", 12);
    p_queue_enqueue(pq, "Bar", 11);
    p_queue_enqueue(pq, "Hola", 5);
    p_queue_enqueue(pq, "Mundo!", 10);
    p_queue_enqueue(pq, "ESTO ES URGENTE!", 0);
    print(pq);
     /*
    while (!p_queue_empty(pq))
    {
        char* message = p_queue_dequeue(pq);
        printf("%s\n", message);
    }
     */
    return 0;
}
