#include<stdio.h>
#include<stdlib.h>

typedef struct ach{
    char name[100];
    int result;
}ach;

int cmpup(const void *a,const void *b)
{
    return((ach*)a)->result-((ach*)b)->result;
}

int cmpdowm(const void *a,const void *b)
{
    return((ach*)b)->result-((ach*)a)->result;
}

int main()
{
    int n,i,upordowm;
    ach stu[1000];
    
    while(scanf("%d\n%d\n",&n,&upordowm)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%s %d",&stu[i].name,&stu[i].result);
        }
        switch(upordowm)
        {
        case 0:
            qsort(stu,n,sizeof(stu[0]),cmpdowm);
            for(i=0;i<n;i++)
            {
                printf("%s %d\n",stu[i].name,stu[i].result);
            }break;
         case 1:
            qsort(stu,n,sizeof(stu[0]),cmpup);
            for(i=0;i<n;i++)
            {
                printf("%s %d\n",stu[i].name,stu[i].result);
            }break;
            default:
                printf("ordering strategy imput error");
        }
    }
    return 0;
}