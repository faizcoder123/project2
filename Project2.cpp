#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
main()
{
	printf("-------------------------------------------------------------\n");
	printf("Press 1 to start\n");
 	int y;
 	scanf("%d",&y);
 	while(y==1){
 		
	 system("cls");
 
   system("color b1");
	
	
	int n;
	 printf("\n*******************************************\n");
	printf("\nNumber Of Process Are --3 P1 P2 P3 \n");
    	n=3;
 int vis[n];
 int i;
  printf("\n*******************************************\n");
    	printf("\nNumber Of Resources Are --3 A B C \n");
    	int res=3;
    	
 int j;
 int cur[n][n];

printf("----------------------------------------------------------\n");
 printf("\nEnter  The Total Number Of Max Resources A B C have:--\n");
 int maxresources[res];
 int k=65;
 for(i=0;i<res;i++){
 	printf("%c--",k);
	 scanf("%d",&maxresources[i]);
	k++;
 }
  printf("****************************************************************\n");
   	printf("\nEnter (instances) Allocated Resource Column To The Process :--\n");
    	for (i=0;i<n;i++) 
	{
		printf("P-ID--%d\n",i+1);
	        for(j=0;j<n;j++) 
		{
  			scanf("%d",&cur[i][j]);
        }
        printf("\n");
    }
 
 int max[n][n];
  printf("----------------------------------------------------------------------------\n");
    	printf("\nEnter Maximum Instances Of Resources Require---\n");
    	for (i=0;i<n;i++) 
	{printf("P-ID--%d \n",i+1);
        	for(j=0;j<n;j++) 
		{
            		scanf("%d",&max[i][j]);
        }
        printf("\n");
    }
 	int allocated[n];
    int c=0;
    int sum=0;
    	for (j=0;j<res;j++) 
	{
		sum=0;
        	for (i=0;i<n;i++) 
		{
            	 sum=sum+cur[i][j];
        	}
        	allocated[c++]=sum;
    }
 
 int avb[res];
    	for (i=0;i<res;i++) 
	{
	        avb[i]=maxresources[i]-allocated[i];
	}
 
int count=n;
int flag;
int s;
    int f=0;

    	for (i=0; i<n;i++) 
	{
        	vis[i]=1;
        
    }

		while(count>0) 
	{
		s=0;
        	for (i=0;i<n;i++) 
		{
            	if (vis[i]==1) 
		{
                flag=1;
                	for (j=0;j<res;j++) 
		{
            if (avb[j]<max[i][j]-cur[i][j] ) 
			{
                flag = 0;
                break;
                }
        }
if (flag==1) 
		{
	s = 1;
	for (j=0;j<res;j++) 
				{
            avb[j]=avb[j]+cur[i][j];
                }
			        
        count--;
					
	vis[i] = 0;
        break;
        }
        }
        }
        	if (s==0) 
		{
			f=1;
			 printf("------------------------------------------------------------------------------------\n");
            		printf("Processes are in unsafe state.\n");
            		break;
        } 
	}
	if(f==0){
		 printf("*********************************************************************************\n");
			printf("The process is in safe state\n");    	
	}
   fflush(stdin);
printf("\nPress 1 to restart 0 to exit\n");
scanf("%d\n",&y); 	
}

}
