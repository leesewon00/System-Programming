# System Programming

## Overview
### Assignment 1
Goal  
◼ Analyzing the program dynamically using GDB  
 Analyze the operational process of its core functionalities to understand the program  
◼ Utilizing GDB in a client-server environment  

### Assignment 2
Interpose the write() function using Run-time interposition in Redis.  
 write() function’s prototype is ssize_t write(int, const void *, size_t).  
◼ The int is the file descriptor, fd.  
◼ The const void * is a buffer that stores data in bytes.  
◼ The size_t is the size of the buffer.  
 Implement your write() function.  
◼ Print student ID and student name.  
◼ Print the file descriptor value.  
◼ Print the address of the buffer.  
◼ Print the data stored in the buffer in bytes.  
◼ Call the real write() function defined in glibc so that the file I/O works properly.  
