#include <bits/stdc++.h> 
bool isPossible(vector<int> &arr, int n, int m,int mid) {

	int studentcount =1;
	int pagesum = 0;

	for(int i =0; i<n;i++) {
		if(pagesum + arr[i]<=mid)
		{
			pagesum += arr[i];
		}
		else 
		{
			studentcount ++;
			if(studentcount>m || arr[i]>mid)
			{
				return false;
			}
			pagesum = arr[i];
		}
	}
	return true;

}


int allocateBooks(vector<int> &arr, int n, int m)
{
	// Write your code here.
	int s =0;
	int sum = 0;

	for(int i =0;i<n;i++) {
		sum += arr[i];
	}

	int e =sum;
	int ans = -1;
	int mid = s + (e-s)/2;

	while(s<=e) {
		
		if(isPossible(arr,n,m,mid)) {
			ans = mid;
			e= mid -1;

		}
		else {
			s = mid +1 ;
		}
		mid = s + (e-s)/2;
	} 
	return ans;
}

//#include <bits/stdc++.h> 
// bool isPossible(vector<int> &arr, int n, int m, int mid) {
//     int studentCount = 1;
//     int pagesSum = 0;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] > mid) {
//             return false;
//         }

//         if (pagesSum + arr[i] > mid) {
//             studentCount++;
//             pagesSum = arr[i];
//         } else {
//             pagesSum += arr[i];
//         }

//         if (studentCount > m) {
//             return false;
//         }
//     }

//     return true;
// }

// int allocateBooks(vector<int> &arr, int n, int m) {
//     if (n < m) {
//         return -1; // Not enough books for each student
//     }

//     int start = *max_element(arr.begin(), arr.end());
//     int end = accumulate(arr.begin(), arr.end(), 0);
//     int result = -1;

//     while (start <= end) {
//         int mid = start + (end - start) / 2;

//         if (isPossible(arr, n, m, mid)) {
//             result = mid;
//             end = mid - 1;
//         } else {
//             start = mid + 1;
//         }
//     }

//     return result;
// }

