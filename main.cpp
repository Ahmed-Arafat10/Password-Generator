#include <bits/stdc++.h>
typedef long long int ll;
#define s string
#define f(i,a,b) for(ll i=a;i<=b;i++)
std::s Generator(ll *sz){
std::s Capital_Alpha={"abcdefghijklmnopqrstuvwxyz"};
std::s Small_Alpha={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
std::s Numbers={"0123456789"};
std::s Symbols={"!@#$%^&*()_-+\=?<>,;\":'"};
std::s Pass_Symbols=Capital_Alpha+Small_Alpha+Numbers+Symbols;
std::s __Pass="";
srand((unsigned)time(0));
///O(n)
f(i,1,*(sz)){
     ll rand_index=1+(rand()%Pass_Symbols.size()-1);
    __Pass+=Pass_Symbols[rand_index];
}
return __Pass;
}
ll *sz= new ll;
char c;
int main(void)
{

    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
     HERE:
    std::cout<<"Please enter size of Password you want to generate : ";
   std::cin>>*sz;
    while(std::cin.fail()){
        std::cin.clear();
        std::cin.ignore();
       std::cin>>*sz;
    }
    std::cout << "Your New Password is : " << Generator(sz) <<"\n";
    H:
    std::cout<<"Generate Again ?? [Y/N] ";
    std::cin>>c;
    if(c=='Y') goto HERE;
    else if(c=='N') return 0;
    else{
    std::cout<<"Make sure that you have entered (Y) or (N) ";
        goto H;
    }
    return 0;
}
