/*void delay_ms(unsigned int dly)
{
	unsigned int i;
	for(dly;dly>0;dly--)
		for(i=122;i>0;i--);	
}
*/
void delay_ms(unsigned int dly)
{
	unsigned char i;
	for(dly;dly>0;dly--)
	{
		for(i=255;i>0;i--);	
		for(i=232;i>0;i--);	
	}
}


