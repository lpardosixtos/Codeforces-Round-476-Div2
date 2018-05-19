#include <bits/stdc++.h>

using namespace std;

int main(void){

    int n, k;
    cin >> n >> k;
    string T[n];
    for(int i=0; i<n; i++){
        cin >> T[i];
    }
    int maxi=0;
    int curri=0, currj=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(T[i][j]!='#'){
                int ant=0;
                int ind=j-1;
                while(ind>=0 && T[i][ind]!='#'){
                    ant++;
                    ind--;
                }
                int sig=0;
                ind=j+1;
                while(ind<n && T[i][ind]!='#'){
                    sig++;
                    ind++;
                }
                int inRows=0;
                if(sig+ant+1>=k){
                    if(ant>=k-1) inRows=min(k, sig+1);
                    else inRows=min(sig+1-(k-1-ant), k-(k-1-ant));
                }
                int locTot=inRows;
                ant=0;
                ind=i-1;
                while(ind>=0 && T[ind][j]!='#'){
                    ant++;
                    ind--;
                }
                sig=0;
                ind=i+1;
                while(ind<n && T[ind][j]!='#'){
                    sig++;
                    ind++;
                }
                int inCols=0;
                if(sig+ant+1>=k){
                    if(ant>=k-1) inCols=min(k, sig+1);
                    else inCols=min(sig+1-(k-1-ant), k-(k-1-ant));
                }
                locTot+=inCols;
                if(locTot==2*k){
                    cout <<i+1 <<" " << j+1 << "\n";
                    return 0;
                }

                if(locTot>maxi){
                    maxi=locTot;
                    curri=i;
                    currj=j;
                }
            }
        }
    }
    cout << curri+1 << " " << currj+1 << "\n";

    return 0;
}
