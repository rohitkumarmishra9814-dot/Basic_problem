#include<stdio.h>
#define max 100
typedef struct 
{
    int student_id;
    int m1;
    int m2;
    int m3;
    
}school;
int main()
{
    printf("----------------------STUDENT DIRECTORY----------------------");
    school std[max];
    int choice=1,size=0;
    int n;
    printf("enter the number of entries you want to add::");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
            
        printf("enter student id,mark1,mark2,mark3:");
        scanf("%d %d %d %d",&std[i].student_id,&std[i].m1,&std[i].m2,&std[i].m3);
        size++;
                
    }
    while(choice!=0)
    {
        printf("0.exit\n1.add\n2.update\n3.search\n4.topper\n5.id of failed students and number of passed students\n");
        printf("enter your choice(1/2/3/4/5/6/7/0)");
        scanf("%d",&choice);
        if (choice==0)
        {
            break;
        }
        if (choice==1)
        {
            int id=0;
            printf("enter id::");
            scanf("%d",&id);
            int found=0;
            for (int i=0;i<size;i++)
                {
                    if(id==std[i].student_id)
                    {
                        found=1;
                        break;
                    }
                }

            if(found==1)
                printf("exist\n");
            else
            {
                printf("enter student id,mark1,mark2,mark3 for add:");
                scanf("%d %d %d %d",&std[size].student_id,&std[size].m1,&std[size].m2,&std[size].m3);
                size++;
                printf("ADDED\n") ;               
            }
                
        }



        if(choice==2)
        {
            int id,found=0;
            printf("enter id to update::");
            scanf("%d",&id);
            for (int i=0;i<size;i++)
                {
                    if(id==std[i].student_id)
                    {
                        found=1;
                        id=i;
                        break;
                    }

                }
            if(found==0)
            {
                printf("not found\n");
            }
            else
            {
                printf("enter updated mark1,mark2,mark3::");
                scanf("%d %d %d",&std[id].m1,&std[id].m2,&std[id].m3);
                printf("UPDATED:\n");
            }
        }



        if(choice==3)
        {
            int id,found=0;
            float tp;
            printf("enter id to search:");
            scanf("%d",&id);
            for(int i=0;i<size;i++)
            {
                if(id==std[i].student_id)
                {
                    tp=(std[i].m1 + std[i].m2 + std[i].m3)/100;
                    printf("id=%d\ntotal percentage= %.2f\n",std[i].student_id,tp);
                    found=1;
                    break;
                }
            }
            if(found==0)
                printf("not found");
            
        }
        if(choice==4)
        {
            int high=std[0].m1+std[0].m2+std[0].m3;
            int pos=0;
            for(int i=1;i<size;i++)
            {
                int total=std[i].m1+std[i].m2+std[i].m3;
                if(high<total)
                {
                    high=total;
                    pos=i;
                }
                if(high==total)
                {
                    if(std[pos].student_id > std[i].student_id)
                    {
                      pos=i;  
                    }
                    
                    
                }

            }
        printf("topper id=%d\ntopper marks= %d\n",std[pos].student_id,high);
             
        }


        if(choice==5)
        {
            int one=0,count=0;
            for(int i=1;i<size;i++)
            {
                int total=std[i].m1+std[i].m2+std[i].m3;
                if(total<33)
                {
                    if(one==0)
                        printf("failed students id:");
                    printf("%d\n",std[i].student_id);
                }
                else
                    count++;        

            }
            printf("number of passed students:%d\n",count);
        }
    
    }
}