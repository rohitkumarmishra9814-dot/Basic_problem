
//CHARACTERS WITH HIGHER FREQUENCY MUST APPEAR FIRST 
//IF TWO DIFFERENT CHARACTER HAVE THE SAME FREQUENCY ,ARRANGE ALPHABHETICALLY
//EACH CHARACTER MUST APPER CONSECUTIVELY ACCORDING TO ITS FREQUENCY

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int frequency[100];
    int selection_shot(int [],int,char []);
    char cr;
    int i,j,k,count=0,l;
    printf("enter a string::");
    gets(str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        count=0;
        cr=str[i];
        for(j=0;j<l;j++)
        {
            if(str[j]==cr)
            {
                count++;
            }
        }
        frequency[i]=count;
    }
    selection_shot(frequency,l,str);
    
    for (i=0;i<l;i++)
    {
        printf("%c",str[i]);

    }

    return 0;

}

    int selection_shot(int array[],int size,char str[])
    {
        int a,b;
        int small,pos,string;
        for(a=0;a<size-1;a++)
        {
            small=array[a];
            string=str[a];
            pos=a;
            for(b=a+1;b<size;b++)
            {
                if(array[b]>small || (array[b]==small && str[b]<str[a]))
                {
                    small=array[b];
                    array[b]=array[a];
                    array[a]=small;

                    string=str[b];
                    str[b]=str[a];
                    str[a]=string;
                }
            }

        }
        return 0;
    }

    
