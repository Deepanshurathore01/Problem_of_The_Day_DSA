#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    }

   int x;
   cin>>x;

   bool found =0;
   for(int i=0;i<n;i++){
    if(arr[i]==x){
      found =1;
   } 
   }
   if(found){
    cout<<"Yes";
   }
   else{
    cout<<"No";
   }
 return 0;

}