#include<stdio.h>
#include<math.h>

typedef struct data
{
        int x;
        int y;
        int z;
}a;
int main()
{
        a v1,v2,v3;
        scanf("%d",&v1.x);
        scanf("%d",&v1.y);
        scanf("%d",&v1.z);
        scanf("%d",&v2.x);
        scanf("%d",&v2.y);
        scanf("%d",&v2.z);
        float d=(pow((v1.x-v2.x),2))+(pow((v2.y-v1.y),2))+(pow((v1.z-v2.z),2));
        d=sqrt(d);
        printf("distance=%f\n",d);
}

