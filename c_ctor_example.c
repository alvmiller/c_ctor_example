#include <stdio.h>

// https://phoxis.org/2011/04/27/c-language-constructors-and-destructors-with-gcc/

void begin_0(void) __attribute__((constructor (101)));
void end_0(void) __attribute__((destructor (101)));
 
void begin_1(void) __attribute__((constructor (102)));
void end_1(void) __attribute__((destructor (102)));
 
void begin_2(void) __attribute__((constructor (103)));
void end_2(void) __attribute__((destructor (103)));
 
int main (void)
{
	printf ("\nInside main ()");
}
 
void begin_0 (void)
{
	printf ("\nIn begin_0 ()");
}
 
void end_0 (void)
{
	printf ("\nIn end_0 ()");
}
 
void begin_1 (void)
{
	printf ("\nIn begin_1 ()");
}
 
void end_1 (void)
{
	printf ("\nIn end_1 ()");
}
 
void begin_2 (void)
{
	printf ("\nIn begin_2 ()");
}
 
void end_2 (void)
{
	printf ("\nIn end_2 ()");
}