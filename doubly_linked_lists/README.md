Doubly linked lists

Overview
	This project implements basic operations on doubly linked lists in C. A doubly linked list is a linear data structure where each node contains data and pointers to both the next node and the previous node in the sequence.

Structure Definition
	typedef struct dlistint_s
	{
		int n;
		struct dlistint_s *prev;
		struct dlistint_s *next;
	} dlistint_t;

Notes
- All node data is stored as integers
- Functions must handle edge cases like empty lists and out-of-bounds indices
- Compile with all warnings enabled to catch potential issues
- Use dpritf for error messages
