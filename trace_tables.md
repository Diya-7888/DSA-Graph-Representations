# Trace Tables for Graph Traversal

## 1. BFS Trace – Adjacency Matrix

Starting vertex: A

| Step | Visited Vertex | Newly Added Vertices | Queue   |
| ---- | -------------- | -------------------- | ------- |
| 1    | A              | B, C                 | B, C    |
| 2    | B              | D, E                 | C, D, E |
| 3    | C              | F                    | D, E, F |
| 4    | D              | None                 | E, F    |
| 5    | E              | None                 | F       |
| 6    | F              | None                 | Empty   |

BFS Traversal: A → B → C → D → E → F

## 2. DFS Trace – Adjacency Matrix

Starting vertex: A

| Step | Action                  | Visited Order    |
| ---- | ----------------------- | ---------------- |
| 1    | Visit A, then B         | A, B             |
| 2    | Visit D                 | A, B, D          |
| 3    | Return to B and visit E | A, B, D, E       |
| 4    | Visit F                 | A, B, D, E, F    |
| 5    | Visit C                 | A, B, D, E, F, C |

DFS Traversal: A → B → D → E → F → C

## 3. BFS Trace – Adjacency List

Starting vertex: A

| Step | Visited Vertex | Newly Added Vertices | Queue   |
| ---- | -------------- | -------------------- | ------- |
| 1    | A              | C, B                 | C, B    |
| 2    | C              | F                    | B, F    |
| 3    | B              | E, D                 | F, E, D |
| 4    | F              | None                 | E, D    |
| 5    | E              | None                 | D       |
| 6    | D              | None                 | Empty   |

BFS Traversal: A → C → B → F → E → D

## 4. DFS Trace – Adjacency List

Starting vertex: A

| Step | Action          | Visited Order    |
| ---- | --------------- | ---------------- |
| 1    | Visit A, then C | A, C             |
| 2    | Visit F         | A, C, F          |
| 3    | Visit E         | A, C, F, E       |
| 4    | Visit B         | A, C, F, E, B    |
| 5    | Visit D         | A, C, F, E, B, D |

DFS Traversal: A → C → F → E → B → D

## 5. Search Operation

Search vertex: E

| Representation   | Vertices Checked | Result              |
| ---------------- | ---------------- | ------------------- |
| Adjacency Matrix | A, B, C, D, E    | Found at position 4 |
| Adjacency List   | A, B, C, D, E    | Found at position 4 |

The search requires 5 vertex comparisons in both programs.
