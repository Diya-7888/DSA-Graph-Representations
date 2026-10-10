#include <stdio.h>
#include <stdlib.h>

#define V 6

char vertices[V] = {'A', 'B', 'C', 'D', 'E', 'F'};

struct Node
{
    int vertex;
    struct Node *next;
};

struct Node *graph[V] = {NULL};

void addEdge(int u, int v)
{
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->vertex = v;
    newNode->next = graph[u];
    graph[u] = newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->vertex = u;
    newNode->next = graph[v];
    graph[v] = newNode;
}

void BFS(int start)
{
    int visited[V] = {0};
    int queue[V];
    int front = 0, rear = 0;
    int current, i;
    struct Node *temp;

    visited[start] = 1;
    queue[rear++] = start;

    printf("BFS: ");

    while (front < rear)
    {
        current = queue[front++];
        printf("%c ", vertices[current]);

        temp = graph[current];

        while (temp != NULL)
        {
            i = temp->vertex;

            if (visited[i] == 0)
            {
                visited[i] = 1;
                queue[rear++] = i;
            }

            temp = temp->next;
        }
    }

    printf("\n");
}

void DFS(int current, int visited[])
{
    struct Node *temp;

    visited[current] = 1;
    printf("%c ", vertices[current]);

    temp = graph[current];

    while (temp != NULL)
    {
        if (visited[temp->vertex] == 0)
        {
            DFS(temp->vertex, visited);
        }

        temp = temp->next;
    }
}

void searchVertex(char key)
{
    int i, operations = 0;

    for (i = 0; i < V; i++)
    {
        operations++;

        if (vertices[i] == key)
        {
            printf("Vertex %c found at position %d\n", key, i);
            printf("Search operations: %d\n", operations);
            return;
        }
    }

    printf("Vertex %c not found\n", key);
    printf("Search operations: %d\n", operations);
}

int main()
{
    int i;
    int visited[V] = {0};
    struct Node *temp;

    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 3);
    addEdge(1, 4);
    addEdge(2, 5);
    addEdge(4, 5);

    printf("Adjacency List:\n");

    for (i = 0; i < V; i++)
    {
        temp = graph[i];
        printf("%c -> ", vertices[i]);

        while (temp != NULL)
        {
            printf("%c ", vertices[temp->vertex]);
            temp = temp->next;
        }

        printf("\n");
    }

    printf("\nBFS starting from A:\n");
    BFS(0);

    printf("\nDFS starting from A:\n");
    DFS(0, visited);
    printf("\n");

    printf("\nSearching for E:\n");
    searchVertex('E');

    return 0;
}