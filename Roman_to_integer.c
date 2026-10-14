#include<stdio.h>
#include<string.h>
int main()
{
    char str[7]={'I','V','X','L','C','D','M'};
    int value[7]={1,5,10,50,100,500,1000};
    char roman[20];
    int l,integer=0,current,next;
    printf("enter the string::");
    gets(roman);
    
    fflush(stdin);
    l=strlen(roman);
    for(int i=0;i<l;i++)
    {
        current=0;
        next=0;
        for(int j=0;j<7;j++)
        {
            if(roman[i]==str[j])
            {
                current=value[j];
            }
        }
        for(int j=0;j<7;j++)
        {
            if(roman[i+1]==str[j])
                next=value[j];
        }
        if(next>current)
        {   
            integer=integer+next-current;
            i++;
        }
        else
            integer=integer+current;
    }
    printf("integer=%d",integer);
    return 0;
    

}