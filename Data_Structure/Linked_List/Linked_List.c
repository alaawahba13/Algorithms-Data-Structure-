/*
 * Linked_List.c
 *
 *  Created on: 30 Aug 2023
 *      Author: Alaa Wahba
 */


#include "Linked_list.h"



void insertNodeAtHead(Node_t **Head)
{
    Node_t *temp = NULL;
    temp = (Node_t *)malloc(sizeof(Node_t));
    if(temp != NULL)
    {
        printf("Enter Last Node Data: ");
        scanf("%d", &temp->NodeData);
        if(*Head == NULL )   // list was empty
        {
            temp->NodePtr =NULL;
            *Head = temp;
        }
        else
        {
            // list not empty
            temp->NodePtr = *Head;
            *Head = temp;
        }
    }

    else
    {
        // no place saved in memory for temp
    }

}

void insertNodeAtEnd(Node_t **Head)
{
    Node_t *temp =NULL;
    Node_t *LastNode = NULL;
    temp = (Node_t *)malloc(sizeof(Node_t));

    if(temp != NULL)
    {
        printf("Enter Head Node Data: ");
        scanf("%d", &temp->NodeData);
        temp->NodePtr =NULL;
        if(*Head == NULL )
        {
            // list was empty
            *Head = temp;
        }
        else
        {
            // list not empty
            LastNode = *Head;
            while(LastNode->NodePtr != NULL)
            {
                LastNode = LastNode->NodePtr;
            }
            LastNode->NodePtr = temp;
        }
    }
    else {

    }
}

void insertNodeAfter(Node_t *Head)
{
    Node_t *temp= NULL;
    Node_t *First = NULL;
    int NodePosition=0;
    int listPosition =1;
    printf("Enter node position : ");
    scanf("%d", &NodePosition);

    if(NodePosition < getLength(Head) )
    {
         First = Head;
            while(listPosition < NodePosition)
            {
                listPosition++;
                First = First->NodePtr;
            }

        temp = (Node_t *)malloc(sizeof(Node_t));
        if(temp !=NULL)
        {
            printf("enter data: ");
            scanf("%d", &temp->NodeData);

            temp->NodePtr = First->NodePtr;
            First->NodePtr = temp;
        }
        else {

        };

    }
    else
    {
        printf("Node position doesn't exist");
    }
}

int getLength(Node_t *Head)
{
    Node_t *temp= Head;
    int listLength=0;
    while(temp !=NULL )
    {
        listLength++;
        temp = temp->NodePtr;
    }
    return listLength;
}

void deleteNodeAtHead(Node_t **Head)
{
     Node_t *temp = *Head;
   int length = getLength(*Head);
    if( length != 0 )
    {
        *Head = temp->NodePtr;
        temp->NodePtr =NULL;
        free(temp);

    }
    else
    {
        printf("List is all empty");
    }
}

void deleteNodeAtPosition(Node_t *Head)
{
    Node_t *NodeDelete = Head;
    Node_t *NodeAfter = Head;
    int NodePosition=0;
    int listPosition =1;
    printf("Enter node position : ");
    scanf("%d", &NodePosition);
    if(NodePosition < getLength(Head) )
    {
        while(listPosition < (NodePosition-1) )
        {
            listPosition++;
            NodeAfter = NodeAfter->NodePtr;
        }
        NodeDelete = NodeAfter->NodePtr;
        NodeAfter->NodePtr = NodeDelete ->NodePtr;
        free(NodeDelete);



    }
    else
    {
        printf("Node position doesn't exist");

    }

}

void printAllNodes(Node_t *Head){
    Node_t *temp = Head;
    printf("Node Values : ");

  if( temp == NULL ){
    printf("List is empty");
  }
  else{

    while( temp != NULL ){
        printf("%d->", temp->NodeData);
        temp = temp->NodePtr;
    }
    if(temp == NULL){
        printf("NULL ");
    }

  }

}
