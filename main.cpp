#include <iostream>
#include<string.h>
#include<vector>

using namespace std;

int main()
{
    //take any string
    string str="*one*two*three*four";
    string first=str;
    int pos 1=str.find("*");
    str.erase(pos 1,1);
    int pos3=str0find("*");
    string word2= str.substr(pos2,pos3);
    cout<<word2<<endl;
    str.erase(pos2 ,pos3);

    pos3=str.find("*");
    str.erase(pos 1,1);

    int pos4=str.find("*");
    string word3=str.substr(pos3 , pos4);
    cout<<word 3<<endl;
    str.erase(pos3,pos4);
    pos 4=str.find("*");
    str.erase(pos 1,1);
    int pos 5=str.find("*");
    string word 4=str.substr(pos4,pos5);
    cout<<word 4<<endl;
    str.erase(pos 4,pos 5);
    string finally= word 4"word3+""+word2+""+word1;
    cout<<"first string is :"<<first<<endl;
    cout<<"second string is :"<<finally<<endl;
    return 0;
}
