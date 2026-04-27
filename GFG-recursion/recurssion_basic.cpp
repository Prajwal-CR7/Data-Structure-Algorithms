#include <iostream>
using namespace  std;
void  recurssive_fun(int n){
    if (n==0)
        return;
    cout<<n<<endl;
    recurssive_fun(n-1);    
    cout<<n<<endl;
}
int main(){
    int x;
    cin>>x;
    recurssive_fun(x);
    return 0;
}
/*   print from 1 to n using recrussion */


// #include <iostream>
// using namespace std;
// void fun(int n)
// {
// 	if(n == 0)
// 		return;
// 	fun(n - 1);
// 	cout<<n<<endl;
// }
// int main() {
// 	int x;
// 	cin>>x;
// 	fun(x);
// 	return 0;
// }


/* print n to 1 using recrussion*/
// #include <iostream>
// using namespace std;


// void fun(int n)
// {
// 	if(n == 0)
// 		return;
// 	cout<<n<<endl;
// 	fun(n - 1);
// }
// int main() {
// 	int x;
// 	cin>>x;
// 	fun(x);
// 	return 0;
// }