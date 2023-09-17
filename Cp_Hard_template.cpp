/****************************
Author -> Rajneesh Chaudhary
****************************/
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define  endl "\n"
 
const int m=100000007;
/*--------------------------------------------------------------------*/
 
void submaker(int index,vector<int> &sub,vector<vector<int>> &vv,vector<int> cur){
	if(index == sub.size()){
		vv.push_back(cur);
		return;
	}
	
	submaker(index+1,sub,vv,cur);
	
	cur.push_back(sub[index]);
	submaker(index+1,sub,vv,cur);
	cur.pop_back();
	
}
/*--------------------------------------------------------------------*/
void printKMax(int arr[], int n, int k){
    deque<int> dq;
    
    for (int i=0; i<n; i++){
        if (dq.empty()){
            dq.push_back(i);
        }
        if (dq.front() <= (i - k)){
            dq.pop_front();
        }
        while (!dq.empty() && arr[i] >= arr[dq.back()]){
            dq.pop_back();
        }
        
        dq.push_back(i);
        if (i >= (k - 1)){
            cout << arr[dq.front()] << " ";
        }    
    }
    cout << endl;
}
/*--------------------------------------------------------------------*/
void submaker2(int index,vector<int> &candidates,int target,
vector<vector<int>> &vv,vector<int> v ){
            int n=candidates.size();
            if(target == 0){
                auto it =find(vv.begin(),vv.end(),v);
                if(it == vv.end())
                    vv.push_back(v);
            }
            if(index>=n) return;
 
            if(candidates[index]<=target){
                v.push_back(candidates[index]);
                submaker2(index,candidates,target-candidates[index],vv,v);
                v.pop_back();
            }
 
            submaker2(index+1,candidates,target,vv,v);
 
    }
/*--------------------------------------------------------------------*/
void solve(){
	int t; cin >> t;
	while(t--){
		
	}
}
 
/*--------------------------------------------------------------------*/
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
	solve();
    
    return 0;
}
