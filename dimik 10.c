#include<stdio.h>
int main()
{
    /* current run rate = total run(r2)/seshhowa over
      required run rate = dorkari run((r1+1)-r2) / baki over
      */
    int T,i;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        double r1,r2,B;
        scanf("%lf %lf %lf",&r1,&r2,&B);
        double seshhowa_over =(300.0-B)/6.0;
        double baki_over = B/6.0;
        double current_run_rate = r2/seshhowa_over;
        double required_run_rate;
        if(r2>r1)
        {
            required_run_rate=0.00;
        }
        else{
            required_run_rate = (r1+1-r2)/baki_over;
        }
        printf("%.2lf %.2lf\n",current_run_rate,required_run_rate);

    }
}

