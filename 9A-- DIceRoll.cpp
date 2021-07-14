
// https://magnetdl.unblockit.uno/t/the-falcon/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int _hcf(int x,int y){
    if(x%y==0){
        return y;
        }
    else
        return _hcf(y,x%y);
    }


int main(){
    int Y,W,big,small,d,a;
    cin>>Y>>W;

    if(Y-W>0){
        big=Y;
        small=W;
        }
    else{
        big=W;
        small=Y;
    }

    d=6-big+1;

    a=_hcf(d,6);
    d=d/a;

    cout<<d<<"/"<<6/a<<endl;
    return 0;
}