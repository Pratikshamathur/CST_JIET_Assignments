#include<bits/stdc++.h>
using namespace std;
int floorsqrt(int x)
{   
	int i=1,a=1;
	while(x>=a)
	{
		i++;
		a=i*i;	
	}
	
	return(i-1);
}
int main()
{

	cout<<"floor square root of number:"<<floorsqrt(99);		
}
