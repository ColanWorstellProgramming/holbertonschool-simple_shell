![Shell](https://github.com/ColanWorstellProgramming/holbertonschool-simple_shell/blob/master/ill-be-bash-yavn8u.jpeg) <br>
# Simple Shell
****

## General Content

   sadasfasfasas `ahat is the Shell?
* How Do I compile it?
* Essential Functionalities of the Simple Shell
* List of useful commands
* List of allowed functions and system calls for this project
* Files
* Usage
* Contributing
* Autors
* License

## What is the shell?

Creating a simple shell that can accept input and run commands.
It is a command line interpreter, which takes the most basic commands and executes them. 

## How Do I compile it?

This shell works by compiling with versions of GCC 4.8.5 or later, it can be compiled
using 

`gcc -Wall -Werror -Wextra -pedantic *.c -o shell`


## Essential Functionalities of the Simple Shell:

> Displays a prompt "#cisfun$ " and waits for user input.\
> Runs all commands of type "executable program" (ls and /bin/ls).\
> Handles commands with arguments.\
> Handles the PATH global variable.\
> Handles The EOF (End Of File) condition.\
> Handles the Ctrl + C signal -> It doesn't exit the shell


## List of useful commands

* `cat` - prints and concatenates files to the standard output
* `cp` -copies a file into another file
* `grep` - helps to search for a file in a specific pattern
* `less` - will let you go backward and forward in the files
* `ls` - will list all files and directories in current working directory
* `mv` - helps to move one file into another file
* `pwd` - given you the current working directory


## List of allowed functions and system calls for this project
 - access (man 2 access)
 - chdir (man 2 chdir)
 - close (man 2 close)
 - closedir (man 3 closedir)
 - execve (man 2 execve)
 - exit (man 3 exit)
 - _exit (man 2 _exit)
 - fflush (man 3 fflush)
 - fork (man 2 fork)
 - free (man 3 free)
 - getcwd (man 3 getcwd)
 - getline (man 3 getline)
 - isatty (man 3 isatty)
 - kill (man 2 kill)
 - malloc (man 3 malloc)
 - open (man 2 open)
 - opendir (man 3 opendir)
 - perror (man 3 perror)
 - read (man 2 read)
 - readdir (man 3 readdir)
 - signal (man 2 signal)
 - stat (__xstat) (man 2 stat)
 - lstat (__lxstat) (man 2 lstat)
 - fstat (__fxstat) (man 2 fstat)
 - strtok (man 3 strtok)
 - wait (man 2 wait)
 - waitpid (man 2 waitpid)
 - wait3 (man 2 wait3)
 - wait4 (man 2 wait4)
 - write (man 2 write)



## Files

* `README.md` : Current file, contains information about this project.
* `shell.h` : Header file, contains all prototypes for funcitons used, as well as libriaries.
* `main.c`: Main file that uses most functions and executes them within this file.
* `ill-be-bash-yavn8u.jpeg`: Image in readme file.
* `command.c`: Parses commands.
* `Loop.c`: Run the shell command loop.
* `_execve.c`: This function checks for two conditions: fork() and execve()
* `parse.c`: File that creates function to tokenize an array of strings.
* `str.c`: Helper functions.
* `str2.c`: Helper functions.

## Usage

```c
# Declarations for Prototypes

```

## Contributing

Pull requests are welcome. For major changes, please open an issue first
to discuss what you would like to change.
Please make sure to update tests as appropriate.

## Author's

- Colan Worstell
- Manuel Zambrano

****
## License

##### MIT License
##### Copyright (c) [2022] [Colan Worstell] [Manuel Zambrano]
##### Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
##### The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

##### THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
