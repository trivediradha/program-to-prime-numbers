#include<iostream>
using namespace std;
bool checkPrime(int n);
int main()
{
    int n,i;
    bool flag=false;
    cout<<"Enter a positive integer:";
    cin>>n;
    for(i=2;i<=n/2;i++)
    {
        if(checkprime(i))
        {
            if(checkprime(n-i))
            {
                cout<<n<<"="<<i<<"+"<<n-i<<endl;
                flag=true;
            }
        }
    }
    if(!flag)
    cout<<n<<"can't be expressed as sum of two prime numbers:";
    return 0;
}
//Check prime number
bool checkprime(int n)
{
    int i;
    bool isPrime= true;
    if(n==0||n==1)
    {
        is prime=false;
    }
    else
    {
        for(i=2;i<=n/2;++i)
        {
            if(n%i==0)
            isprime=false;
            break;
        }
    }
}
return isprime;
}
}
    
            
        
    


