void Delay_us(unsigned int dlys)
{				   
for(dlys*=12;dlys>0;dlys--);
}
void Delay_ms(unsigned int dlys)
{
for(dlys*=12000;dlys>0;dlys--);
}
void Delay_s(unsigned int dlys)
{
for(dlys*=12000000;dlys>0;dlys--);
}
void Delay(unsigned int dlys)
{
for(dlys*=12;dlys>0;dlys--);
}
