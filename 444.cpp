#include <iostream>
using namespace std;
int main()

{
int i,mark;
float total=0.0,avg,perc;
cout<<'Enter marks of subjects\n';
for (i=1;i<=5,i++)
{
cin>> mark;
total+=mark;
}
avg=total/5;
perc=total/(5*100)*100;
cout<<"Total Marks="<<total;
cout<<"\n Average Marks ="<<avg;
cout<<"\n Percentage ="<<perc<<%;
return 0;
}
