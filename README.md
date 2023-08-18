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
| read_line.c | Function to read a line from stdint |
| split_line.c | Parses a line into an array of commands. |

## `Simple Shell `🐚

- The shell is a program that takes commands from the keyboard via the terminal, and gives them to the operating system to perform.
- The prompt is displayed each time a command has been executed
- This program displays a prompt and wait for user type a command
- When the user type EXIT, shell will end and exit the interface
- The program print the current environement when user type ENV
- The program quit when the user enter **CTRL + C**
- The user could stop the program using **CTRL  + D**


## `List of functions and system calls that we used`

* ```printf``` (man 2 printf)
* ```fprintf``` (man 1 fprintf)
* ```exit``` (man 2 exit)
* ```fork``` (man 1 fork)
* ```free``` (man 5 free)
* ```getline``` (man 1 getline)
* ```isatty``` (man 2 isatty)
* ```malloc``` (man 3 malloc)
* ```perror``` (man 3 perror)
* ```strtok``` (man 3 strtok)
* ```wait``` (man 2 waitpid)
* ```access``` (man 2 access)
* ```strcpy``` (man 2 strcpy)
* ```strcat``` (man 2 strcat)
* ```strtok``` (man 2 strtok)
* ```strcmp``` (man 1 strcmp)
* ```getline``` (man 3 getline)
* ```strlen``` (man 3 strlen)


## `Usage` :man_technologist:

How the shell actually works :
In interactive mode, the shell will display a prompt (`#prompt$ `) and wait for user input. Type a command and press Enter to execute it. To exit the shell, type `exit` and press Enter.

## `Requirements`
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

To compile the simple shell, run:, execute:
```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o simple_shell
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
#prompt$ ls -l
total 1
-rw-r--r-- 1 root root   279 AUG  2 05:36 AUTHORS

#prompt$
```
* **Run shell in non-interactive mode:**
```
root@ebd0ba4bd160:/holbertonschool-simple_shell# echo "/bin/ls" | ./simple_shell
AUTHORS


```

## `Resources`

* [*Unix shell*](https://intranet.hbtn.io/rltoken/McTQ6qvcqZZQlZtZdjdVnQ).
* [*Thompson shell*](https://intranet.hbtn.io/rltoken/FLRzIA3zLln5XV7erPHgsQ).
* [*Ken Thompson*](https://intranet.hbtn.io/rltoken/Pzs_A3Wo6LTHE8WX_uKiWg).

## `Flowchart of simple shell` :computer:



## `License` :busts_in_silhouette:
Authors :
-Idoudi Mokhtar  < 6181@holbertonstudents.com >
-Claudine Sillam < 6712@holbertonstudents.com >

**This project was made as part of the curriculum in HOLBERTON SCHOOL**

<p align="center">
  <a href="https://www.holbertonschool.com/"target="_blank"><img src="https://user-images.githubusercontent.com/97880395/181658846-6e76edce-7d56-4abe-8c62-228479bde436.png" </a>
        </p>
	
