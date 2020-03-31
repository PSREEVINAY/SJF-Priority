#include<stdio.h>
 #include<conio.h>
 int main()
 {
  printf("\n\n-------------------- SHORTEST JOB FIRST AND PRIORITY BASED ALGORITHM -----------------------\n\n");
  int q,i=0,j=0;
  printf("No of Process : ");
  scanf("%d",&q ); 
  double priority[q],avg_wt,avg_ta,bt[q],at[q],wt[q],tat[q], p[q], temp, ct[q],min,sum=0,sum2=0,wt_final, tat_final, wt_avg, tat_avg,max,sum3=0,sum4=0;
  double wt2_final, tat2_final, wt2_avg, tat2_avg;
  for(i=0;i<q;i++)
  {
  	printf("Arrival Time for P[%d] : ", i+1 );
    scanf("%lf", &at[i] );
    printf("Burst Time for P[%d] : ", i+1 );
    scanf("%lf", &bt[i]);
    p[i]=i+1;
  }
  printf("\n -------------- ENTERED TIME SLOTS --------------\n\n");
  printf("---------------------------------------\n");
  printf("| Process | Arrival Time | Burst Time |\n");
  printf("---------------------------------------\n");
  for(i=0;i<q;i++)
  {
    printf("  P[%0.0lf]           %0.0lf            %0.0lf      \n",p[i],at[i],bt[i]);
  }
    printf("---------------------------------------\n");
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  printf("\n\n--------PROCESS SCHEDULING ACCORDING TO ARRIVAL TIME --------\n");
   for(i=0;i<q;i++)
  {
    for(j=0;j<q;j++)
    {
      if(at[i]<at[j])
      {
        
        temp = bt[j];
        bt[j] = bt[i];
        bt [i] = temp;
	
	    temp = p[j];
        p[j] = p[i];
        p[i] = temp;


	    temp = at[j];
        at[j] = at[i];
        at[i] = temp;
      
      }
    }
  }
  printf("---------------------------------------\n");
  printf("| Process | Arrival Time | Burst Time |\n");
  printf("---------------------------------------\n");
  for(i=0;i<q;i++)
  {
    printf("   P[%0.0lf]           %0.0lf            %0.0lf       \n",p[i],at[i],bt[i]);
  }
    printf("---------------------------------------\n");
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  long int k = 1;
  double b_t = 0;
  for(j=0;j<q;j++)
  {
    b_t = b_t + bt[j];
    min = bt[k];
    for(i=k;i<q;i++)
    {
      if((b_t >= at[i])&&(bt[i]<min))
      {
        temp = bt[k];
        bt[k] = bt[i];
        bt[i] = temp;

        temp = at[k];
        at[k] = at[i];
        at[i] = temp;


        temp = p[k];
        p[k] = p[i];
        p[i] = temp;
      }
    }
    k++;
  }
  wt[0] = 0;
  for(i=1;i<q;i++)
  {
    sum += bt[i-1];
    wt[i] = sum - at[i];
    wt_final += wt[i]; 
  }
  wt_avg = wt_final/q;
  for(i=0;i<q;i++)
  {
    sum2 += bt[i];
    tat[i] = sum2 - at[i];
    tat_final += tat[i];
  }
  tat_avg=tat_final/q;
  ct[0] = bt[0];
  for(i=1;i<q;i++)
  {
    ct[i] = ct[i-1] + bt[i];
  }
  printf("\n\n -------------- PROCESS SCHEDULING ACCORING TO SJF [ BURST TIME ] --------------\n\n");
  printf("-----------------------------------------------------------------------------\n");
  printf("| Process | Arrival Time | Burst Time |  Waiting Time  |  Turn Around Time  |\n");
  printf("-----------------------------------------------------------------------------\n");
  for(i=0;i<q;i++)
  {
    printf("   P[%0.0lf]           %0.0lf            %0.0lf               %0.0lf                 %0.0lf           \n",p[i],at[i],bt[i],wt[i],tat[i]);
  }
    printf("-----------------------------------------------------------------------------\n");
  printf("\n\nAverage Turn Around Time for the SJF process scheduling : %lf",tat_avg);
  printf("\ntAverage Waiting Time for the SJF process scheduling : %lf\n\n",wt_avg);}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
  
 
