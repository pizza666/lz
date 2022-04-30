/********************************************************
 * lz.c
 * *****************************************************
 * <description> 
 * https://github.com/pizza666/HOCC by Jan-Dirk Lehde
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


// unsigned char off = 0;
// unsigned char len = 0;
// unsigned char c = 0;
// unsigned char sb_len = 0;
// unsigned char *wptr;

// unsigned char find(tri* t)
// {
//     unsigned char i = 0;
//     t->len = 0;
//     t->off = 0;
//     t->c = 0;

//     // look the sb and look for the first word
//     for(i;i<sb_len;++i)
//     {

//         if(wptr[-i] == wptr[1]){
//             t->c = wptr[1];
//             t->off++;
//         }
//     }

//     if(t->c>0) return 1;
//     else return 0;
// };

// tri t;

// void lz77_compress()
// {
        
//     unsigned char *in = "cabracadabrarrarrad";

//     clrscr();

//     // init lb with the start of the 
//     wptr = in;

//     printf("%s",wptr);
//     printf("\n-------------------\n");

//     while(*wptr !=0) //  while Der Vorschaupuffer nicht leer ist; do
//     {
        
//         //  Durchsuche rückwärts das Wörterbuch nach der längsten übereinstimmenden
//         //                                      Zeichenkette mit dem Vorschaupuffer;
//         if(sb_len > 0 && find(&t))   //  if Eine Übereinstimmung wurde gefunden; then
//         {
//             cprintf("< %d , %d , %c > %d \r\n",t.off,t.len,t.c,sb_len );
//         //      Gib das Tripel (Versatz zum Rand des Wörterbuch,
//         //                      Länge der gefundenen Zeichenkette,
//         //                      erstes nicht übereinstimmendes Zeichen aus dem Vorschaupuffer) aus;
//               wptr = wptr + t.len +1;
//         } else  //  else
//         {
//             off = 0;
//             len = 0;
//             c = *wptr;
//             cprintf("< %d , %d , %c > %d \r\n",off,len,c,sb_len );
//             if(sb_len<SB) ++sb_len; // keep track of the SB fill
//             ++wptr;
//         }
//         //      Gib das Tripel (0, 0, erstes Zeichen im Vorschaupuffer) aus;
//         //      Verschiebe das Fenster um 1;
//         //  end if
//         // end while
//     }
// };

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