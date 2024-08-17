#include <stdio.h>                              

int main(int argc, char const *argv[])            
{
    printf("Hello world!");
    return 0;
}

/*
Processes in c compilation

1) Pre-processing  : Removes comments, expand macros and resolve # commands (literally copy pastes the stdio.h file content) --> Generates .i file
2) Compilation : Changes high level language to assembly language --> Generates .s
3) Assembly : Changes assembly language to binary --> Generates .o
4) Linker : Links all binary .o files (sil deta hai) --> Generates .exe

IS OE
 */