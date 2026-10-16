#define big(a,b) a > b ? a : b
#define swap(a,b) temp=a; a=b; b=temp;
void main()
{
int a=3,b=5,temp=0;
if ((3+big(a,b)) > b) swap(a,b);
printf("%d %d",a,b);
}
