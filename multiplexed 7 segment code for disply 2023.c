#include <AT89S52.h>
#define DATA P0
#define DIGIT P1
const char code[11]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
void wait(int);
void main()
{
DATA=0xFF;
DIGIT=0x0F;
while(1)
{
DATA=code[2];
DIGIT=0x07;
wait(5);
DIGIT=0x0F;
DATA=code[0];
DIGIT=0x0B;
wait(5);
DIGIT=0x0F;
DATA=code[2];
DIGIT=0x0D;
wait(5);
DIGIT=0x0F;
DATA=code[3];
DIGIT=0x0E;
wait(5);
DIGIT=0x0F;

}
}

void wait(int c)
{
int i;
 for(i=0;i<c;i++)
 {}

 }
