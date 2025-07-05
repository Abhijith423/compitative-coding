/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{   
    int w;
    printf("Enter weight");
    scanf("%d",&w);
    
if(w<0)
{
    printf("invalid time");
}
else if(w=0)
{
    printf("time estimated");
}
else if(w<2000)
{
    printf("time 25 minute");
}
else if(w=2001&&4000)
{
    printf("time 35 minutes");
}
else if(w=w>4000)
{
    printf("time is 45 minutes");
}
}
