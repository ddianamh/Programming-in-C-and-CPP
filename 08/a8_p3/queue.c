/*
CH-230-A
a8_p3.[c or cpp or h] 
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
	if( !queue_is_empty( pq ) )
    {
        //making a temporary node, copy of the first node
        Node *temporary;
        temporary = ( Node* )malloc( sizeof( Node ) );
        if(temporary == NULL)
        {
            printf("Memory allocation problem\n");
            return -1;
        }
        temporary = pq->front;
        //copying item into pitem
        *pitem = temporary->item;
        //front becomes the next element of the queue
        pq->front = pq->front->next;
        //freeing the memory 
        free( temporary );
        //decreasing number of items
        pq->items--;
        //if now there are 0 items, then front and rear should be null
        if( pq->items == 0 )
        {
            pq->rear = NULL;
            pq->front = NULL;
        }
    }
    return 0;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}

void printq( Queue *pq )
{
    Node *current;
    int i = 1;
    //current node at the front
    current = pq->front;
    while( i <= pq->items )
    {
        //printing current item
        printf("%d ", current->item );
        //moving to the next node
        current = current->next;
        //increasing i
        i++;
    }
    printf("\n");
}