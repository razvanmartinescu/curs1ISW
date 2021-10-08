#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

	int n,d,nr,p;
int main()
{cout<<"Introduceti numarul a: ";cin>>n;
auto start = high_resolution_clock::now();
  for(d=2;d<=n/2;d++)
    {
    if(n%d==0)
           nr++;
    }
if(nr==0)
    cout<<"Numarul este prim"<<endl;
else
{


d=2;
while(n>1)
    {
        p=0;
        while(n%d==0)
        {
            p++;
            n=n/d;
        }
        if(p>0)
            cout<<d<<"^"<<p<<" ";
        d=d+1;
    }
auto stop = high_resolution_clock::now();
auto duration = duration_cast<microseconds>(stop - start);
cout<<endl;
cout <<"Timpul de rulare este "<< duration.count() <<" microsecunde"<< endl;
cout<<endl;
}
return 0;
}

