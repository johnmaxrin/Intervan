# Intervan

### v1.0.0-alpha

### Dynamic Memory Allocation in C

[https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/)

**malloc()**

```c
ptr = (cast-type*) malloc(byte-size)
```

**calloc()**

```c
ptr = (cast-type*)calloc(n, element-size);
```

**free()**

```c
free(ptr);
```

**realloc()**

```c
ptr = realloc(ptr, newSize);
```

### **Lexer**

A lexical analyzer — more commonly referred to as a lexer — is a software component that takes a string and breaks it down into smaller units that are understandable by a language. These smaller units are called lexical tokens or lexemes.

[https://medium.com/young-coder/how-i-wrote-a-lexer-39f4f79d2980](https://medium.com/young-coder/how-i-wrote-a-lexer-39f4f79d2980)

### **Recursive Descent Parsing**

A recursive descent parser is a top-down parser. This is one of the most simple forms of parsing. It is used to build a **parse tree from top to bottom and reads the input from left to right**.

### **Grammar**

E: int ? int

?: + | - | * | /
