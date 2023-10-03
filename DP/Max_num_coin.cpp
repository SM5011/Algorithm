//maximum number of coin

#include<bits/stdc++.h>
using namespace std;
int main(){
    int c[]={1,5,7,9};
    int amount =12;
    int n= sizeof(c)/sizeof(c[0]);
    int mat[n+1][amount+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=amount;j++){
            if(j==0){
                mat[i][j]=0;
            }
            else if(i==0){
                mat[i][j]=j;
            }
            else if(c[i]>j){
                mat[i][j]=mat[i-1][j];
            }
            else{
                mat[i][j]=min(mat[i-1][j],1+mat[i][j-c[i]]);
            }
        }
    }
    cout<<"maximum number of coin :"<< mat[n][amount];
}