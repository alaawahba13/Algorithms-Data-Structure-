/*
 * Linked_List.h
 *
 *  Created on: 30 Aug 2023
 *      Author:  Alaa Wahba
 */

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

#include <stddef.h>

typedef struct Node_t {
	int NodeData;
	struct Node_t *NodePtr;
}Node_t;


void insertNodeAtHead(Node_t **Head);
void insertNodeAtEnd(Node_t **Head);
void insertNodeAfter(Node_t *Head);

int getLength(Node_t *Head);

void deleteNodeAtHead(Node_t **Head);
void deleteNodeAtPosition(Node_t *Head);

void printAllNodes(Node_t *Head);

#endif /* LINKED_LIST_H_ */
