#include <iostream>
#include <string>

using namespace std;
string A="*-",B="-***",C="-*-*",D="-**",E="*",F="**-*",G="--*",H="****",I="**",J="*---"
,K="-*-",L="*-**",M="--",N="-*",O="---",P="*--*",Q="--*-",R="*-*",S="***",T="-",U="**-",V="***-",W="*--"
,X="-**-",Y="-*--",Z="--**",A1="*----",A2="**---",A3="***--",A4="****-",A5="*****",A6="-****",A7="--***",A8="---**",A9="----*",
A0="-----";


string morse(string ad){
    string bd,fir;
    int i=0,j=0;
    while (j<ad.size()){
        while (ad[i]!=' ' && i!=ad.size()){
            fir+=ad[i];
            i++;
        }
        if (fir==A)
            bd+="a";
        if (fir==B)
            bd+="b";
        if (fir==C)
            bd+="c";
        if (fir==D)
            bd+="d";
        if (fir==E)
            bd+="e";
        if (fir==F)
            bd+="f";
        if (fir==G)
            bd+="g";
        if (fir==H)
            bd+="h";
        if (fir==I)
            bd+="i";
        if (fir==J)
            bd+="j";
        if (fir==K)
            bd+="k";
        if (fir==L)
            bd+="l";
        if (fir==M)
            bd+="m";
        if (fir==N)
            bd+="n";
        if (fir==O)
            bd+="o";
        if (fir==P)
            bd+="p";
        if (fir==Q)
            bd+="q";
        if (fir==R)
            bd+="r";
        if (fir==S)
            bd+="s";
        if (fir==T)
            bd+="t";
        if (fir==U)
            bd+="u";
        if (fir==V)
            bd+="v";
        if (fir==W)
            bd+="w";
        if (fir==X)
            bd+="x";
        if (fir==Y)
            bd+="y";
        if (fir==Z)
            bd+="z";
        if (fir==A1)
            bd+="1";
        if (fir==A2)
            bd+="2";
        if (fir==A3)
            bd+="3";
        if (fir==A4)
            bd+="4";
        if (fir==A5)
            bd+="5";
        if (fir==A6)
            bd+="6";
        if (fir==A7)
            bd+="7";
        if (fir==A8)
            bd+="8";
        if (fir==A9)
            bd+="9";
        if (fir==A0)
            bd+="0";
        j++;;
        if (i!=ad.size() && ad[i]==' ' && ad[i+1]==' '){
            bd+=" ";
        }
        fir="";
        if (i<ad.size())
            i++;
    }
    return bd;
}


string text(string ad){
    string bd,fir;
    int i=0,j=0;
    while (ad[j]>ad.size()){

        if (ad[i]=='a' || ad[i]=='A')
            bd+=A;
        if (ad[i]=='b' || ad[i]=='B')
            bd+=B;
        if (ad[i]=='c' || ad[i]=='C')
            bd+=C;
        if (ad[i]=='d' || ad[i]=='D')
            bd+=D;
        if (ad[i]=='E' || ad[i]=='e')
            bd+=E;
        if (ad[i]=='f' || ad[i]=='F')
            bd+=F;
        if (ad[i]=='G' || ad[i]=='g')
            bd+=G;
        if (ad[i]=='h' || ad[i]=='H')
            bd+=H;
        if (ad[i]=='i' || ad[i]=='I')
            bd+=I;
        if (ad[i]=='J' || ad[i]=='j')
            bd+=J;
        if (ad[i]=='K' || ad[i]=='k')
            bd+=K;
        if (ad[i]=='l' || ad[i]=='L')
            bd+=L;
        if (ad[i]=='M' || ad[i]=='m')
            bd+=M;
        if (ad[i]=='N' || ad[i]=='n')
            bd+=N;
        if (ad[i]=='o' || ad[i]=='O')
            bd+=O;
        if (ad[i]=='p' || ad[i]=='P')
            bd+=P;
        if (ad[i]=='Q' || ad[i]=='q')
            bd+=Q;
        if (ad[i]=='r' || ad[i]=='R')
            bd+=R;
        if (ad[i]=='s' || ad[i]=='S')
            bd+=S;
        if (ad[i]=='t' || ad[i]=='T')
            bd+=T;
        if (ad[i]=='U' || ad[i]=='U')
            bd+=U;
        if (ad[i]=='v' || ad[i]=='V')
            bd+=V;
        if (ad[i]=='W' || ad[i]=='w')
            bd+=W;
        if (ad[i]=='X' || ad[i]=='x')
            bd+=X;
        if (ad[i]=='y' || ad[i]=='Y')
            bd+=Y;
        if (ad[i]=='z' || ad[i]=='Z')
            bd+=Z;
        if (ad[i]=='0')
            bd+=A0;
        if (ad[i]=='1')
            bd+=A1;
        if (ad[i]=='2')
            bd+=A2;
        if (ad[i]=='3')
            bd+=A3;
        if (ad[i]=='4')
            bd+=A4;
        if (ad[i]=='5')
            bd+=A5;
        if (ad[i]=='6')
            bd+=A6;
        if (ad[i]=='7')
            bd+=A7;
        if (ad[i]=='8')
            bd+=A8;
        if (ad[i]=='9')
            bd+=A9;
        bd+=" ";
        if (ad[i]==' ')
                bd+=" ";

        ++i;
        ++j;

    }
    return bd;
}

int main()
{
    string st;
    getline(cin,st);


    if (st[0]=='-' || st[0]=='*'){
        cout << morse(st);
    }
    else{
        cout << text(st);
    }

    return 0;
}


