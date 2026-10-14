//check the given pan card number is valid or not 
//10 character alphanumeric string of the form AAAAA1111A
//forth charcter must be one of :A,B,C,F,G,H,L,J,P,T,K
//fifth character must be the same as the first character


#include<stdio.h>
#include<string.h>
int main()
{
    char para[100];
    char alphabets[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','0','1','2','3','4','5','6','7','8','9'};
    char forth[]={'A','B','C','F','G','H','L','J','P','T','K'};
    int i,l,j,k,count=0;
    printf("enter your paragraph::");
    gets(para);
    l=strlen(para);

    for(i=0;i<l;i++)
    {
        for(k=0;k<11;k++)
        {
            if(para[i+3]==forth[k])
            {
                for(j=0;j<26;j++)
                {
                    if(para[i]==alphabets[j] && para[i+4]==para[i])
                    {
                        count++;
                    }


                }
            }

        
        }

    }
    printf("%d",count);
    return count;
}