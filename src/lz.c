/********************************************************
 * lz Unit Tests
 * *****************************************************
 * <description> 
 * https://github.com/pizza666/lz by Jan-Dirk Lehde
 *******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <lz4.h>
#include <string.h>
#include <zlib.h>
#include <cbm.h>
#include <c64.h>
#include "file.h"
#include "lz.h"

unsigned char lzbuffer[185];
unsigned char sbuffer[1000];


int main(void)
{   
    int i = 0;
    unsigned char* ptr;
    unsigned char ch;
    ptr = lzbuffer;

    clrscr();
    fileOpen("screenlz",2);
    fileRead(lzbuffer);
    fileClose(2);
    decompress_lz4(ptr+8, (unsigned char* ) 0x0400, 1000);

    for(;;);

    return 0;
}