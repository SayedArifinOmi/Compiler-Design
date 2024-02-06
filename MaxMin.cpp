#include<iostream>
using namespace std;

int main()
{
    int a[]={1,2,3,4,5};
    int i, maximum, minimum;
    minimum=a[i];
    maximum=a[i];
    for(i=0;i<5;i++){
        if(minimum>a[i])
            minimum=a[i];
        else if(maximum<a[i])
            maximum=a[i];
    }

    cout<<maximum<<endl;
    cout<<minimum<<endl;
}

