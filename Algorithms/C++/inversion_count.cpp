/*
Inversion is a case in which for two integers i<j, ith element in the array is larger than jth element(a[i] > a[j]).
If the array consists of (2,3,8,6,1), we can find five inversions of (2,1), (3,1), (8,6), (8,1), and (6,1).
This algorithm uses policy based data structure and hence the time complexity reduces from o(n^2) to o(n*logn).
Useful for competetive programming
 */
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds; 
typedef tree<int, null_type, less<int> , rb_tree_tag,tree_order_statistics_node_update> PBDS; 
int main()
{
    PBDS st;
    int n;
    cin>>n;
    int arr[10000];
    for(int i =0 ;i < n ;i++)
    {
        cin>>arr[i];
    }
    int inversion_count = 0;
    for(int i = 0 ; i <n ;i++)
    {
        inversion_count += st.size() - st.order_of_key(arr[i]);
        st.insert(arr[i]);
    }
    cout<<inversion_count;
    return 0;
}