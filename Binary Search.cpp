#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int element;
    cin>>element;
    int start=0;
    int end=n;
    
    while(start<=end){
        int middle=(start+end)/2;
        if(element==a[middle]){
            cout<<middle+1<<endl;
            break;
        }
        else if(element>a[middle]){
            start=middle+1;
        }
        else if(element<a[middle]){
            end=middle-1;
        }
    }

    return 0;
}
