
#include <bits/stdc++.h>

using namespace std;

const int N=100005;

int n;

int frame size;

int pages[N];

void optimal_page_replacement()

{
vector<int> fr;

int page faults=0;

for (int i = 0; i<n; i++) 
{ 
    if (fr[k] == pages[0]) 
if (k=-fr.size())

int k;

for (k = 0; k< fr.size(); k++)

break;

{

if (fr.size() < frame_size) fr.push back(pages[i]);

else

{

int index=i+1;

int res= -1, farthest index;

for (int i=0; 1 < fr.size(); I++)

intj;

for(j=index; j<n; j++)

{

if (fr[i]== pages(1)

if (> farthest). (

farthest;

res= 1;

}

break;

if (jwm n)

res=l;

break;
}

}

fr[res] = pages[i];

page_faults++;

fault\n";

cout<<"Reference to page "<<pages[i]<<" caused a page

else

cout<<"Reference to page "<<pages[i]<<" did not cause a page fault\n";

}

cout<<"\nTotal Page Faults: "<<page_faults;

int main()

{

cout<<"Number of Frames: ";

cin>>frame_size;

cout<<"Page Reference Stream Length: ";

cin>>n;

cout<<"Page Reference Stream: \n";

for(int i=0; i<n; i++)

cin>>pages[i];

optimal_page_replacement();

return 0;

}