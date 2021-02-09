#include<bits/stdc++.h>
using namespace std;

template <class X> void bubble(X *items, int count1) // count1 = number of items, X *items = pointer to array to be sorted
{
    register int a, b;
    X t;
    for(a =1; a<count1; a++){
        for(b= count1-1; b>=a; b--){
            if(items[b-1] > items[b]){
                //exchanging
                t = items[b-1];
                items[b-1] = items[b];
                items[b] = t;
            }
        }
    }
}

int main()
{
    int iarray[7] = {7, 5, 4, 3, 9, 8, 6};
    double darray[5]= {4.3, 2.5, -0.9, 100.2, 3.0};
    int i;

    cout<<"Here is unsorted integer array: ";
    for(i=0; i<7; i++)
        cout<<iarray[i]<<' ';
    cout<<endl;

    cout<<"Here is unsorted double array: ";
    for(i=0; i<5; i++)
        cout<<darray[i]<<' ';
    cout<<endl;


    bubble(iarray, 7);
    bubble(darray, 5);

    cout<<"Here is sorted integer array: ";
    for(i=0; i<7; i++)
        cout<<iarray[i]<<' ';
    cout<<endl;

    cout<<"Here is sorted double array: ";
    for(i=0; i<5; i++)
        cout<<darray[i]<<' ';
    cout<<endl;


    return 0;
}
