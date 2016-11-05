////
////  xiaomi.cpp
////  youdao
////
////  Created by 刘通 on 16/9/23.
////  Copyright © 2016年 liutong. All rights reserved.
////
//
//#include<iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//
//vector<int> strToNum(string str){
//    vector<int> resNum;
//    string numStr[]={"ZERO", "ONE", "TWO", "THREE", "FOUR","FIVE", "SIX", "SEVEN", "EIGHT", "NINE"};
//    vector<string> numArray(begin(numStr),end(numStr));
//    int tempNum;
//    for (int i=0; i<numArray.size(); i++) {
//        
//        int pos=(int)str.find(numArray[i]);
//        if (pos!=-1) {
//            tempNum=i;
//            resNum.push_back((tempNum+2)%10);
//            str=str.substr(0,pos)+str.substr(pos+numArray[i].length());
////            str=str.substr(pos+numArray[i].length());
//        }
//    }
//    
//    return resNum;
//}
//
//int main(){
//    int n;
//    int i=0;
//    string temp;
//    vector<string> strArray;
//    cin>>n;
//    while (i<n) {
//        cin>>temp;
//        strArray.push_back(temp);
//        i++;
//    }
//
//    vector<int> tempVec;
//    
//    for (i=0; i<strArray.size(); i++) {
//        tempVec=strToNum(strArray[i]);
//        sort(tempVec.begin(),tempVec.end());
//        for (int j=0; j<tempVec.size(); j++) {
//            cout<<tempVec[j];
//        }
//        cout<<endl;
//    }
//    
////    4
////    EIGHT
////    ZEROTWOONE
////    OHWETENRTEO
////    OHEWTIEGTHENRTEO
////    0
////    234
////    345
////    0345
//    
//    return 0;
//}

//#include<iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int main(){
//    string str;
//    cin>>str;
//    char temp;
//    string tempStr=str;
//    int res=0;
//    for(int i=0;i<tempStr.length();i++){
//        temp=tempStr[0];
//        tempStr.erase(tempStr.begin());
//        tempStr.append(&temp);
//        cout<<tempStr<<endl;
//        if (tempStr==str) {
//            res++;
//        }
//    }
//    
//    cout<<res<<endl;
//    return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//
//void make(vector<string> &res,int left,int right,char *buffer,int count)
//{
//    if(left<0||right<left)
//        return;
//    if (left==0 && right==0) {
//        string s(buffer);
//        res.push_back(s);
//    }
//    else{
//        if (left>0) {
//            buffer[count]='(';
//            make(res, left-1, right, buffer, count+1);
//        }
//        if (right>left) {
//            buffer[count]=')';
//            make(res, left, right-1, buffer, count+1);
//        }
//    }
//}
//
//vector<string> getRes(int count){
//    char* buffer=new char(count*2);
//    vector<string> res;
//    make(res, count, count, buffer, 0);
//    return res;
//}
//
//int main()
//{
//    int n;
//    while (cin>>n) {
//        vector<string> res=getRes(n);
//        for(int i=0;i<res.size();i++){
//            cout<<res[i]<<endl;
//        }
//        cout<<endl;
//    }
//   
//    
//    return 0;
//    
//}



//#include<iostream>
//#include<vector>
//using namespace std;
//
//
//
//int main()
//{
//    int arr[8]={101,-200,3,10,-4,7,2,-5};
//    
//    vector<int> arrVec(arr,arr+7);
//    int strat=0,end=0;
//    int temp=0;
//    int curSum=0;
//    int maxSum=0;
//    
//    for (int i=0; i<arrVec.size(); i++) {
//        if (curSum<=0) {
//            curSum=arrVec[i];
//            temp=i;
//        }
//        else{
//            curSum+=arrVec[i];
//        }
//        
//        if(curSum>maxSum){
//            strat=temp;
//            end=i;
//            maxSum=curSum;
//        }
//    }
//    
//    for (int j=strat; j<=end; j++) {
//        cout<<arrVec[j]<<" ";
//    }
//    
//    return 0;
//    
//}




// 质因数.cpp : 定义控制台应用程序的入口点。
//

#include<cmath>
#include<cstdlib>
#include<vector>
#include<iostream>
using namespace std;


vector<int> analyse(int n)
{
    vector<int> res;
    if(n == 2)
    {
        res.push_back(n);
        return res;
    }
    else if(n < 2)
    {
        cout<<"该数不可以分解质因素"<<endl;
        return res;
    }
    else
    {
        for(int i = 2;i <= sqrt(static_cast<double>(n));i++)
        {
            if(n % i == 0)
            {
                n = n/i;
                res.push_back(i);
                i--;
            }
        }
        res.push_back(n);
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    vector<int> numArr;
    int temp;
    int i=0;
    while (i<n) {
        cin>>temp;
        numArr.push_back(temp);
        i++;
    }
    
    for (int j=0; j<numArr.size(); j++) {
        temp=numArr[j];
        cout<<"Case "<<j+1<<": ";
        
        
        vector<int> res;
        res = analyse(temp);
        int num=res[0];
        int geshu=1;
        for (int i=1; i<res.size(); i++) {
            if (res[i]==num) {
                geshu++;
            }
            else{
                cout<<num<<" "<<geshu<<" ";
                num=res[i];
                geshu=1;
            }
        }
        cout<<num<<" "<<geshu<<" "<<endl;
    }
    
    return 0;
}