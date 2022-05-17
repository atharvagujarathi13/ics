#include<bits/stdc++.h>
using namespace std;

//define power function for a^b mod P
long long int power(long long int a, long long int b, long long int P)
{
    if(b == 1)
    {
        return a;
    }
    else
    {
        return (((long long int)pow(a,b))%P);
    }
}

int main()
{
    long long int P,G,a,b,x,y,ka,kb;
    //here G,P are public keys
    //& a,b are private keys
    P=23;//prime no
    G=9;//primitive root for P
    
    //Alice choose private key a
    a=4;
    x=power(G,a,P);//gets generated key
    cout<<"x = "<<x<<"\n";
    
    //bob chose private key b
    b=3;
    y=power(G,b,P);//gets generated key 
    cout<<"y = "<<y<<"\n";
    
    ka = power(y,a,P);
    cout<<"Alice Secret key = "<<ka;
    cout<<endl;
    kb = power(x,b,P);
    cout<<"bob Secret key = "<<kb;
    return 0;
}
