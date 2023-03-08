#include<stdio.h>
#include<string.h>
void main()
{
	int tempvar=0;
    char fn[10],pat[10],temp[200];
    FILE *fp;
    printf("Enter file name You want to open\n");
    scanf("%s",fn);
    printf("Enter pattern you want to searched\n");
    scanf("%s",pat);
    fp=fopen(fn,"r");
    printf("Enter 1 if you want to find word what you want to search OR Enter 0 if you want to do reverse:-");
    scanf("%d",&tempvar);
    while(!feof(fp))
    {
        fgets(temp,100,fp);
        if(strstr(temp,pat) && tempvar){			
            printf("%s",temp);
        }
        else if(!(strstr(temp,pat)) && tempvar==0)
        	printf("%s",temp);
    }
fclose(fp);
}

