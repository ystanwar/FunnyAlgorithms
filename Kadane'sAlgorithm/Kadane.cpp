#include <bits/stdc++.h>
using namespace std;

int main()
{
   vector<int> vct = {-2, -3, 4, -1, -2, 1, 5, -3}; 
   
   int l = vct.size();
   
   int currSum = vct[0],maxSum = vct[0];
   
   
   for(int i=1;i<l;i++)
   {
      currSum = max(vct[i], vct[i]+currSum);
      maxSum = max(maxSum,currSum);
      
      
   }
   
   cout<<"Maximum contiguous sum is "<<maxSum<<endl;
   return 0;
}
