//////
//////  jd.cpp
//////  jd
//////
//////  Created by 刘通 on 16/9/5.
//////  Copyright © 2016年 liutong. All rights reserved.
//////
////
////#include <iostream>
////#include <map>
////#include <vector>
////#include <algorithm>
////
////using namespace std;
////
////int main(){
////    while (1) {
////        map<string,int> shop;
////        int m,n;
////        scanf("%d %d",&m,&n);
////        vector<int> price;
////        int i=0;
////        while (i<m) {
////            int x;
////            scanf("%d",&x);
////            price.push_back(x);
////            i++;
////        }
////        i=0;
////        for (i=0; i<n; i++) {
////            string str;
////            cin>>str;
////            if (shop.find(str)==shop.end()) {
////                shop[str]=1;
////            }
////            else{
////                shop[str]+=1;
////            }
////        }
////        sort(price.begin(), price.end());
////        
////        multimap<int,string> shop2;
////        map<string,int>::iterator it=shop.begin();
////        cout<<shop.size()<<endl;
////        for (; it!=shop.end(); it++) {
////            shop2.insert(pair<int,string>(it->second,it->first));
////        }
////        int min=0,max=0;
////        i=0;
////        int j=(int)(price.size()-1);
////        map<int,string>::reverse_iterator it2=shop2.rbegin();
////        cout<<shop2.size()<<endl;
////        for (; it2!=shop2.rend(); it2++) {
////            cout<<it2->first<<"   "<<price[i]<<endl;
////            min=min+(it2->first)*price[i];
////            max=max+(it2->first)*price[j];
////            i++;
////            j--;
////        }
////        cout<<min<<" "<<max<<endl;
////
////        
////    }
////    
////}
////
//
////#include <iostream>
////#include <vector>
////using namespace std;
//
////int get(int price,vector<int> lucy)
////{
////    int resPrice=0;
////    lucy.push_back(0);
////    while (price) {
////        int num=(price%10);
////        price=price/10;
////     
////        
////        while (1) {
////            vector<int>::iterator it;
////            it=find(lucy.begin(), lucy.end(), num);
////            if (it==lucy.end()) {
////                resPrice=resPrice*10+num;
////                break;
////            }
////            else{
////                num++;
////            }
////        }
////        
////    }
////    
////    int finalRes=0;
////    while (resPrice) {
////        finalRes=finalRes*10+resPrice%10;
////        resPrice/=10;
////    }
////    
////    return finalRes;
////}
////
////int main(){
////    int a;
////    cin>>a;
////    vector<int> lucy;
////    lucy.push_back(2);
////     lucy.push_back(4); lucy.push_back(7); lucy.push_back(8);
////    cout<<get(a,lucy);
////    return 0;
////}
////1001
//
//
//#include <iostream>
//#include <map>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main(){
// 
//    int m,n;
//    cin>>m>>n;
//    vector<int> deskNums;
//    for (int i=0; i<m; i++) {
//        int num;
//        cin>>num;
//        deskNums.push_back(num);
//    }
//    sort(deskNums.begin(),deskNums.end());
//    
//    multimap<int,int> people;
//    for (int i=0; i<n; i++) {
//        int num,money;
//        cin>>num>>money;
//        people.insert(pair<int, int>(money,num));
//    }
//    
//    int resMoney=0;
//
//    multimap<int,int>::reverse_iterator it;
//    for (it=people.rbegin(); it!=people.rend(); it++) {
//        
//        vector<int>::iterator peoIt;
//        for (peoIt=deskNums.begin(); peoIt!=deskNums.end(); peoIt++) {
//            if (it->second<= *peoIt) {
//                resMoney+=it->first;
//                deskNums.erase(peoIt);
//                break;
//            }
//        }
//    }
//    cout<<resMoney<<endl;
//    return 0;
//}
//
//
//
////3 5
////2 4 2
////1 3
////3 5
////3 7
////5 9
////1 10
////
////
////res 20


#include<iostream>
using namespace std;

int strToNum(char *str,int *flag){
    if (str==NULL) {
        *flag=0;
        return *flag;
    }
    int num=0;
    while (*str!='\0') {
        if (*str-'0'>=0&&*str-'0'<=9) {
            num=num*10+(*str-'0');
            str++;
        }
        else{
            *flag=0;
            return *flag;
        }
    }
    return num;
}
int main(){
    char a[100],b[100];
    cin>>a>>b;
    int flag1=1,flag2=1;
    int num1=strToNum(a,&flag1);
    int num2=strToNum(b, &flag2);
    if (flag1==0 || flag2 == 0) {
        cout<<"error"<<endl;
        return 0;
    }
    cout<<num1+num2<<endl;
    return 0;
}

