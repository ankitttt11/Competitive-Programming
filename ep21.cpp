#include<bits/stdc++.h>
using namespace std;
//*** pairs and vectors ***
// pair-c++ stl me ek class hai jo do values ko store krti hai
//kisi bhi 2 datatype ya container ka pair bna skte hai...
int main()
{
    pair<int,string>p;
    //To input value in pair...
    p=make_pair(2,"abcd");

    /*p=make_pair(2,"abcd");
    cout<<p.first<<" "<<p.second<<endl;
    output- 2 abcd */

    /*p={2,"abd"};
    cout<<p.first<<" "<<p.second<<endl;
    output- 2 abd */

    //To copy pairs..

    /*pair<int,string> p1=p;
    p1.first=3;
    cout<<p.first<<" "<<p.second<<endl;
    output-2 abcd*/

    /* pair<int,string> &p1=p;
    p1.first=3;
    cout<<p.first<<" "<<p.second<<endl;
    output- 3 abcd */
    
    //pairs ka use do chijo ke beech me relation maintain krne ke liye hota hai

    int a[]={1,2,3};
    int b[]={2,3,4};
    //each index is related to each other
    pair<int,int>p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    swap(p_array[0],p_array[2]);

    for(int i=0;i<3;i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }

    /*
    1 2   3 4
    2 3   2 3
    3 4   1 2
    
    */

    //swap(p_array[0],p_array[2]); ab yahan pe pura ka pura pair swap hoga
    //ab mere ko relation maintain krne ki khudse jaroorat nhi hai...
    //generally hm pairs ka array declare bhi nhi krte hai hm vector of pair declare krte hai..
    

    






}