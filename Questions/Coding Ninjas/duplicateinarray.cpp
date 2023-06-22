int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int value=0;

    //XORing all elements
     for(int i =0;i<arr.size();i++)
    {   
        value = value^arr[i];
    }

    //XORing [1,n-1]
    for(int i =1;i<arr.size();i++)
    {   
        value = value^i;
    }
	return value;
}
