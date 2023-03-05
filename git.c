#include<stdio.h>
#define hamim 60
#include<windows.h>
int main(){
int hour,minute,second;
printf("enter hour minute second : ");
scanf("%d%d%d",&hour,&minute,&second);
system("cls");
int h=0,m=0,s=0;
while(1){
        system("cls");
    printf("%.2d:%.2d:%.2d\n",h,m,s);
    if(h==hour&&m==minute&&s==second){
        break;
    }
    s++;
    Sleep(1000);
    if(s==hamim){
        m++;
        s=0;
    }
    if(m==hamim){
        h++;
        m=0;
    }
}
return 0;
}
