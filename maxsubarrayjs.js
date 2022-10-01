// max sub array sum using kadane's algorithm 
function maxsubarray(a)
{
	let maxSum = -Infinity; 	// stores value of max sum 
	let currSum=0;  	 //stores values of cur sum

		for (var i = 0; i < len; i++) 
		{  
			currSum += arr[j];    
			if (currSum > maxSum)    
			  maxSum = currSum;
			  
			if (currSum<0)
			currSum=0;
		  
		} 
		return maxSum;
}



var a = [ -2, -3, 4, -1, -2, 1, 5, -3 ]
document.write("Maximum contiguous sum is", maxsubarray(a))


