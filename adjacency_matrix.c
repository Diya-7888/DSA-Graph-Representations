#include <stdio.h>

#define V 6

char vertices[V] = {'A', 'B', 'C', 'D', 'E', 'F'};

int graph[V][V] = {
    {0, 1, 1, 0, 0, 0},
    {1, 0, 0, 1, 1, 0},
    {1, 0, 0, 0, 0, 1},
    {0, 1, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 1},
    {0, 0, 1, 0, 1, 0}
};

void BFS(int start)
{
    int visited[V] = {0};
    int queue[V];
    int front = 0, rear = 0;
    int i, current;

    visited[start] = 1;
    queue[rear++] = start;

    printf("BFS: ");

    while (front < rear)
    {
        current = queue[front++];
        printf("%c ", vertices[current]);

        for (i = 0; i < V; i++)
        {
            if (graph[current][i] == 1 && visited[i] == 0)
            {
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
    }

    printf("\n");
}

void DFS(int current, int visited[])
{
    int i;

    visited[current] = 1;
    printf("%c ", vertices[current]);

    for (i = 0; i < V; i++)
    {
        if (graph[current][i] == 1 && visited[i] == 0)
        {
            DFS(i, visited);
        }
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
    int visited[V] = {0};

    printf("BFS starting from A:\n");
    BFS(0);

    printf("\nDFS starting from A:\n");
    DFS(0, visited);
    printf("\n");

    printf("\nSearching for E:\n");
    searchVertex('E');

    return 0;
}