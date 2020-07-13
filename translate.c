#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc,char *argv[])
{
    printf(1,"\n ----ADDRESS TRANSLATION----\n");
    int d = 123;
    printf(1,"\n Entered virtual address: %p\n",&d);
    printf(1,"\n Status from system call: %p",addresstranslate((uint)(&d)));
    exit();
}

