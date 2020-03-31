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
}
