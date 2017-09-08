#include<stdio.h>

int main()
{
char mainstr[10],substr[10],stratindex;
int pattern;
int mainlength,sublentgh,subindex,mainindex;

printf("Enter any String");
scanf("%s",&mainstr);

printf("Enter any Sub String for matching");
scanf("%s",&substr);
pattern=matchsubstring(mainstr,substr);

if(pattern!=-1)
printf("String is matched");
else
    printf("not match");

return 0;
}

int matchsubstring(char mainstr[],char substr[])
{
int mainlength=0,sublength=0,startindex=0;
int mainindex=0,subindex=0;

mainlength=strlen(mainstr);
sublength=strlen(substr);

//printf("%d%d",mainlength,sublength);

while(mainstr[mainindex]==substr[subindex])
{
    mainindex++;
    subindex++;

    if((mainindex<mainlength)&&(subindex<sublength))
        {
        continue;
        }
        else
        {
        break;
        }
}
    if(subindex==sublength)
    {
        return (startindex);
    }
    else
    {
        return -1;
    }
}
