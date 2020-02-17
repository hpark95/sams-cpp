// Sequential Containers

/* std::vector
Advantages:
    1) insertion = O(c)
    2) array-like access

Disadvantages:
    1) resizing affects performance
    2) search = O(n)
    3) insertion only at the end (push_back)
*/

/* std::deque
Advantages:
    1) insertion = O(c)
    2) array-like access
    3) insertion at the beginning is possible

Disadvantages:
    1) resizing affects performance
    2) search = O(n)
    3) may suffer from frequent resizing because rserve() is not featured
*/

/*std::list
Advantages:
    1) insertion = O(c)
    2) removal = O(c) regardless of the element's position
    3) iterators are valid after insertion/removal

Disadvantages:
    1) cannot randomly access elements by their indices
    2) accessing is slower than vector/deque because elements are not stored 
        sequentially
    3) search = O(n)
*/

/*std::forward_list
Advantages:
    1) singly linked list version of std::list

Disadvantages:
    1) can only insert at the front
*/



// Associative Containers

/* std::set 
Advantages:
    1) search = O(log n)

Disadvantages:
    1) insertion = O(log n) is slower than sequential containers
*/

/*std::unordered_set 
Advantages:
    1) search, insertion, and removal = O(c)

Disadvantages:
    1) elements are not necessarily ordered
*/

/*std::multiset 
Advantages:
    1) can ontaine nonunique values

Disadvantages:
    1) insertion is slower than sequential containers
*/

/*std::unordered_multiset 
Advantages:
    1) can contain nonunique values
    2) search, insertion, and removal = O(c)

Disadvantages:
    1) elements are not necessarily ordered
*/

/* std::map 
Advantages:
    1) stores key-value pairs
    2) search = O(log n)

Disadvantages:
    1) insertion is slower than sequential containers
*/

/* std::unordered_map 
Advantages:
    1) search, insertion, removal = O(c)

Disadvantages:
    1) elements are not necessarily ordered
*/

/* std:multimap 
Advantages:
    1) can contain nonunique keys

Disadvantages:
    1) insertion is slower than sequential containers
*/

/*std::unordered_multimap
Advantages:
    1) can conatine nonunique keys
    2) search, insertion, removal = O(c)

Disadvantages:
    1) elements are not necessarily ordered
*/