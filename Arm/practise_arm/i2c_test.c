#include"lcd.h"
#include"kpm.h"
#include"i2c.h"
#include <string.h>
u8 rDat[30]="12345";
u8 password[10],data[10];
main()
{
	s32 i=0;
	InitLCD();
	InitKPM();
	for(i=0;i<10;i++)
	{
		password[i]=KeyScan();
		if((password[i]=='='))
		{
			password[i]='\0';
			break;
		}
	}
	i2c_eeprom_pagewrite(I2C_EEPROM_SA,0x00,4,rDat);
	i2c_eeprom_seqread(0x50,0x00,4,data);
	if((strcmp((const char *)data,(const char *)password))==0)
		StrLCD("sucessful");
	else
		StrLCD("error");
	
	while(1);
}

