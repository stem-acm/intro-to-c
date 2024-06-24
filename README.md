## What is Programming Again?

Programming is the process of giving a set of instructions to a computer to achieve a specific goal.

### Examples of Programs

Here are a few examples of programs that can be written:

- Find the nth prime number.
- Retrieve phone numbers available publicly online.
- Make a computer pop a notification when you spend too much time on social media.
- Your imagination is the limit.

## How Does It Work?

Computers understand only binary. Binary is a series of zeros and ones that encode the instructions to be followed by the computer.

Your code has to be converted to binary to be executed on your machine. Some languages are interpreted (converted line by line by an interpreter at runtime) and some are compiled (converted entirely by a compiler before execution).

## Types of Programming Languages

### High-Level Languages

A high-level language is designed to be easy for humans to read and write. It abstracts away the details of the computer's hardware, allowing programmers to focus on the logic and functionality of their code. Examples include:

- Python
- Java
- JavaScript

### Low-Level Languages

A low-level language is closer to machine code and provides little or no abstraction from a computer's hardware. Examples include:

- C
- C++
- Golang
- Rust

These languages are used when performance and efficiency are critical.

## Installation seps

Here are the step-by-step instructions for compiling C code on Windows, macOS, and Linux :

### Windows

1. Install a C compiler for Windows. One popular option is [MinGW](http://www.mingw.org/).
2. Open the Command Prompt (`cmd.exe`).
3. Navigate to the directory containing your C source file using the `cd` command.
4. Compile the source file using the following command:

   ```
   gcc -o outputfile.exe sourcefile.c
   ```

   Replace `outputfile.exe` with the desired name for your executable file, and `sourcefile.c` with the name of your C source file.
5. Run the compiled executable with:

   ```
   outputfile.exe
   ```

### macOS

1. Open the Terminal application.
2. macOS comes with the GCC compiler pre-installed. Verify the installation by running:

   ```
   gcc --version
   ```

3. Navigate to the directory containing your C source file using the `cd` command.
4. Compile the source file using the following command:

   ```
   gcc -o outputfile sourcefile.c
   ```

   Replace `outputfile` with the desired name for your executable file, and `sourcefile.c` with the name of your C source file.
5. Run the compiled executable with:

   ```
   ./outputfile
   ```

### Linux

1. Open the Terminal application.
2. Most Linux distributions come with GCC pre-installed. Verify the installation by running:

   ```
   gcc --version
   ```

3. If GCC is not installed, you can install it using your distribution's package manager. For example, on Ubuntu or Debian, run:

   ```
   sudo apt-get install build-essential
   ```

4. Navigate to the directory containing your C source file using the `cd` command.
5. Compile the source file using the following command:

   ```
   gcc -o outputfile sourcefile.c
   ```

   Replace `outputfile` with the desired name for your executable file, and `sourcefile.c` with the name of your C source file.
6. Run the compiled executable with:

   ```
   ./outputfile
   ```
