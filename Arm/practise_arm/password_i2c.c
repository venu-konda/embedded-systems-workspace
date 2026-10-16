#include"lcd.h"
#include"kpm.h"
#include"i2c.h"
#include <string.h>
u8 rDat[10]="12345";
u8 password[10],data[10];
main()
{
	s32 i=0;
	InitKPM();
	InitLCD();
	IODIR1|=1<<28;

	//while(1)
	
	//CmdLCD(0x01);
	
	/*	password[0]=KeyScan();
		CharLCD(password[0]);
		while((ColScan())==0);
		Delay_ms(100);
		while(1);
		*/
	
	for(i=0;i<10;i++)
	{ 
	//	StrLCD("enter");
		password[i]=KeyScan();
		CharLCD(password[i]);
		while((ColScan())==0);
		Delay_ms(100);
	//	CmdLCD(GOTO_LINE1_POS0+i);
	//	CmdLCD(0x80);	
		if((password[i]=='='))
		{
			password[i]='\0';
			break;
		}
	}
	
	i2c_eeprom_pagewrite(I2C_EEPROM_SA,0x00,6,rDat);
	i2c_eeprom_seqread(0x50,0x00,6,data);
	CmdLCD(0xc0);
//	if(KeyScan()=='=')
	
	if((strcmp((const char *)data,(const char *)password))==0)
	{		StrLCD("sucessful");

		}
	else
	{
		StrLCD("error");
		IOSET1=1<<28;
		}
	 

	while(1);
}

