# C - Recursions

- **[0-puts_recursion.c](./0-puts_recursion.c)** - Write a function that prints a string, followed by a new line.

	_puts_recursion prints a string by calling itself on the next character until it reaches the end of the string.
It’s a great example for understanding the recursion call stack in C: each character is handled in a separate function call, and the function finishes by unwinding back through the previous calls once the end of the string is reached.

- **[1-print_rev_recursion.c](./1-print_rev_recursion.c)** - Write a function that prints a string in reverse.

	_print_rev_recursion prints a string in reverse by calling itself until it reaches the end of the string, then printing each character as the recursion unwinds.
It’s an excellent demonstration of how recursion naturally reverses the order of execution: the deepest calls return first, allowing you to process data backward without loops.

- **[2-strlen_recursion.c](./2-strlen_recursion.c)** - Write a function that returns the length of a string.

	_strlen_recursion calculates the length of a string by counting one character at each recursive call until it reaches the null terminator.
Each recursive return adds 1, building the total length as the function unwinds.
This is a simple yet powerful example of how recursion can replace iteration when processing strings in C.

- **[3-factorial.c](./3-factorial.c)** - Write a function that returns the factorial of a given number.

	factorial calculates the factorial of a number recursively by multiplying each number by the factorial of the one below it, until it reaches 0, which returns 1.
It demonstrates how recursion can replace loops in mathematical problems — and how to use a base case and error handling to control recursion safely.

- **[4-pow_recursion.c](./4-pow_recursion.c)** - Write a function that returns the value of x raised to the power of y.

	_pow_recursion calculates the power of a number recursively by multiplying the base x by the result of the same function with a decremented exponent y - 1.
The recursion stops when y reaches 0, returning 1.
It’s a clear example of how recursion can model repeated multiplication through a simple base case and a self-reducing problem.

- **[5-sqrt_recursion.c](./5-sqrt_recursion.c)** - Write a function that returns the natural square root of a number.tters of a string to uppercase.

	_sqrt_recursion finds the natural square root of a number using recursion.
It calls a helper function that tests each integer starting from 0 until it either finds one whose square equals the target or exceeds it.
This exercise shows how recursion can replace iteration by maintaining a counter through recursive parameters, and how to use helper functions to manage state cleanly.

- **[6-is_prime_number.c](./6-is_prime_number.c)** - Write a function that returns 1 if the input integer is a prime number, otherwise return 0.

	is_prime_number checks recursively whether a number is prime by testing potential divisors starting from 2 up to the square root of the number.
The recursion stops either when a divisor is found (not prime) or when the current divisor squared exceeds the number (prime).
This is an efficient example of recursion combined with mathematical optimization to reduce unnecessary checks.

- **[100-is_palindrome.c](./100-is_palindrome.c)** - Write a function that returns 1 if a string is a palindrome and 0 if not.

	is_palindrome checks recursively whether a string reads the same forwards and backwards.
It uses a helper function that compares characters from the start and end of the string, moving inward until either a mismatch is found (not palindrome) or all characters match (palindrome).
This is a clear example of recursion for two-pointer problems and how recursion can replace iterative loops.

- **[101-wildcmp.c](./101-wildcmp.c)** - Write a function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.
