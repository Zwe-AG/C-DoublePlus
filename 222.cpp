#include <iostream>
using namespace std;
int main()
{
int i,n,age,avg,sum=0,above=0,under=0;
cout<<"\n Enter total number of students"<<"";
cin>>n;
for (i=0,i<=n,i++)
{
cout<<"Enter the age of students"<<"";
cin>>age;
if(age>25)
above++;
else if (age<20)
under++;
sum+=age;
avd=sum\n;
}
cout<<"\n Average age of all students is"<<avg;
cout<<"\n number of students above 25"<<above;
cout<<"\n number of students under 20"<<under;
return 0;
}
