// #include<iostream>
// #include<stack>
// using namespace std;
// int main()
// {   string str="himanshu";
//     stack<char>S1;
//     for (int i = 0; i <str.length(); i++)
//     {
//        S1.push(str[i]);
//     }
//    string ans="";
// //    cout<<S1.top();
//    while(!S1.empty())
//    {
//      ans.push_back(S1.top());
//      S1.pop();

//    }
//   cout<<ans;
    
//     return 0;
// }
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int arr[]={5,10,15,20,25}; 
    int len=sizeof(arr)/sizeof(arr[0]);
     
    stack<int>temp;
    for(int i=0;i<len;i++)
    {
        temp.push(arr[i]);
    }
    // cout<<temp.top();
    int i=0; //int arr1[10];
    while(!temp.empty())
    {
    //    arr1[i].push_back(temp.top());
    cout<<temp.top()<<endl;
       temp.pop();
       i++;
    }
}