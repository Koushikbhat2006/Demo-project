/***************************ARRAYS*************************/
//all the programs in this tab will help understand arrays this is also the arrays notes
//all the problems from basics to advanced are written here this is enough to understand arrays
//remove comments to understand
#include<iostream>
using namespace std;
  /**************1)simple reading and executing the numbers************************************************************/
  /*int main()
{
  int n,i;
  cout<<"enter the number of elements"<<endl;
  cin>>n;
  int a[n];
  cout<<"enter the numbers in the array"<<endl;
  for(i=0;i<n;i++){
    cin>>a[i];
     }
 cout<<"the numbers in the array are"<<endl;
 for(i=0;i<n;i++){
     cout<<a[i]<<" ";
     }
}*/
/***********************2)executing the elements in reverse order*****************************************************/
/*int reversearray(int a[],int n){
    int i,start=0,end=n-1;
    while(start<end){
        swap(a[start],a[end]);
        start++;
        end--;
    }
return 0;
}
int main()
{
int n,i;
 cout<<"enter the number of elements"<<endl;
 cin>>n;
 int a[n];
 cout<<"enter the numbers in the array"<<endl;
 for(i=0;i<n;i++){
     cin>>a[i];
     }
 cout<<"elements in the reverse order are "<<endl;
reversearray(a,n);
for(i=0;i<n;i++){
     cout<<a[i]<<" ";
     }
    return 0;
}*/
/**************3)sum of all the elements in the array***************************************************************************/
/*int sumofelements(int a[], int n){
    int i,sum=0;
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    return sum;
}
int main()
{
 int i,n,ans;
 cout<<"enter the number of elements"<<endl;
 cin>>n;
 int a[n];
 cout<<"enter the numbers in the array"<<endl;
 for(i=0;i<n;i++){
 cin>>a[i];
 }
 ans=sumofelements(a,n);
 cout<<"the sum of all the elements in the array is "<<ans<<endl;
 return 0;
}*/
/*************4)biggest and smallest number in the array************************************************************************/
/*int main()
{
 int i,n,max,min;
 cout<<"enter the number of elements"<<endl;
 cin>>n;
 int a[n];
 cout<<"enter the numbers in the array"<<endl;
 for(i=0;i<n;i++){
 cin>>a[i];
}
max=min=a[0];
for(i=0;i<n;i++){
    if(a[i]>max){
        max=a[i];
    }
    if(a[i]<min){
        min=a[i];
    }
}
cout<<"teh biggest number in the array is "<<max<<" and the smallest number in the array is "<<min<<endl;
}*/
/*************5)showing thw positin of max and min number in the array*****************************************************************/
/*int main()
{
 int i,n,max,min,m=0,k=0;
 cout<<"enter the number of elements"<<endl;
 cin>>n;
 int a[n];
 cout<<"enter the numbers in the array"<<endl;
 for(i=0;i<n;i++)
 {
     cin>>a[i];
 }
 max=min=a[0];
 for(i=0;i<n;i++){
    if(a[i]>=max)
    {
        max=a[i];
        m=i+1;
    }
    if(a[i]<=min)
    {
        min=a[i];
        k=i+1;
    }
 }
 cout<<"teh biggest number in the array is "<<max<<" at "<<m<< " and the smallest number in the array is "<<min<<" at "<<k<<endl;
}*/
/*********************************************************6)Linear search***************************************************************/
/*int linearsearch(int a[],int s,int n){
    int i,m;
    for(i=0;i<n;i++)
    {
        if(a[i]==s)
        {
          m=i+1;  
          return i+1;
        }
    }
    return -1;
}

int main()
{
    int n,i,s;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the numbers in the array"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the number to be searched"<<endl;
    cin>>s;
    int result=linearsearch(a,s,n);
    if(result==-1)
    {
        cout<<"the number is not present in the array"<<endl;
    }
    else
    {
        cout<<"the number is present at "<<result<<endl;
    }
    return 0;
}*/
/**********************************7)unique number**********************/
int main(){
    int n,i,j,unique;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements"<<endl;
    for(i=0;i<n;i++){
      cin>>a[i];
    }
    
}
