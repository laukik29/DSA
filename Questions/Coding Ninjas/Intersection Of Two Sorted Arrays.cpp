#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	//create a vector int
	vector<int> ans;

	for(int i =0;i<n;i++)
	{
		int element = arr1[i];

		for (int j=0;j<m;j++)
		{
			if(element == arr2[j])
			{
				//putting answer in the vector ans
				ans.push_back(element);
				//update the checked one with lowest value;
				arr2[j]= -2;
				break;
			}
		}
	} return ans;
}
//more optimised ways 
#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	//create a vector int
	vector<int> ans;

	for(int i =0;i<n;i++)
	{

		int element = arr1[i];


		for (int j=0;j<m;j++)
		{
			if(element<arr2[j])
			break;
			
			if(element == arr2[j])
			{
				//putting answer in the vector ans
				ans.push_back(element);
				//update the checked one with lowest value;
				arr2[j]= -2;
				break;
			}     
		}
	} return ans;
}

//most optimised way
#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	int i =0, j=0;
	vector<int> ans;
	
	while(i<n && j<m)
	{
		if(arr1[i]==arr2[j])
		{
			ans.push_back(arr1[i]);	
			i++;
			j++;
		}
		else if(arr1[i]<arr2[j])
		{
			i++;
			
		}
		else 
		{
			j++;
		}
	} 
	return ans;
}