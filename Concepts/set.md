<h1 align="center">
  	<span>Set</span>
</h1>

---

## Declaration

- set <int> set_name;

## Definition

- Set stores element in a sorted order.

- all element in the set have a unique value.

- sets are immutable(cannot be changed). However it can be deleted and inserted new element.

- sets allows binary search tree implementation.

- there are also unsorted_sets which can be used it stores value in unsorted way.

- operations possible is begin(), end(), size(), empty().

## SortedSet

- ordering :- Increasing order

- implements :- BTS ()

- searchTime :- log(n)

- insertion :- log(n) + rearranging

- deletion :- log(n) + rearranging

## UnsortedSet

- ordering :- no order

- implements :- HashTable

- searchTime :- O(1) -> averageCase, O(n) -> worstCase

- insertion :- O(1) -> averageCase, O(n) -> worstCase

- deletion :- O(1) -> averageCase, O(n) -> worstCase
