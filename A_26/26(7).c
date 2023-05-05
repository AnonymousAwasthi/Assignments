#include<stdio.h>
#include<string.h>
#include<math.h>

struct time
    {
       int hr,min,sec;
    };
struct time time_diff(struct time t,struct time s);
int main()
{
   struct time t1={05,55,23},t2={03,24,56},t;
   t=time_diff(t1,t2);
   printf("%d:%d:%d",t.hr,t.min,t.sec);
}
struct time time_diff(struct time t,struct time s)
{
    struct time k;
    k.sec=abs((t.hr*3600+t.min+60+t.sec)-(s.hr*3600+s.min+60+s.sec));
    k.hr=k.sec/3600;
    k.sec%=3600;
    k.min=k.sec/60;
    k.sec%=60;
    return k;
}
