//A program to convert decimal to binary
#include<iostream>
using namespace std;

int main()
{
    int decimal, rem=0, arr[50], i, n, arrr[50];
    cout<<"Enter Decimal Number: ";
    cin>>decimal;

    for(int i=0; i<=50;i++)
    {
        rem=decimal%2;
        arr[i]=rem;
        decimal/=2;

        if(decimal==1)
        {
            arr[i+1]=1;
            n=i+1;
            break;
        }
    }
    i=n;
    cout<<"\nThe Binary Coded form of this Decimal Number is: "<<endl;
    for(int i=n; i<=n; i--)
    {
        cout<<arr[i]<<" ";
        if(i==0)
        break;
    }

    return 0;
}


