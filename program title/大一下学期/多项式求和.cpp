#include <iostream>
using namespace std;
int a[10000020]={0};
int main()
{
    int n,sum=0;
    cin >> n;
    int i,j;
    for(i=2;i*i<=n;i++){
        if(a[i]==0){
            for(j=2*i;j<=n;j+=i){
                if(a[j]!=1){
                	//首次被筛掉 
                   a[j]=1;
                   sum++;  //sum是被筛掉的整数的个数 
                }

            }
        }
    }
    /*for(i=2;i<=n;i++){
    
    
    
    
        if(a[i]!=1){
            sum++;
        }
    }*/
    
    cout << n-sum-1 << endl;
    return 0;
}
