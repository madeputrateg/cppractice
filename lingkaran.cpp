#include <bits/stdc++.h>


using namespace std;


 
int main(){
    int N,M,N2,M2;
    bool inden=true, ver=true, hor=true,digkir=true,digkan=true;
    cin >> N >> M;
    int mat[N][M];
    for(int i=0;i<N;i++){
        for(int z=0;z<M;z++){
            cin >> mat[i][z];
        }   
    }
    cin >> N2 >> M2;
    int mat2[N2][M2];
    for(int i=0;i<N2;i++){
        for(int z=0;z<M2;z++){
            cin >> mat2[i][z];
        }   
    }
    if(N2==N && M2==M){
        for(int i=0;i<N2;i++){
            for(int z=0;z<M2;z++){
                if(mat[i][z]!=mat2[i][z]){
                    inden=false;
                    i=N2;
                    z=M2;
                    break;
                };
            }   
        }
        if(inden){
            cout << "identik" << endl;
            return 0;
        }
        for(int i=0;i<N2;i++){
            for(int z=0;z<M2;z++){
                if(mat[i][z]!=mat2[M2-z-1][N2-i-1]){
                    digkir=false;
                    i=N2;
                    z=M2;
                    break;
                };
            }   
        }
        if(digkir){
            cout << "diagonal kiri bawah" << endl;
            return 0;
        }
        for(int i=0;i<N2;i++){
            for(int z=0;z<M2;z++){
                if(mat[i][z]!=mat2[z][i]){
                    digkan=false;
                    i=N2;
                    z=M2;
                    break;
                };
            }   
        }
        if(digkan){
            cout << "diagonal kanan bawah" << endl;
            return 0;
        }
    }
    if(M==M2){
        for(int i=0;i<N2;i++){
            for(int z=0;z<M2;z++){
                if(mat[i][z]!=mat2[i][M2-z-1]){
                    ver=false;
                    i=N2;
                    z=M2;
                    break;
                };
            }   
        }
        if(ver){
            cout << "vertikal" << endl;
            return 0;
        }
    }
    if(N==N2){
        for(int i=0;i<N2;i++){
            for(int z=0;z<M2;z++){
                if(mat[i][z]!=mat2[N2-i-1][z]){
                    hor=false;
                    i=N2;
                    z=M2;
                    break;
                };
            }   
        }
        if(hor){
            cout << "horisontal" << endl;
            return 0;
        }        
    }
    cout << "tidak identik" << endl;
    return 0;
}