#include iostream()
using namespace std;
int main()
{
int i,n,age, avg,sum=0,above=0,under=0;
cout<<"\n Enter total of students"<<"";
cin >>n;
for (i=1,i<=n;i++)
{
cout<<"Enter the age of students"<<"";
cin>>age;
if(age>25)
above++;
else if (age<20)
under++;
sum+=age;
avg=sum/n;
}
cout<<"\n Average age of all Students is"<<""<<avg;
cout<<"\n number of Students above 25"<<""<<above;
cout<<"\n number of students under 20"<<""<<under;
return 0
}
