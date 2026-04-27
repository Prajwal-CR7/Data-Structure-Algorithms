#include <bits/stdc++.h>
#define TABLE_SIZE 13
#define PRIME 7
using namespace std;
class  DoubleHashing
{
    int* table;
    int curr_size;
public:
    DoubleHashing(){
    curr_size=0;
    table=new int[TABLE_SIZE];
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        table[i]=-1;
    }
        
    }
    bool isfull(){
        return (curr_size==TABLE_SIZE);
    }
    
    int hash1(int key){
        return (key%TABLE_SIZE);
    }
    int hash2(int key){
        return (PRIME-(key%PRIME));
    }

    void insert(int key){
        if (isfull())
        {
            return;
        }
        int index=hash1(key);

        if (table[index]!=-1 )
        {
            int index2=hash2(key);
            int i=1;
            while (1)
            {
                int newindex=(index +i*index2)%TABLE_SIZE;
                if (table[newindex]==-1)
                {
                     table[newindex]=key;
                     break;
                }
                i++;
                
            }
            
        }else{
            table[index]=key;   
        }
        curr_size++;
    }
     void search(int key){
        int ans1=hash1(key);
        int ans2=hash2(key);
        int i=0;
        while(table[(ans1+i*ans2)%TABLE_SIZE]!=key){
            if(table[(ans1+i*ans2)%TABLE_SIZE]==-1){
                cout<<key<<" key not found"<<endl;
                return;
            }
            i++;
        }
        cout<<key<<" key Found "<<endl;
    }
};

int main(){
    DoubleHashing mh;
    int a[]={3,24,38,34,33,2,78};
    int n=sizeof(a)/sizeof(a[0]);
    for (int i = 0; i < n; i++)
    {
        mh.insert(a[i]);
        cout<<a[i]<<"  INserted succesfully"<<endl;
       
    }
    mh.search(24);
    mh.search(2);
    mh.search(88);
    return 0;
}