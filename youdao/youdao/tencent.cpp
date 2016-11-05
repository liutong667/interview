////
////  tencent.cpp
////  youdao
////
////  Created by 刘通 on 16/9/11.
////  Copyright © 2016年 liutong. All rights reserved.
////
//



///*
//两个字符串最长重复子串
//数组相隔最大和
//*/



//#include<iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int main(){
//    string strNum;
//    int delnums;
//    string res;
//    cin>>strNum>>delnums;
//    
//    vector<int> nums;
//    for (int i=0; i<strNum.length(); i++) {
//        nums.push_back(strNum[i]-'0');
//    }
//
//    
//    while(delnums){
//        vector<int>::iterator min=min_element(nums.begin(), nums.end());
//        nums.erase(min);
//        delnums--;
//    }
//    
//    for (int i=0; i<nums.size(); i++) {
//        cout<<nums[i];
//    }
//    cout<<endl;
//}






//#include<iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//void maxRes(string necklace){
//    
//    vector<int> posNums;
//    for (int i=0; i<necklace.length(); i++) {
//        if (necklace[i]=='A'||necklace[i]=='B'||necklace[i]=='C'||necklace[i]=='D'||necklace[i]=='E') {
//            posNums.push_back(i);
//        }
//    }
//    vector<int> resNums;
//    for (int i=1; i<posNums.size(); i++) {
//        resNums.push_back(posNums[i]-posNums[i-1]);
//    }
//    resNums.push_back(posNums.size()-posNums[posNums.size()-1]);
//    
//    vector<int>::iterator max=max_element(resNums.begin(), resNums.end());
//    int res=*max-1;
//    cout<<res<<endl;
//}
//
//
//
//int main(){
//    string str1;
////    cin>>str1;
////    maxRes(str1);
//    while (cin>>str1) {
//        maxRes(str1);
//    }
//    return 0;
//}




//
//#include<iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int numOf(int num)
//{
//    int count = 0;
//    while (num)
//    {
//        num = num & (num - 1);
//        count++;
//    }
//    return count;
//}
//int calSum(vector<int> &nums, int result, int m)
//{
//    int len = nums.size();
//    int bit = 1 << len;
//    int kinds=0;
//    for (int i = 1; i < bit; i++)
//    {
//        int sum = 0;
//        vector<int> tmp;
//        if (numOf(i) == m)
//        {
//            for (int j = 0; j < len; j++)
//            {
//                if ((i & 1 << j) != 0)
//                {
//                    sum += nums[j];
//                    tmp.push_back(nums[j]);
//                }
//            }
//            if (sum == result)
//            {
//                kinds++;
//            }
//        }
//    }
//    return kinds;
//}
//
//int main(){
//    int n,sum;
//    int allKinds=0;
//    vector<int> nums;
//    cin>>n>>sum;
//    int i=0,temp;
//    
//    while(i<n){
//        cin>>temp;
//        nums.push_back(temp);
//        i++;
//    }
//    
//    for (i=1; i<=n; i++) {
//        allKinds+=calSum(nums, sum, i);
//    }
//    
//    cout<<allKinds<<endl;
//    
//}



//
////5 15
////5 5 10 2 3
////4



////
////#include<iostream>
////#include <algorithm>
////#include <vector>
////using namespace std;
////
////int main(){
////    long long num;
////    int n,temp;
////    cin>>num>>n;
////    
////    vector<char> res;
////    while (num) {
////        temp=num%n;
////        if (temp>9) {
////            res.push_back(temp-10+'A');
////        }
////        else res.push_back(temp+'0');
////        num/=n;
////    }
////    for (int i=res.size()-1; i>=0; i--) {
////        cout<<res[i];
////    }
////    cout<<endl;
////    return 0;
////}
//


//
////#include<iostream>
////#include <algorithm>
////#include <vector>
////using namespace std;
////
////
////int main(){
////    long n,m;
////    vector<long> nums;
////    cin>>n>>m;
////    long num;
////    long temp;
////    int res=0;
////    for (int i=0; i<n; i++) {
////        cin>>num;
////        nums.push_back(num);
////    }
////    for (int i=0; i<nums.size()-1; i++) {
////        for (int j=i+1; j<nums.size(); j++) {
////            temp=nums[i]^nums[j];
////            if (temp>m) {
////                res++;
////            }
////        }
////    }
////    
////    cout<<res<<endl;
////    return 0;
////}
//




////#include<iostream>
////#include <algorithm>
////#include <vector>
////using namespace std;
////int bitSum(int x){
////    int sum=0;
////    while (x) {
////        sum+=x%10;
////        x/=10;
////    }
////    return sum;
////}
////
////int main(){
////    int a,b,c,cBitSum;
////    int temp;
////    vector<int> res;
////    cin>>a>>b>>c;
////    cBitSum=bitSum(c);
////    for (int i=a; i<=b; i++) {
////        temp=bitSum(i)-cBitSum;
////        res.push_back(abs(temp));
////    }
////    vector<int>::iterator min = std::min_element(res.begin(), res.end());
////    int pos=distance(res.begin(), min);
////    cout<<a+pos<<endl;
////}





//
//#include<iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int numOf1(int n)
//{
//    int num=0;
//    for (num=0; n; ++num)
//    {
//        n &= (n -1) ;
//    }
//    return num;
//}
//int main(){
//    int N;
//    cin>>N;
//    int num=numOf1(N);
//    int tempNum,i;
//    for (i=N+1;; i++) {
//        tempNum=numOf1(i);
//        if (tempNum==num) {
//            break;
//        }
//    }
//    cout<<i<<endl;
//    return 0;
//}
//



//#include<iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int numOf1(int n,vector<int> &nums)
//{
//    int num=0 ;
//    while (n>0)
//    {
//        if((n&1) ==1){
//            ++num;
//            nums.push_back(1);
//        }
//        else{
//            nums.push_back(0);
//        }
//        n>>=1;
//    }
//    return num;
//}
//
//int main(){
//    int N;
//    vector<int> nums;
//    cin>>N;
//    int num=numOf1(N,nums);
//    int i,flag=1;
//    for (i=0; i<nums.size(); i++) {
//        if (nums[i]==1&&nums[i+1]==0) {
//            nums[i]=0;
//            nums[i+1]=1;
//            flag=0;
//            break;
//        }
//    }
//    if (flag) {
////        nums.insert(nums.begin(),0);
//        for (i=N+1;; i++) {
//           int tempNum=numOf1(i,nums);
//            if (tempNum==num) {
//                break;
//            }
//        }
//        cout<<i<<endl;
//        return 0;
//    }
//    
//    int res=0;
//    for (i=nums.size()-1; i>=0; i--) {
//        res=res*2+nums[i];
//    }
//    cout<<res<<endl;
//    return 0;
//}