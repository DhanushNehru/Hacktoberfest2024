// JavaScript program to find LCM of 2 numbers 
// without using GCD 

// Function to return LCM of two numbers 
function findLCM(a, b) { 
	let lar = Math.max(a, b); 
	let small = Math.min(a, b); 
	for (i = lar; ; i += lar) { 
		if (i % small == 0) 
			return i; 
	} 
} 

// Driver program to test above function 
let a = 5, b = 7; 
console.log("LCM of " + a + " and " + 
	b + " is " + findLCM(a, b));
