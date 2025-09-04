#include <stdio.h>

unsigned char extractNibble(unsigned char reg, int pos) 
{
	if (pos!=0)
	{
		return ((reg>>4)&0x0F);
	}
	return (reg & 0x0F);
}	    
int main() 
{
	unsigned char reg;
	int pos;
	scanf("%hhu %d", &reg, &pos);
	printf("%d", extractNibble(reg, pos));
	return 0;
}
