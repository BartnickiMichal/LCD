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

int	main(void)
{
	delay(20000);
	delay(20000);
	delay(20000);
	delay(20000);

	LcdInit();
	LcdClear();
	LcdSetCursor(0x0);
	LcdPrint("Michal Bartnicki");

	delay(20000);
	delay(20000);

	while(1)
	{
		delay(1500000);
		LcdSetCursor(0x40);
		LcdPrint("                ");
		delay(1500000);
		LcdSetCursor(0x40);
		LcdPrint("180332 *");
	}

	return 0;
}
