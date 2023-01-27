#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int t = 200;
    for(int i=1; i <=t ; i++){
        string in, ou;
        in = "00" + to_string(i) + ".in";
        ou = "00" + to_string(i) + ".out";
        while (in.size() > 6) {
            in.erase(0, 1);
            ou.erase(0, 1);
        }
        ofstream out(ou);
        ofstream inn(in);
        int n=rand()%10ll;//bu N soni generatsiya qilib beradi 
        inn<<n<<endl;// bu esa Bizning faylimizga sonni kiritadi 
        
        inn.close();
        out.close();
    }
    return 0;
}

