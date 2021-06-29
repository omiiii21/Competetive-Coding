#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string x,y="hello"; cin>>x;
    int j=0, count=0;

    for(size_t i=0; i<x.length();i++){
        if(x[i]==y[j]){
            count++;
            j++;
        }
        if (count==5){
            break;
        }
    }
    if (count==5){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }



    return 0;
}