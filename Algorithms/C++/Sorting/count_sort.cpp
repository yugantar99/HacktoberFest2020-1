vector<int> sort(vector<int> &arr)
{
int i,j,k=arr[0];
for(i=0;i<arr.size();i++)
k=max(k,arr[i]);
vector<int> v(k+1,0);
for(i=0;i<arr.size();i++)
v[arr[i]]=1;
vector<int> res;
for(i=0;i<=k;i++)
if(v[i])
res.push_back(i);
return res;
}
