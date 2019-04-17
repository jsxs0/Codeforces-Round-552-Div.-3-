# include<iostream>
using namespace std;
int main() 
{
   long long n,I,mx=-100,mn=100001,t;
   cin>>n;
   long long a[n];
   for(I=0;I<n;I++)
  {
  cin>>a[I];
  mn=min(mn,a[I]);
  mx= max(mx,a[I]);
}
  t = (mn+mx);
 
 
  if((t)%2==0)
{ 
  for(I=0;I<n;I++)
 {
   if((a[I]!=mn) &&(a[I]!=mx) && (a[I]!=(t)/2))
 { cout<<-1;
   return 0;
 }
 
 }
  cout<< mx- (t)/2;
}
 
else 
{
 
  for(I=0;I<n;I++)
  {
   if((a[I]!=mn )&&( a[I]!=mx) )
  {
   cout<<-1;
   return 0;
  }
 
  }
  cout<< mx- mn;
 
 } 
}
