#include <stdio.h>

int main() {
    printf("STEP 1: INSTALL VISUAL STUDIO CODE\n");
    printf("- Download the installer from: https://code.visualstudio.com/download\n");
    printf("- Run the .exe and ensure 'Add to PATH' is checked during setup.\n\n");

    printf("STEP 2: INSTALL GCC COMPILER (VIA MSYS2)\n");
    printf("- Download MSYS2 from: https://www.msys2.org/\n");
    printf("- Run the installer (default: C:\\msys64).\n");
    printf("- Open 'MSYS2 UCRT64' terminal and run:\n");
    printf("  pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain\n\n");

    printf("STEP 3: CONFIGURE ENVIRONMENT VARIABLES\n");
    printf("- Search for 'Edit environment variables for your account' in Windows.\n");
    printf("- In 'Path', add a New entry: C:\\msys64\\ucrt64\\bin.\n\n");

    printf("STEP 4: SETUP VS CODE EXTENSIONS\n");
    printf("- Open VS Code and press Ctrl+Shift+X.\n");
    printf("- Search and install: 'C/C++' by Microsoft.\n\n");

    printf("STEP 5: EXECUTION\n");
    printf("- Create a file named 'main.c'.\n");
    printf("- Click the 'Play' button in the top right corner.\n");
    printf("- Select 'C/C++: gcc.exe build and debug active file'.\n\n");
    return 0;
}
