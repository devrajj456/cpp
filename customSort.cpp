// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// bool compare(int a,int b){
//     return a>b;
// }
// int main(){
//     vector<int>v={7, 5, 2, 1, 4, 3};
//     sort(v.begin(),v.end(),compare);

//     cout<<"Sorted vector: "<<endl;
//     for(auto num:v){
//         cout<<num<<" ";
//     }
//     cout<<endl;
// }

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool customSort(int a,int b){
    return a>b;
}
int main(){
    vector<int>v={1,5,8,9,2,6,9,6,2};
    sort(v.begin(),v.end(),customSort);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}