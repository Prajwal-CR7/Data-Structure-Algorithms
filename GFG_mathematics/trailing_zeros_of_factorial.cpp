// #include<iostream>
// using namespace std;
// int  recurSum(int n)
// {
//     int fact=1;
//     for (int i = 2; i <=n; i++)
//     {
//       fact=fact*i;
//     }
//     int count=0;
//     while(fact>0){
//        if(fact%10==0){
//            count+=1;
//            fact/=10;
//        }else{
//            break;
//        }
//    }
//    return count;

// }
// int main()
// {
//     int n ;
//     cin>>n;
//     cout << recurSum(n);
//     return 0;
// }
/* 
        In above example if we take bigger values of n live 15 or more than 15 then its not gonna store the whole factorial of n
        so we need to find efficient method for bigger number
         **FOLLOWING METHOD IS THE EFFICIENT METHOD ** 
         */
#include<iostream>
using namespace std;
int count_trailing_zero(int n){
    int res=0;
    for (int i = 5; i <= n; i=i*5)
    {
        res=res+n/i;
    }
    return res;  
}
int main(){
    int n;
    cin>>n;
    cout<<count_trailing_zero(n);
}
