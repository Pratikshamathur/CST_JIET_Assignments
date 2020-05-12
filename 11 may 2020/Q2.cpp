#include<bits/stdc++.h>
using namespace std;
int main()
{

vector<int>ar={1,2,3,5,6,8,9};
int i,j,p=0;
int mi=INT_MAX;
for(i=0;i<ar.size();++i)
{ 
for(j=i+1;j<ar.size();++j)
   {
	int p=ar[i]^ar[j];
	if(p<mi)
	{
		mi=p;
	}
 }
   }
cout<<"mininum xor values is "<<mi<<endl;
}
	
