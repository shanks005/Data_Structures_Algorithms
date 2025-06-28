#include <bits/stdc++.h>
using namespace std;

void quadraticRoots(int a, int b, int c) {
    int x,y;
    int D=b*b-4*a*c;
    if(D>0){
        x=floor((-b+sqrt(D))/(2*a));
        y=floor((-b-sqrt(D))/(2*a));
        cout<<x<<" "<<y;
    }
    else if(D==0){
        x=floor((-b/(2*a)));
        cout<<x<<" "<<x;
    }
    else if(D<0){
      cout<<"-1";
    }
  }
  int main(){
    int a,b,c;
    cin>>a>>b>>c;
    quadraticRoots(a,b,c);
    return 0;
  }
