#include<stdio.h>
/*struct node
{
    int train;
    int Time;
    int seat;
}s;
*/
struct timee
{
    int first,second, third;
    
}t1,t2,t3;
int hari()
{
    struct timee s,c,m;
    int k;
    printf("enter destination");
printf("\n1.Salem \n2.Chennai \n3.Madurai");
    printf("\nenter option");
 scanf("%d",&k);
   switch(k)
  {
        case 1:
            train();
             break;
        case 2:
        train();
        break;
        case 3:
        train();
        break;
        
   }
   return 0;
}
int train()
{
int h,f,x;
struct timee t1={.first=5,.second=5,.third=5};
    struct timee t2={.first=4,.second=4,.third=4};
    struct timee t3={.first=3,.second=3,.third=3};
//printf("%d \n",t1.first);
  printf(" 3 trains are available\n");
     printf("\n1.10:00 -%d seats available\n2.12:00 -%d seats available\n3.16:00 -%d seats available",t1.first+t1.second+t1.third,t2.first+t2.second+t2.third,t3.first+t3.second+t3.third);
     printf("\nenter option");
     scanf("%d",&f);
     switch(f)
     {
         case 1:
              printf("enter class\n 1.first \n 2.second\n 3.third");
              printf("\nenter option");
              scanf("%d",&h);
              switch(h)
              {
                  case 1:
                         printf("enter no.of seats");
                  scanf("%d",&x);
                  
                      booking(x);
                  
                        t1.first-=x;
                  
        if(t1.first<0)
        {
            printf("\n%d waiting list",- t1.first);
        }
                        
                        break;
                  case 2:
                       printf("enter no.of seats");
                  scanf("%d",&x);
                  
                      booking(x);
                  
                        t1.second-=x;
                  
        if(t1.second<0)
        {
            printf("\n%d waiting list",- t1.second);
        }
                        
                        break;
                  case 3:
                        printf("enter no.of seats");
                  scanf("%d",&x);
                  
                      
                  booking(x);
                        t1.third-=x;
                  
        if(t1.third<0)
        {
            printf("\n%d waiting list",- t1.third);
        }
                        
                       break;
                }
                break;
            case 2:
              printf("enter class\n 1.first \n 2.second\n 3.third");
              printf("\nenter option");
              scanf("%d",&h);
              switch(h)
              {
                  case 1:
                  printf("enter no.of seats");
                  scanf("%d",&x);
                  
                      
                  booking(x);
                        t2.first-=x;
                  
        if(t2.first<0)
        {
            printf("\n%d waiting list",- t2.first);
        }
                        
                        break;
                  case 2:
                     printf("enter no.of seats");
                  scanf("%d",&x);
                  
                      booking(x);
                  
                        t2.second-=x;
                  
        if(t2.second<0)
        {
            printf("\n%d waiting list",- t2.second);
        }
                        
                        break;
                  case 3:
                        printf("enter no.of seats");
                  scanf("%d",&x);
                  
                      booking(x);
                  
                        t2.third-=x;
                  
        if(t2.third<0)
        {
            printf("\n%d waiting list",- t2.third);
        }
                        
                       break;
                }  
                break;
            case 3:
              printf("enter class\n 1.first \n 2.second\n 3.third");
              printf("\nenter option");
              scanf("%d",&h);
              switch(h)
              {
                  case 1:
                         printf("enter no.of seats");
                  scanf("%d",&x);
                  
                      booking(x);
                  
                        t3.first-=x;
                  
        if(t3.first<0)
        {
            printf("\n%d waiting list",- t3.first);
        }
                        
                        
                        break;
                  case 2:
                         printf("enter no.of seats");
                  scanf("%d",&x);
                  
                      booking(x);
                  
                        t3.second-=x;
                  
        if(t3.second<0)
        {
            printf("\n%d waiting list",- t3.second);
        }
                        
                        break;
                  case 3:
                      printf("enter no.of seats");
                  scanf("%d",&x);
                  
                      
                  booking(x);
                        t3.third-=x;
                  
        if(t3.third<0)
        {
            printf("\n%d waiting list",- t3.third);
        }
                        
                       break;
                } 
                break;
                return 0;
     }
    
}

void booking(int a)
{
    char name[100],address[200];
    int phoneno,ticketno;
    while(a)
    {
printf("enter your details");
printf("\nname:");
scanf("%s",name);
printf("\nphonenumber:");
scanf("%d",&phoneno);
printf("\naddress:");
scanf("%s",address);
a--;
}
}
int main()
{
    int k;
    //printf("enter desination");
    hari();
    printf("thank you");
    return 0;   
}
