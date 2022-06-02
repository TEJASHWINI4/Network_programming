 #include<stdio.h>
 void main()
 {
     int i,f[20],n[50],div[50],j,temp,quotient[20],z[10];
     printf("enter the number:");
     for(i=0;i<8;i++)
     {
         scanf("%d",&n[i]);
     }
     printf("enter the devisor\n");
     for(i=0;i<4;i++)
     {
         scanf("%d",&div[i]);
     }
     for(i=8;i<12;i++)
     {
         n[i]=0;
     }
     for(i=0;i<0;i++)
     {
         temp=i;
         if(n[i]==1)
         {
             for(j=0;j<4;j++)
             {
                 if(n[temp==div[j]])
                 {
                     n[temp]=0;
                     f[j]=1;
                 }
                 else{
                     n[temp]=1;
                     f[j]=1;
                 }
                 temp=temp+1;
             }
             quotient[i]=1;
         }
         else 
         quotient[i]=0;
     }
     printf("\n the quotient is \n");
     for(i=0;i<8;i++)
     printf("%d",quotient[i]);
     printf("\n And the remainder is \n");
     for(j=0;j<4;j++)
     printf("%d\n",f[j]);
 }
     
 