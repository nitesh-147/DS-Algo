#include<bits/stdc++.h>
using namespace std;

void solve(){
int a,b;cin>>a>>b;
string ans;
if(a==1&&b==1)
cout<<"a"<<endl;

else{
    if(a%2==0){
       if(b>a/2)
       cout<<-1<<endl;

       else{
           for(int i=0;i<a/2;i++){
            if(i<b)
            ans.push_back((char)(i+97));
            else
            ans.push_back('a');
            
           }
           string temp=ans;
           reverse(ans.begin(),ans.end());
       
           cout<<ans+temp<<endl;
       }
    }

    else{
        if(b>(a/2+1))
        cout<<-1<<endl;

        else{
          for(int i=0;i<a/2;i++){
            if(i<b)
            ans.push_back((char)(i+97));
            else
            ans.push_back('a');
           }
           if(b==(a/2+1)){
            string temp;
            temp.push_back((char)(97+b));
            string temp2=ans;
            reverse(ans.begin(),ans.end());
           cout<<temp2+temp+ans<<endl;
           }
           else{
           string temp="a";
           string temp2=ans;
           reverse(ans.begin(),ans.end());
           cout<<temp2+temp+ans<<endl;
           }
           
        }
    }
}
}

int main()
{
int t;
cin>>t;
while(t--)
{
solve();
}
return 0;
}