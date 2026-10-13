//robot grid problem (-1 for )
#include<stdio.h>
int main()
{
    int x,y,pos=0;
    int n;
    printf("enter initial x coordinate =");
    scanf("%d",&x);
    printf("enter initial y coordinate =");
    scanf("%d",&y);

    printf("enter number of commands:");
    scanf("%d",&n);
    printf("commands\n -1=for 90 degree left\n -2=for 90 degree right\n(+ve) number =to move");

    int cmd[n];
    printf("enter the commands::");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&cmd[i]);
    }

    for(int i=0;i<n;)
    {
        if(cmd[i]<0)
        {
            if(pos==0)
            {
                    if(cmd[i]==-2)
                    {
                        i++;
                        pos=1;
                    }
                        
                    else if(cmd[i]==-1)
                    {
                        i++;
                        pos=2;
                    }
                
            }

            if(pos==1)
            {
                    if(cmd[i]==-2)
                    {
                        i++;
                        pos=3;
                    }
                        
                    else if(cmd[i]==-1)
                    {
                        i++;
                        pos=0;
                    }
                
            }


            if(pos==2)
            {
                    if(cmd[i]==-2)
                    {
                        i++;
                        pos=0;
                    }
                        
                    else if(cmd[i]==-1)
                    {
                        i++;
                        pos=3;
                    }
                
            }

            if(pos==3)
            {
                    if(cmd[i]==-2)
                    {
                        i++;
                        pos=2;
                    }
                        
                    else if(cmd[i]==-1)
                    {
                        i++;
                        pos=1;
                    }
                
            }
    

        }


        else
        {
            if(pos==0)
            {
                y=y+cmd[i];
                i++;
            }
            else if(pos==1)
            {    
                x=x-cmd[i];
                i++;
            }
            else if(pos==2)
            {    
                x+=cmd[i];
                i++;
            }
            else
            {    
                y=y-cmd[i];
                i++;
            }

        }
    }



    printf("the final position is (%d,%d)",x,y);
    return 0;

}