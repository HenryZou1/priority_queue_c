#include <stdlib.h>
#include <stdio.h>
#include "pri_queue.h"
/** @file pri_queue.c */
static Node_ptr_t head = NULL;

/**
 * Insert a Node into a priority queue.
 * @param priority
 * @param data
 * @author YOUR NAME
 */
void PQ_insert(int priority, char * data) {
    struct node* tmp;
    struct node* before ;
    struct node* newNode = (struct node*) malloc(sizeof (struct node));

    if (head == NULL) {
        tmp->next = NULL;
        tmp->priority = priority;
        tmp->data = data;
        head = tmp;
        return;
    }
    for (tmp = head; tmp != NULL; tmp = tmp->next) {
        if (tmp->priority < priority) {
            newNode->priority = priority;
            newNode->data = data;
            newNode->next = tmp;
            if (head->priority == tmp->priority){
                head = newNode;
            }
            else{
                tmp = newNode;
                before->next=tmp;

            }
            return;
        }
        before = tmp;

    }

    tmp->priority = priority;
    tmp->data = data;


}

/**
 * Delete and return the node with the highest priority.
 * @return The highest priority Node.
 */
Node_ptr_t PQ_delete() {
    struct node* tmp;
    tmp=head;
    head =tmp->next;

    return tmp;
}

/**
 * Do NOT modify this function.
 * @return A pointer to the head of the list.  (NULL if list is empty.)
 */
Node_ptr_t PQ_get_head() {
    return head;
}

/**
 * Do NOT modify this function.
 * @return the number of items in the queue
 */
int PQ_get_size() {
    int size = 0;
    Node_ptr_t tmp;
    for (tmp = head; tmp != NULL; tmp = tmp->next, size++)
        ;
    return size;
}


