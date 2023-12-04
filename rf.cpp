
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string p;cin>>p;
    int k ; cin >>k;
    
    vector<vector<int>>grid(k,vector<int>(p.size(),0));
    int  t = 0;
    for ( int i = 0; i < p.size() ; i++){
        if ( i==0 && t < p.size()){

        for ( int j = 0; j < k ; j++){    
                grid[j][i]= p[t];
                t++;
        }
        }
        else if ( i % 2 != 0 && t < p.size()){
            for ( int j = k-2 ; j >=0; j--){
                grid[j][i]= p[t];
                t++; 
            }
        }
        else{
            if ( t <p.size()){

            
            for ( int j =1 ; j<k ;j++ ){
                grid[j][i] = p[t];
                t++;
            }
            }
        }
        
    }
    string output = "";
    for( int i = 0; i < k; i++){
        for ( int j =0; j < p.size() ; j++){
            output += grid[i][j];
        }
        
    }
    cout<<output<<endl;
}
