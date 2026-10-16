#define VAL 10
int main()
{
#ifdef VAL
#undef VAL
#define VAL 100
#else
#define VAL 2000
#endif
printf("%d\n",VAL);
}

