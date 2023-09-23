printf project README file

1-Arguments are passed on the stack

2-The va_start function contains the 
code to initialize the va_list with the correct stack pointer. 
It must be passed the last named argument in the function declaration or it will not work.

3-va_arg uses this saved stack pointer and extract the correct amount of bytes 
for the type provided, and then modify ap so it points to the next argument on the stack.

4-va_end holds to pointer to the end of the stack

5-functions (va_start, va_arg and va_end) are implemented 
as preprocessor macros. The actual implementation also depends 
on the compiler, as different compilers can have different layout 
of the stack and how it pushes arguments on the stack.

Printf working principle

-Printf takes multiple arguments using vararg function.

-Printf creates an internal buffer for constructing output string.

-Now printf iterates through each characters of user string and copies 
the character to the output string. Printf only stops at %. % means there is an argument to convert. 
Arguments are in the form of char, int, long, float, double or string. 

-It converts it to string and appends to output buffer. If the argument is string then it does a string copy.

-Finally printf may reach at the end of user sting and it copies the entire buffer to the stdout file.



