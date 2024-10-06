# Minishell

## Description
Minishell is a simple shell implementation designed to provide hands-on experience with system calls, job control, and signal handling in a Unix-like environment. This project aims to deepen understanding of operating systems and C programming.

## Features
- **Command Execution**: Execute built-in and external commands.
- **Job Control**: Manage foreground and background processes.
- **Signal Handling**: Properly handle signals such as Ctrl+C and Ctrl+Z.
- **Environment Management**: Modify and access environment variables.

## Built-in Commands
Minishell includes several built-in commands for basic shell functionality:

- **`cd`**: Change the current directory.
  - Usage: `cd [directory]`
  
- **`echo`**: Display a line of text or variables.
  - Usage: `echo [string]`

- **`pwd`**: Print the current working directory.
  
- **`export`**: Set environment variables.
  - Usage: `export [variable=value]`

- **`unset`**: Remove environment variables.
  - Usage: `unset [variable]`

- **`env`**: Display the current environment variables.

- **`exit`**: Terminate the shell.
  - Usage: `exit [status]`

## Installation
To build and run Minishell, follow these steps:

1. **Clone the repository:**
   ```bash
   git clone https://github.com/yourusername/minishell.git
   cd minishell

2. **Compile the project:**
   ```bash
   make

3. **Run the shell:**
   ```bash
   ./minishell

## Usage
To use Minishell, follow these steps:

1. **Start the shell by running:**
   ```bash
   ./minishell

2. **Enter commands directly into the shell prompt. For example:**
    - To change the directory:
       ```bash
       cd /path/to/directory
    - To print the current working directory:
       ```bash
       pwd
    - To display a string:
       ```bash
       echo "Hello, World!"
3. **To exit the shell, use:**
    - To change the directory:
       ```bash
       exit
