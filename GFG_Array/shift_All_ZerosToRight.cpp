/* #include <bits/stdc++.h>
 using namespace std;
 int main()
 {
     int n = 5;
     int arr[5] = {0, 2, 0, 9, 10};
     for (int i = 0; i < n; i++){
         if(arr[i]==0){
             for (int  j = i+1; j < n; j++)
             {
                 if (arr[j]!=0)
                 {
                     swap(arr[i],arr[j]);
                 }
                
             }
            
         }
     }
     cout<<"After operation "<<endl;
     for (int i = 0; i < n; i++)
     {
         cout<<arr[i]<<" ";
     }
    
     return 0;
 }
 */

/*   Here is naive solution of time O(n)*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,0,3,0,2};
    int n=5 ,count=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
        
    }
    cout<<"After operation "<<endl;
    for (int i = 0; i < n; i++)
     {
        cout<<arr[i]<<" ";
    }    
    return 0;
}
