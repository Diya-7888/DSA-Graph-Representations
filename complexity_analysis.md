# Complexity Analysis of Graph Representations

## 1. Adjacency Matrix

An adjacency matrix uses a two-dimensional array to represent the connections between vertices.

* **Space Complexity:** O(V²)
* **BFS Time Complexity:** O(V²)
* **DFS Time Complexity:** O(V²)
* **Checking an Edge:** O(1)
* **Adding an Edge:** O(1)
* **Searching for a Vertex by Label:** O(V)

In an adjacency matrix, every vertex is checked while finding adjacent vertices during BFS and DFS. Therefore, traversal takes O(V²) time.

## 2. Adjacency List

An adjacency list stores the neighbours of each vertex in a linked list.

* **Space Complexity:** O(V + E)
* **BFS Time Complexity:** O(V + E)
* **DFS Time Complexity:** O(V + E)
* **Checking an Edge:** O(degree of the vertex)
* **Adding an Edge:** O(1), when inserting at the beginning of a list
* **Searching for a Vertex by Label:** O(V)

In an adjacency list, only the neighbours of each vertex are explored during traversal. Therefore, it is efficient for sparse graphs.

## 3. Analysis of the Given Graph

The graph contains 6 vertices and 6 undirected edges.

For the adjacency matrix:

* Number of matrix entries = 6 × 6 = 36.

For the adjacency list:

* Number of neighbour entries = 2 × 6 = 12, because each undirected edge is stored twice.

## Conclusion

The adjacency matrix provides constant-time edge checking but requires O(V²) space. The adjacency list uses less space for sparse graphs and provides efficient BFS and DFS traversal. Therefore, an adjacency list is generally more suitable for sparse graphs.
