#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    string str;
    while(n--){
        cin>>str;
        (str.length()>10)?cout<<str[0]<<str.length()-2<<str[str.length()-1]<<endl:cout<<str<<endl;
    }
    return 0;
}
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string str, new_str;
    cin>>str;
    for (int i = 0; i < str.length(); i++)
    {
       if(str[i]!="+"){
           cin>>new_str;
       }
    }
    sort.(new_str.begin(),new_str.end());
    cout<<str[0];

    for (int i = 0; i < new_str.length(); i++)
    {
       cout<<"+"<<str[i];
    }
    return 0;
}