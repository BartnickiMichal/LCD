/***********************************************************
	Test Wyswietlacza LCD alfanumerycznego

	Polaczenia:
        P0.16 to D4
        P0.17 to D5
        P0.18 to D6
        P0.19 to D7
        P0.20 to RS
        P0.21 to E
        CONTRAST TO Vc
        +5V TO LGT

 ***********************************************************/
#include <LPC214x.h>
#include "lcd.h"
int temp=0;
int sw;
void menu(int which_switch)
{
LcdClear();
if(which_switch==0)
{
LcdSetCursor(0x40);
LcdPrint("Menu0");

}
else if(which_switch==1)
{
	LcdSetCursor(0x40);
	LcdPrint("Menu1");
}
else if(which_switch==2)
{
LcdSetCursor(0x40);
LcdPrint("Menu2 *");

}

}
int	main(void)
{
	
	
	
	LcdInit();
	LcdClear();
	

	while(1)
	{
		
	sw=IOPIN0;
	/*	
		if(!(sw&(1<<2)))
		{
		LcdSetCursor(0x40);
		//LcdPrint("180332 *");
		temp++;
		}
		if(temp%2==1)
		{
		LcdSetCursor(0x40);
		LcdPrint("180332 *");
		delay(100000);
		
		}
		else
		{
		LcdSetCursor(0x40);
		LcdPrint("              ");
		delay(100000);
		}
		
		delay(100000);
		*/
		
		if(!(sw&(1<<2)))
		{
		temp++;
		if(temp>2)
		{
		temp=2;
		}
		
		
		}
		if(!(sw&(1<<3)))
		{
		temp--;
		
		if(temp<0)
		{
			temp=0;
		}

		}
		if(!(sw&(1<<5)))
		{
		temp=0;
		
		}
		menu(temp);
		delay(5000000);
		
		
	}

	return 0;
}
