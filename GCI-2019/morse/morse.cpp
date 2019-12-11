#include <iostream>
#include <string>

using namespace std;
string A="*-",B="-***",C="-*-*",D="-**",E="*",F="**-*",G="--*",H="****",I="**",J="*---"
,K="-*-",L="*-**",M="--",N="-*",O="---",P="*--*",Q="--*-",R="*-*",S="***",T="-",U="**-",V="***-",W="*--"
,X="-**-",Y="-*--",Z="--**",A1="*----",A2="**---",A3="***--",A4="****-",A5="*****",A6="-****",A7="--***",A8="---**",A9="----*",
A0="-----";


string morse(string ad){
    string bd="",fir="";
    int i=0,j=0;
    while (ad[j]>ad.size()){
        while (ad[i]!=' '){
            fir+=ad[i];
            ++i;
        }
        if (fir == A)
            bd+=A;

        ++j;
    }
    return bd;
}
string text(string ad){
    string bd;


    return bd;
}

int main()
{
    string st;
    getline(cin, st);
    if (st[0]=='-' || st[0]=='*'){
        cout << morse();
    }
    else{
        cout << text();
    }

    return 0;
}


