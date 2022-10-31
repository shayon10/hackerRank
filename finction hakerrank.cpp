#include <bits/stdc++.h>

using namespace std;

int find_max(int num1,int num2,int num3,int num4){
    
   int x=num1;
   for (int i=1; i<4; i++) {
  
   
   if (x<num2) {
   x=num2;
   }else if (x<num3) {
   x=num3;
   } else if(x<num4){x=num4;
   };
   
     
       
}
return x;
}

int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int temp1;
    int x= find_max(a,b,c,d);
    cout<<x;
}
