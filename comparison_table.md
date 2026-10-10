# Comparison of Adjacency Matrix and Adjacency List

| Feature             | Adjacency Matrix         | Adjacency List                        |
| ------------------- | ------------------------ | ------------------------------------- |
| Representation      | Two-dimensional array    | Array of linked lists                 |
| Space Complexity    | O(V²)                    | O(V + E)                              |
| BFS Time Complexity | O(V²)                    | O(V + E)                              |
| DFS Time Complexity | O(V²)                    | O(V + E)                              |
| Edge Checking       | O(1)                     | O(degree of the vertex)               |
| Edge Insertion      | O(1)                     | O(1), when inserting at the beginning |
| Suitable Graph      | Dense graph              | Sparse graph                          |
| Memory Usage        | Higher for sparse graphs | Lower for sparse graphs               |

## Advantages of Adjacency Matrix

* Simple to implement.
* Checks whether an edge exists in O(1) time.
* Suitable for dense graphs.

## Advantages of Adjacency List

* Uses less memory for sparse graphs.
* Stores only the existing edges.
* Provides efficient BFS and DFS traversal for sparse graphs.

## Conclusion

Both representations can store the same graph and support graph traversal. The adjacency matrix is useful when fast edge checking is important, while the adjacency list is more memory-efficient for sparse graphs.
