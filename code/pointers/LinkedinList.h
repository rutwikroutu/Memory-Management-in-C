#pragma once

typedef struct Node node_t;

typedef struct Node {
    int value;

    node_t *next;
} node_t;