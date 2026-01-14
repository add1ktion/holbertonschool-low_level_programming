# C - File I/O

- **[0. Tread lightly, she is near](./0-read_textfile.c)**

	- Write a function that reads a text file and prints it to the POSIX standard output.

    	- Prototype: ssize_t read_textfile(const char *filename, size_t letters);
    	- where letters is the number of letters it should read and print
    	- returns the actual number of letters it could read and print
    	- if the file can not be opened or read, return 0
    	- if filename is NULL return 0
    	- if write fails or does not write the expected amount of bytes, return 0


- **[1. Under the snow](./1-create_file.c)**

	- Write a function that returns the number of elements in a linked list_t list.

    	- Prototype: size_t list_len(const list_t *h);


- **[2. Speak gently, she can hear](./2-append_text_to_file.c)**

	- Write a function that adds a new node at the beginning of a list_t list.

    	- Prototype: list_t *add_node(list_t **head, const char *str);
    	- Return: the address of the new element, or NULL if it failed
    	- str needs to be duplicated
    	- You are allowed to use strdup


- **[3. cp](./3-cp.c)**

	- Write a function that adds a new node at the end of a list_t list.

    	- Prototype: list_t *add_node_end(list_t **head, const char *str);
    	- Return: the address of the new element, or NULL if it failed
    	- str needs to be duplicated
    	- You are allowed to use strdup
