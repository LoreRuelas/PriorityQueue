//
// Created by loren on 09/11/2022.
//
#include "PriorityQueue.h"

// Implementado como un HeapMin
// Está basamos en un código de internet
// Tiene un error con el main dado vimos que no hace el ultimo swap, no supimos ver porque

typedef struct element
{
    void* value;
    int priority;
}Element;

struct priorityQueue
{
    Element Array[50];
    int size; // indica numero de espacios ya llenados en el arreglo
};



PriorityQueue* p_queue_new()
{
    PriorityQueue *PQueue = calloc(1, sizeof(PriorityQueue));
    PQueue->size = -1; //Se inicializa en -1 porque dsp se le suma 1, asi que los indices (contador de indices: size) empiece en 0
    //printf("%d", PQueue->size);
    return PQueue;
}


void swapVal(PriorityQueue *pq, int index_parent, int index_for_new )
{

    // se hace swap el hijo pasa a ser el padre y viceversa (heapifyUp)
    Element temp = (pq->Array)[index_parent];
    (pq->Array)[index_parent] = (pq->Array)[index_for_new];
    (pq->Array)[index_for_new] = temp;

}

int getParent( int NumElement)
{
    // formula definida para obtener el padre - esto se cumple si los indices que indican los elementos del arbol binario estan ordenado de izq a derecha de arriba hacia abajo (como lo vimos en clase)
   return (NumElement - 1 )/2;
}

void change_up(PriorityQueue *pq)
{
    int index_parent = getParent(pq->size);
    int i = pq->size;
    // 1ra condicion: que el indice sea mayor o igual a cero - 0 es el limite de los indices del arreglo
    //2nda condicion: que la prioridad del padre sea mayor a la del hijo -> hara swap (para que se cumple heapMin)
    while( i >= 0 && ((pq->Array)[index_parent].priority  > (pq->Array)[pq->size].priority))
    {

        swapVal( pq,index_parent,i);
        index_parent = getParent(i); // obtenemos el indice donde esta el padre del elemento que estamos comparando (un hijo)
        i = index_parent; // actualizamos el valor de i - para que se vya comparando con los de arriba y asi sucesivamente

    }
}



void p_queue_enqueue(PriorityQueue *pq, void* data, int priority)
{

    /*  INTENTO DE HACER EL ARREGLO DINAMICO
     * Ahorita si se agregan más de 50 elementos se accesará a memoria illegal  - eso está mal
    if (pq->size == 50)
    {
        pq->Array = realloc(pq->Array, sizeof(Element) * 100);
    }
    */
    //aumentamos el size (contador de elementos activos en nuestro array
    pq->size = pq->size + 1;
    // asignamos los valores que queremos meter en el indice correcto ya que ya se aumento pq->size (indica en que indice se va a a meter)
    (pq->Array)[pq->size].value = data;
    (pq->Array)[pq->size].priority = priority;
    change_up(pq); // Hace el heapifyUp si es necesario

}

void print(PriorityQueue *pq)
{
    for(int i = 0; i <= pq->size; i++ )
    {
        printf(" Valor = %s", ((char*)pq->Array[i].value));
        printf(" Priority = %d\n", (int)pq->Array[i].priority);
    }
}