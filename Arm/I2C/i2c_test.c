
//#include"lcd.h"
#include"i2c.h"
u8 rDat[30]="12345";

main()
{
	s32 i=0;
	i2c_eeprom_pagewrite(I2C_EEPROM_SA,0x00,4,rDat);
	i2c_eeprom_seqread(0x50,0x00,4,rDat);
	while(1);
}

