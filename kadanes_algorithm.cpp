#include <iostream>
#include <vector>
using namespace std;

int msa(vector <int> &vec) {
   int n = vec.size();

   int cs = 0, ms = INT_MIN;
   for (int i : vec) {
      cs+=i;
      ms = max(cs, ms);
      if (cs < 0) {
         cs = 0;
      }
   }
   return ms;
}


int main () {
   int n;
   cin >> n;

   vector <int> vec(n);

   for (int i=0; i<n; i++) {
      cin >> vec[i];
   }

   int sum = msa(vec);

   cout << "Max subarray sum is: " << sum << endl;


    return 0;
}