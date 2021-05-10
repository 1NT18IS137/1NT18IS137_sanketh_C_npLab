
#include <stdio.h>
#include <conio.h>
#include <string.h>
void reciever(char*data)
{
    int i=0;
    int count=0;
    printf("recver side=");
    while(data[i]!='\0')
    {
         if(data[i]=='1')
        {
            count++;
            printf("%c",'1');
             if(count==5)
            {
                ++i;
                count=0;
            }
        }
        else if(data[i]=='0')
        {
            printf("%c",'0');
            count=0;
        }
        i++;
    }
}
void sender(char*data)
{
    int i=0;
    int count=0;
    char d[100];
    int k=0;
   
    while(i<=strlen(data))
    {
        if(data[i]=='1')
        {
            count++;
            d[k]='1';
        }
        if(count==5)
        {
            d[++k]='0';
            count=0;
        }
        if(data[i]=='0')
        {
            d[k]='0';
            count=0;
        }
        k++;
        i++;
    }
    d[i]='\0';
    printf("sender side=%s\n",d);
    reciever(d);
}

int main()
{
    char data[100]="10111111010111011";
    printf("orignl data=%s\n",data);
    sender(data);
    return 0;
}
