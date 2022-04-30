#ifndef _LZ_H
#define _LZ_H

#define SB 7
#define LB 6

typedef struct tri
{
    unsigned char off;
    unsigned char len;
    unsigned char c;
}tri;

unsigned char find(tri* t);

#endif