#include<stdio.h>
#include<string.h>
int main()
{
    char alphabets[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char string[10];
    int s,l;
    printf("The problem is that\nchange (a-d) (b-e)...so on in the given string\nbut the twist is that \nsome positions remains intact that will say by user\n");
    printf("-----------------------------------------------------------\n");
    printf("enter string::");
    gets(string);
    l=strlen(string);
    printf("enter number of blocked positions::");
    scanf("%d",&s);
    int k[s];

    printf("enter positions to be blocked::");
    for(int i=0;i<s;i++)
    {
        scanf("%d",&k[i]);
    }
    for(int i=0;i<l;i++)
    {
        int pos=0;
        for(int j=0;j<s;j++)
        {
            if( i+1==k[j])
            {
               pos=1;
            }
        }
        
        if(pos==1)
        {
            printf("%c",string[i]);
        }

        else
        {
            for(int z=0;z<26;z++)
            {
                    if(string[i]==alphabets[z])
                {
                        if(z>=23)
                        {   
                            printf("%c",alphabets[z-23]);
                        
                        }
                        else
                        {    
                            printf("%c",alphabets[z+3]);
                            
                        }
                }
            }
        }  
    }               
return 0;
}