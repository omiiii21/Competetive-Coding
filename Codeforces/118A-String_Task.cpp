#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string str,str2,new_str;
    cin>>str;

    //Filtering out consonants
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='y'||str[i]=='Y')
            continue; 
        else
            str2.push_back(str[i]);
    }


    //Convert to lowercase
    for (int i = 0; i < str2.length(); i++)
    {
        if (str2[i]>=65 && str2[i]<=92)
            new_str.push_back(str2[i]+32);
        
        else
            new_str.push_back(str2[i]);

    }

    //Printing output
    for (int i = 0; i < new_str.length(); i++)
    {
        cout<<"."<<new_str[i];
    }
        
    return 0;
}