#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main(){
int N,X;
cin>>N>>X;
int W[1000];

for (int i=0;i<N;i++){
    cin>>W[i];
}
pair<double,int> C[1000];

for (int i=0;i<N;i++){
    cin>>C[i].first;
    C[i].first/=W[i];
    C[i].second=i;
}
 
sort(C,C+N,greater<pair<double,int>>());
float total=0;
for(int i=0;i<N;i++){
    int beras=C[i].second;
    int stok=W[beras];
 for(int j=0;j<stok;j++){
    if (X>0){
        total+=C[i].first;
        X-=1;
    } 
    else break;
 }
 }
cout<<fixed<<setprecision(5)<<total<<endl;
return 0;
}
