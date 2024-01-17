#include<bits/stdc++.h>
using namespace std;
# define I INT_MAX

int cost[][8] = {{I,I,I,I,I,I,I,I},
                {I,I,25,I,I,I,5,I},
                {I,25,I,12,I,I,I,10},
                {I,I,12,I,8,I,I,I},
                {I,I,I,8,I,16,I,14},
                {I,I,I,I,16,I,20,18},
                {I,5,I,I,I,20,I,I},
                {I,I,10,I,14,18,I,I}};
int near[8] = {I,I,I,I,I,I,I,I};
int t[2][7];
                
                                    
                                    
                                    
                                    
                                    

int main(){
    int n = 7,min = I,r,c;
    for(int i =1;i <= n;i++){
        for(int j = i;j <= n;j++){
            if(cost[i][j] < min){
                min = cost[i][j];
                r = i;
                c = j;
            }


        }
    }

    t[0][0] = r;
    t[1][0] = c;
    near[r] = 0;
    near[c] = 0;

    for(int i = 1;i <= n;i++){
        if(near[i] != 0){
            if(cost[i][r] < cost[i][c]){
                near[i] = r;
            }
            else{
                near[i] = c;
            }
        } 
            

    }
    int k;
    for(int i = 1;i < n -1;i++){
        min = I;
        for(int j = 1;j <= n;j++){
            if(near[j] != 0 && cost[j][near[j]] < min){
                k = j;
                min = cost[j][near[j]];
            }
        }
        t[0][i] = k;
        t[1][i] = near[k];
        near[k] = 0;
        for(int j = 1;j <= n;j++){
            if(near[j] != 0 && cost[j][near[j]] > cost[j][k]){
                near[j] = k;
            }

        }
    }
    for(int i = 0;i < n - 1;i++){
        cout<<t[0][i]<<"->"<<t[1][i]<<" ";
    }
    
    return 0;
}