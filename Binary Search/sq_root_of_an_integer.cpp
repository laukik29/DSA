#include<iostream>
using namespace std;

long long int sqrtinteger(int n)
{
        int s =0;
        int e=n;
        long long int mid = s + (e-s)/2;
        long long int ans = -1;
        
        while(s<=e)
        {
            long long int square = mid * mid;

            if(square==n) {
                return mid;
            }
            else if(square<n) {
                ans = mid;
                s= mid +1;
            }
            else {
                e=mid -1;

            }
            mid = s + (e-s)/2;

        }
        return ans;
        // if (n== 0) {
        //     return 0;
        // }

        // int start = 1;
        // int end = n;
        // int ans;   

        // while (start <= end) {
        //     int mid = start + (end - start) / 2;

        //     if (mid <= n/ mid) {
        //         ans = mid;
        //         start = mid + 1;
        //     } else {
        //         end = mid - 1;
        //     }
        // }

        // return ans;
    
}

double moreprecision(int n, int precision, int tempSol) {

    double factor = 1;
    double ans = tempSol;
    for(int i =0; i<precision;i++) {
        factor = factor /10;
        for(double j =0;j*j<n;j= j+factor)
        {
            ans = j;
        }

    }
    return ans;
}

int main()
{
    int n;
   cout<<"enter the number"<<endl;
   cin>>n;

   int tempSol = sqrtinteger(n);
   cout<<"Answer is "<<moreprecision(n,3,tempSol);

  return 0;

}
