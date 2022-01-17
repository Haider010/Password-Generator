#include<bits\stdc++.h>
using namespace std;
int main(){
    cout<<"\n----------PASSWORD GENERATOR----------"<<endl;
    srand(time(NULL));
    int length_of_password;
    char passowrd[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T',
    'U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r',
    's','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9'};
    cout<<"\nENTER LENGTH OF PASSWORD : ";cin>>length_of_password;
    char passwordi[length_of_password];
    cout<<"\nYOUR PASSWORD IS : ";
    for (int i = 0; i < length_of_password; i++)
    {
        passwordi[i]=passowrd[rand()%62];
        cout<<passwordi[i];
    }
    return 0;
}