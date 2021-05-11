#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        int n,s,a;
        cin>>n>>s>>a;
        int sar=0,anu=0;
        while(n--)
        {
            string str="EXUINOX";
            string st;
            cin>>st;
            for(int i=0;i<7;i++)
            {
                if(st[0]==str[i])
                {
                    sar+=s;
                    break;
                }
                else if(i==6)
                    anu+=a;
            }
        }
        if(sar==anu)
           cout<<""
        else    printf("%s\n",sar>anu?"SARTHAK":"ANURADHA");
        
    }
    return 0;
}