struct node {
  int value; /* data stored in the node */
  struct node *next; /* pointer to the next node */
};

struct node *first = NULL;

struct node *new_node;

new_node = malloc(sizeof(struct node));

new_node->value = 10;

// insertion to the beginning example
new_node->next = first;
first = new_node;

// function to insert a new node into a linked list
struct node *add_to_list(struct node *list, int n) {

  struct node *new_node;
  new_node = malloc(sizeof(struct node));
  if (new_node == NULL) {
    printf("Error: malloc failed in add_to_list\n");
    exit(EXIT_FAILURE);
  }
  new_node->value = n,-
  new_node->next = list;
  return new_node;
}

// function for deleting from a linked list
struct node *delete_from_list(struct node *list, int n) {
  struct node *cur, *prev;
  for (cur = list, prev = NULL;
      cur != NULL && cur->value ! = n;
      prev = cur, cur = cur->next)
    ;
  if (cur == NULL)
    return list; /* n was not found */
  if (prev == NULL)
    list = list->next; /* n is in the first node */
  else
    prev->next = cur->next; /* n is in some other node */
  free{cur);
  return list;
}
