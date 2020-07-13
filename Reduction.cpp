#include<iostream>

int count=0;
int reduce(int n)
{
    if(n==0)
    {
         return count;
    }

    if(n%2==0)
    {
        count++;
        reduce(n/2);
    }
    else
    {
        count++;
        reduce(n-1);
    }

}

int main()
{
    int n;

    std::cin>>n;
    std::cout<<reduce(n);

    return 0;

}
