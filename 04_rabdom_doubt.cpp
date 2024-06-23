#include <iostream>
using namespace std;
#include <unordered_map>
#include <unordered_set>
#include <set>          //ordered set--------------ASSCENDING
int main(){
    unordered_map <string, int> mp;
    mp["Rajan"] = 90;
    mp["Ajay"] = 12;
    mp["Kushal"] =89;
   
  if(mp.find("Ajay")!=mp.end())
  cout<<mp["Ajay"];
    // for( auto x : mp)
    // cout<<x.first<<"   "<<x.second; cout<<endl;
    // unordered_set<int> st;
    
    // st.insert(10);
    // st.insert(20);
    // st.insert(30);
    // st.insert(9);
    // st.insert(20);
    // for (auto x : st)
    // cout<<x<<" "<<endl; 

   

    // cout<<endl<<endl;
    
    
    // // ordered set -------------> asscending _________ order
    // set<int>s1;

    // s1.insert(10);
    // s1.insert(20);
    // s1.insert(30);
    // s1.insert(9);
    // s1.insert(20);
 
    // for (auto x : s1)
    // cout<<x<<" "<<endl; 





}