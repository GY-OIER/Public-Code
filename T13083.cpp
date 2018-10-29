//Code by Imakf

#include<cstdio>
#include<iostream>
int qpow(int x,int y){
    if(y==1)	return x;
    int b=qpow(x,y>>1)%7;
    if(y&1)	return b*b%7*x%7;
    return b*b%7;
}
int zh(std::string a){
    if(a=="Monday")	return 1;
    if(a=="Tuesday")	return 2;
    if(a=="Wednesday")	return 3;
    if(a=="Thursday")	return 4;
    if(a=="Friday")	return 5;
    if(a=="Saturday")	return 6;
    return 0;
}
int main(){
    std::string a;
    std::cin>>a;
    int c,b;
    scanf("%d%d",&c,&b);
    int ans=zh(a)+qpow(c,b);
    ans%=7;
    if(ans==1)	puts("Monday");
    if(ans==2)	puts("Tuesday");
    if(ans==3)	puts("Wednesday");
    if(ans==4)	puts("Thursday");
    if(ans==5)	puts("Friday");
    if(ans==6)	puts("Saturday");
    if(!ans)	puts("Sunday");
    return 0;
}
