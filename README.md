<div align="center">
  <h1>Simple Shell <img src="https://cdn-icons-png.flaticon.com/128/6821/6821173.png" width=60 align=center> </h1>
  <h6>
    <a href="https://github.com/felipevcc/holbertonschool-simple_shell#man-page-">Man Page</a>
    ·
    <a href="https://github.com/felipevcc/holbertonschool-simple_shell#compilation-">Compilation</a>
    ·
    <a href="https://github.com/felipevcc/holbertonschool-simple_shell#list-of-built-in-commands-">Commands</a>
    ·
    <a href="https://github.com/felipevcc/holbertonschool-simple_shell#usage-">Usage</a>
  </h6>
  <img src="https://img.shields.io/github/repo-size/felipevcc/holbertonschool-simple_shell?color=E1927F&labelColor=1a1e29&style=for-the-badge">
</div>

## Description <img src="https://cdn-icons-png.flaticon.com/128/1903/1903496.png" width=45 align=center>

Simple Shell is a command line interpreter developed in C language that emulates the most basic functionality of `sh`.

## Man page <img src="https://cdn-icons-png.flaticon.com/128/781/781103.png" width=50 align=center>

The man page is a file wich explains in detail how Simple Shell works. If you want see a full explanation of this function you can run our man page this way:
```
$ man ./man_1_simple_shell
```

## Flowchart <img src="https://cdn-icons-png.flaticon.com/128/3051/3051633.png" width=45 align=center>

<img src="https://i.imgur.com/f6YWz5o.jpg" alt="flowchart">

## Compilation <img src="https://cdn-icons-png.flaticon.com/128/8084/8084300.png" width=50 align=center>

clone the repository into new directory:

```bash
$ git clone https://github.com/Lazherhedfi/holbertonschool-simple_shell.git
```

To compile the program this command has to be executed:
```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```
To run the shell is like this:
```bash
$ ./hsh
```

## List of built-in commands <img src="https://cdn-icons-png.flaticon.com/128/868/868684.png" width=45 align=center>

This list is of the built-in commands, apart from those found in the PATH.

| Command  |            Description           |
| -------- |:---------------------------------|
| env      | Displays the current environment |
| exit     |   Causes the shell to terminate  |

## Usage <img src="https://cdn-icons-png.flaticon.com/512/3123/3123008.png" width=50 align=center>

The shell can be used in interactive or non-interactive mode.
The interactive mode is how the shell is normally used, the executable file is run and we can write commands, here is an example:
```
$ ./hsh
hsh$ ls
file1 file2 directory/
hsh$ pwd
/home/user/simple_shell/
hsh$ echo hello_world
hello_world
hsh$ exit
$
```

In the non-interactive mode you pass the command to the executable file with a pipe operator, as shown in the following example:
```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2

$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
```

## About the Developers

We are passionate developers committed to delivering efficient solutions. Omar and Lazher bring a blend of creativity and technical expertise to every project. Connect with us on LinkedIn and GitHub.

## Project Description

This Simple Shell project aims to provide users with a user-friendly command-line interface, enabling them to execute commands efficiently. With a focus on simplicity and functionality, the Shell offers both default and custom command execution capabilities. Our journey in developing this project involved overcoming various challenges, from ensuring seamless command execution to enhancing user experience through error handling and documentation.

## Development Journey

Our development journey began with conceptualizing the core functionalities of a Shell and identifying key features to implement. We iteratively built and tested the Shell, refining its functionality and usability with each iteration. One of the most challenging aspects was designing a robust command execution mechanism that handles both default and custom commands seamlessly. Additionally, documenting the project effectively to guide users through installation and usage was a priority.

## Future Enhancements

While our Simple Shell project currently fulfills basic command execution requirements, we aim to enhance its capabilities further. Planned enhancements include support for additional command-line utilities, improved error handling, and optimization for better performance. We are committed to continuously improving and evolving the Shell to meet the evolving needs of our users.

Feel free to explore the project repository and contribute to its development journey! Your feedback and contributions are invaluable as we strive to create a more efficient and user-friendly command-line interface.

# Authors <img src="https://cdn-icons-png.flaticon.com/128/2463/2463510.png" width=50 align=center>

* Omar Elati <github.com/OmarElati>
* Lazher Hedfi <github.com/Lazherhedfi>

> Project developed during the [Holberton School](https://www.holbertonschool.com/) program.
