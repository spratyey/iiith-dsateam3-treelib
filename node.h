/*
    The idea behind Tree Search Library is that, once given the 'comparator' function between nodes by 
    the user, the library can use this to perform any kind of search by the change of just one function.
    
    The comparator function takes as input the pointers of two nodes and outputs whether the first is 
    lesser than the other. You can use this comparator for deciding the order of 2 nodes in the priority 
    queue.

    This file will be what the user will edit, while trying to use your library. Once you complete writing
    the library, you have to (as an user of the library), write the comparators for DFS, BFS, greedy 
    search (A-star lite).

    Check out the input file ts_data_1.txt. It has input of format 
    <number_of_nodes>:n
    <state_number> <value> <parent_state_number>
    ...
    n times

    For now, write the main function and input the nodes, fill the values of number_of_children, children
    (in the struct) and try to write the priority queue using the comparator.
*/
#ifndef NODE_H
#define NODE_H
#include <stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef struct node
{
    int state_number;
    int value;
    int parent;
    int seen_time;
    // You (as a developer) can add any extra information here [Will not be touched by user]
    int depth, number_of_children;
    // Branching factor = average number of children of each node other than leaves.
    //node *children[10000];
    struct node* next;
} node;

typedef struct node* ptr;
int node_comparator(node *a, node *b);
void input_node(struct node *AdjacencyListArray[]);

#endif