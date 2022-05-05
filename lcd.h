
#ifndef _LCD_H_
#define _LCD_H_ 1

#include <LPC214x.h>

void LcdInit();
void LcdWriteData(char ch);
void LcdCursorHome(void);
void LcdClear(void);
void LcdSetCursor(unsigned char pos);
void LcdCursorMode(unsigned char on);
void LcdPrint(const char *s);
void LcdPrintChar(char ch);




#endif

// eof

