/*
CH-230-A
a8_p1.[c or cpp or h] 
Diana Harambas
dharambas@jacobs-university.de
*/
/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{
	if( !queue_is_full( pq ) )
    {
        //initializing the new node
        Node *new;
        new = ( Node* )malloc( sizeof( Node ) );
        if(new == NULL)
        {
            printf("Memory allocation problem\n");
            return -1;
        }
        new->item = item;
        new->next = NULL;
        if( queue_is_empty( pq ) )
        {
            //if queue empty then the new node is the front
            pq->front = new;
        }
        else
        {
            //setting the next node to the rear = new node
            pq->rear->next = new;
        }
        //putting new node as rear
        pq->rear = new;
        //increasing number of items in the queue
        pq->items++;
    }
    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
	// add missing stuff
        return 0;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}