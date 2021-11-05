



























#include<iostream>
using namespace std;

char a[10000];
int b[50];
int main (){
while(cin>>a ){
    int n=strlen(a),check1,check2=0;
    if(n<26){
        cout<<("-1\n");
        continue;
    }
    for (int i=0 ; i<n-25 ; i++ ) {
            check1=1;
            memset(b,0,sizeof(b));
            for (int j=i ; j<i+26 ; j++) {
                if (a[j]>='A' && a[j]<='Z') {
                    b[a[j]-'A']++;
                }
                if  (b[a[j]-'A']>=2) {
                    check1=0;
                    break;
                }
            }
            if (!check1) continue;
            check2=1;
            for (int j=i ; j<i+26 ; j++) {
                if (a[j]=='?') {
                    for (int k=0 ; k<26 ; k++) {
                        if (b[k]==0) {
                            a[j]=k+'A';
                            b[k]=1;
                            break;
                        }
                    }
                }
            }
            if (check2) break;
        }
        if (check2) {
            for (int i=0 ;i<n ;i++){
                if (a[i]=='?') printf("A");
                else cout<<(a[i]);
            }
            cout<<("\n");
        }else cout<<("-1\n");
    }
    return 0;
}
// #include<cstdio>
// #include<cstring>
// #include<cmath>
// #include<algorithm>
// #include<queue>
// using namespace std;
// char a[50010];
// int b[30];
// int main() {
//     while(scanf("%s",a)!=EOF) {
//         int n=strlen(a),flag1,flag2=0;
//         if (n<26) {
//             printf("-1\n");
//             continue;
//         }
        