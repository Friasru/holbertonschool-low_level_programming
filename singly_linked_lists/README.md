Singly Linked lists
Overview
	This project implements basic operations on singly linked lists in C. A singly linked list is a linear data structure where each node contains data and a pointer to the next node in the sequence

Structure Definition
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

Notes
- all strings in the list are dynamically allocated
- The len field stores the lenght of the string for efficiency
- Functions should be handle edge cases like empty lists and NULL stringhs
- Compile with all warnings enabled to catch potential issues
