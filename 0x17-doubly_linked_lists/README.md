### General

-   What is a doubly linked list
-   How to use doubly linked lists
-   Understand and know how to implement the various operations (deletion, insertion, etc) with doubly linked lists
-   Start to look for the right source of information without too much help

### Explanation
![doubly linked list](https://github.com/ercudu75/alx-low_level_programming/assets/75138084/21730c33-ba9a-40f9-9e0d-df813bdacff1)


## More Info

```
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```
