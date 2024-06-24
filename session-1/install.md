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
