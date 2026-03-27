# File I/O Project

## Description
This project focuses on learning C file input/output operations using system calls. You will learn how to work with file descriptors, read and write files, manage file permissions, and understand the differences between standard library functions and system calls.

## Learning Objectives
By completing this project, you will be able to:
- Create, open, close, read, and write files
- Understand and use file descriptors

## Requirements
- **Compiler**: gcc with flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **OS**: Ubuntu 20.04 LTS
- **Code Style**: Betty style guide
- **Allowed C functions**: `malloc`, `free`, `exit` only
- **Allowed syscalls**: `read`, `write`, `open`, `close`
- **Max functions per file**: 5
- **No global variables** allowed

### File Descriptors
- **0**: STDIN_FILENO (standard input)
- **1**: STDOUT_FILENO (standard output)
- **2**: STDERR_FILENO (standard error)

### Open Flags
- `O_RDONLY`: Read only
- `O_WRONLY`: Write only
- `O_RDWR`: Read and write
- `O_CREAT`: Create file if it doesn't exist
- `O_TRUNC`: Truncate file to zero length

## Author
Created as part of the Holberton School.
