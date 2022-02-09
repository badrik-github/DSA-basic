<h1 align="center">
  	<span>Heap</span>
</h1>

---

## Definition

- Max-Heap: In a Max-Heap the key present at the root node must be greatest among the keys present at all of it’s children. The same property   must be recursively true for all sub-trees in that Binary Tree.

- Min-Heap: In a Min-Heap the key present at the root node must be minimum among the keys present at all of it’s children. The same property must be recursively true for all sub-trees in that Binary Tree.


## Traversing Details

- Parent Node :- (i-1) / 2;

- Current Index :- i;

- Left Child :- (2*i) + 1;

- Right Child :- (2*i) + 2;

## For a array of length N and it is 0 based:-

- Internal Nodes are from 0 to (N/2) - 1;

- Leaf Nodes are from (N/2) to (N-1);

## Time Complexity

- Building a Min_heap or Max_heap takes a time complexity of O(n*log(n))
- As heapify takes log(n) and to create min or max heap it is called n times so it is O(n*log(n))

# Time complexity of deleting element in heap
- the time complexity of deleting an element in heap is O(log(n))

# Time complexity of inserting element in heap
- the time complexity of inserting an element in heap is O(log(n))

# Note:- 
- Heaps are also used as priority queue.

- Heapify algorithm are also of two type top-down heapify and bottom-up heapify

- top-down heapify is used to delete element

- bottom-up heapify is used to insert element