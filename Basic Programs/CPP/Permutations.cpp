#include<iostream>
using namespace std;
void swap(char &x,char &y)
{

    char temp = x;

    x = y;

    y = temp;

    return;

}

void permutation(char arr[],int i)
{
        if(arr[i]=='\0')
        {

            cout<<arr<<endl;
            return;

        }

            for(int j=i;arr[j]!=0;j++)
         {

                    swap(arr[i],arr[j]);

                    permutation(arr,i+1);

                    swap(arr[i],arr[j]);

         }

    return;

}
            int main(){
            char arr[10];
            cout<<"Enter the string to find out the permutations"<<endl;
            cin>>arr;

            cout<<"All the permutations of the input string are: "<<endl;
            permutation(arr,0);
}
