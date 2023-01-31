class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *a, int n) 
    { 
    	// Your code here
    	/*
    	    1 2 3 4 5 6 
    	    6 1 5 2 4 3
    	    
    	    0 1 2 3 4 5
            1 2 3 4 5 6
            43 9 38 18 33 27
    	    
    	    1 2 3 4 5 6 7
    	    7 1 6 2 5 3 4
    	*/
    	int max_e = a[n-1]+1;
    	int maxi = n-1,mini = 0;
    	for(int i=0;i<n;i++)
    	{
    	    if(i%2 ==0)
    	    {
    	        a[i] = (a[maxi]%max_e)*max_e + a[i];
    	        maxi --;
    	    }
    	    else
    	    {
    	        a[i] = (a[mini]%max_e )*max_e + a[i];
    	        mini++;
    	    }
    	}
    	for(int i=0;i<n;i++)
    	{
    	    a[i] = a[i]/max_e;
    	}

    // 	for(int i=0;i<n;i++)
    // 	{
    // 	    cout<<a[i]<<" ";
    // 	}
    // 	cout<<endl;
    }
};
