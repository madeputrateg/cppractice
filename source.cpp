#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;


int main(){
    int M,N;
    string temp;
    scanf("%d %d",&N,&M);
    vector<pair<string,int>>data;
    for(int i =0;i<N;i++){
        cin >> temp;
        data.push_back(make_pair(temp,i+1));
    }
    for(int i=1;i<M;i+=2){
        for(int k=0;k<N;k++){
            data[k].first[i]=char(90-int(data[k].first[i])%65);
        }
    }
    sort(data.begin(),data.end());
    for(int i=0;i<N-1;i++){
        printf("%d ",data[i].second);
    }
    printf("%d",data[N-1].second);
    return 0;
}