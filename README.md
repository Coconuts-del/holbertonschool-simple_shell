<p align="center">
  <img src="https://user-images.githubusercontent.com/124044887/234376390-71b16d1b-d8ae-49cf-9f5f-5fa52a350d0c.png"/>
        </p>





## `Description`:hand:
The shell manages the interaction between you and the operating system by prompting you for input, interpreting that input for the operating system, and then handling any resulting output from the operating system.
Shells provide a way for you to communicate with the operating system.
This is simply a recreation of a shell that takes user inputs (commands with arguements) and output accourntly
Basic loop of a shell :
1. Print input
2. Read a line from a standard input
3. Turn the command lines string into an executable program
4. Execute

## `Files contents` :card_index_dividers:

| Name | Description |
| ------------------------------ | -------------------------------------------- |
| AUTHORS | Contributors in this repository.|
| man_1_simple_shell | Manual of simple_shell. |
| shell.h | Header file program. |
| shell.c | The main function of the simple shell |
| new_procees.c | Function that creates a new process. |
| get_command_path.c | Searches for the command in the system's PATH and returns the command's path if found. |
| read_line.c | Function to read a line from stdin |
| split_line.c | Parses a line into an array of commands. |

## `Simple Shell `🐚

- The shell is a program that takes commands from the keyboard via the terminal, and gives them to the operating system to perform.
- The prompt is displayed each time a command has been executed
- This program displays a prompt and wait for user type a command
- When the user type exit, shell will end and exit the interface
- The program print the current environement when user type env
- The program quit when the user enter **CTRL + C**
- The user could stop the program using **CTRL  + D**


## `List of functions and system calls that we used`

* ```printf``` (man 3 printf)
* ```execve``` (man 2 execve)
* ```fprintf``` (man 3 fprintf)
* ```exit``` (man 2 exit)
* ```fork``` (man 2 fork)
* ```free``` (man 3 free)
* ```getline``` (man 3 getline)
* ```isatty``` (man 3 isatty)
* ```malloc``` (man 3 malloc)
* ```perror``` (man 3 perror)
* ```strtok``` (man 3 strtok)
* ```wait``` (man 2 wait)
* ```access``` (man 2 access)
* ```strcpy``` (man 2 strcpy)
* ```strcat``` (man 2 strcat)
* ```strtok``` (man 2 strtok)
* ```strcmp``` (man 2 strcmp)
* ```strlen``` (man 3 strlen)
* ```strdup``` (man 3 strdup)

## `Usage` :man_technologist:

How the shell actually works :
In interactive mode, the shell will display a prompt (`#prompt$ `) and wait for user input. Type a command and press Enter to execute it. To exit the shell, type `exit` and press Enter.

## `Requirements`
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

To compile the simple shell, run:, execute:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o simple_shell
```

This will create an executable named: ```simple_shell```

To run the simple shell in interactive mode, execute:
```bash
./simple_shell
```

To run the simple shell in non-interactive mode, execute:
```bash
echo "/bin/ls" | ./simple_shell
```

## `Examples`

* **Run shell in interactive mode:**

```
root@ebd0ba4bd160:/holbertonschool-simple_shell# ./simple_shell
root@77ecf37628fa:/holbertonschool-simple_shell# ls -l
total 60
-rw-r--r-- 1 root root   269 Aug 14 05:29 AUTHORS
-rw-r--r-- 1 root root  1034 Aug 23 06:42 get_command_path.c
-rwxr--r-- 1 root root  1726 Aug 23 07:46 man_1_simple_shell
-rw-r--r-- 1 root root   522 Aug 23 02:11 new_process.c
-rw-r--r-- 1 root root   331 Aug 23 04:59 read_line.c
-rw-r--r-- 1 root root  4870 Aug 23 05:34 README.md
-rw-r--r-- 1 root root   945 Aug 23 04:59 shell.c
-rw-r--r-- 1 root root   420 Aug 22 01:24 shell.h
-rwxr-xr-x 1 root root 17904 Aug 23 06:39 simple_shell
-rw-r--r-- 1 root root   577 Aug 22 01:24 split_line.c   


```
* **Run shell in non-interactive mode:**
```
root@77ecf37628fa:/holbertonschool-simple_shell# echo "/bin/ls" | ./simple_shell

AUTHORS  get_command_path.c   man_1_simple_shell  new_process.c  read_line.c  README.md 
shell.c  shell.h  simple_shell   split_line.c
```



## `Resources`

* [*Unix shell*](https://intranet.hbtn.io/rltoken/McTQ6qvcqZZQlZtZdjdVnQ).
* [*Thompson shell*](https://intranet.hbtn.io/rltoken/FLRzIA3zLln5XV7erPHgsQ).
* [*Ken Thompson*](https://intranet.hbtn.io/rltoken/Pzs_A3Wo6LTHE8WX_uKiWg).

## `Flowchart of simple shell` :computer:

![Untitled Diagram](https://github.com/Coconuts-del/holbertonschool-simple_shell/assets/124044887/632a6c34-9a37-4123-8155-b4988874cb86)



## `License` :busts_in_silhouette:
Authors :
-Idoudi Mokhtar  < 6181@holbertonstudents.com >
-Claudine Sillam < 6712@holbertonstudents.com >

**This project was made as part of the curriculum in HOLBERTON SCHOOL**

<p align="center">
  <a href="https://www.holbertonschool.com/"target="_blank"><img src="https://user-images.githubusercontent.com/97880395/181658846-6e76edce-7d56-4abe-8c62-228479bde436.png" </a>
        </p>
	
