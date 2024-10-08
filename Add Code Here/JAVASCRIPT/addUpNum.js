// Function to add up numbers from 1 to the given number, with negative number handling

// example

// addUp(4) ➞ 10

// addUp(13) ➞ 91

// addUp(600) ➞ 180300

function addUpNum(num) {
  if (num < 1) {
    return "Input should be a positive number.";  // Return a message for negative or zero input
  }

  // Recursive approach
  if (num === 1) return 1;  // Base case: if the number is 1, return 1
  return num + addUpNum(num - 1);  // Recursive case: add current number to the sum of all previous numbers

  /* 
  // Iterative approach
  let sum = 0;
  for (let i = 1; i <= num; i++) {
    sum += i;  // Add each number from 1 to num
  }
  return sum;
  */
}

// Example test cases
console.log(addUpNum(4));    // Output: 10
console.log(addUpNum(13));   // Output: 91
console.log(addUpNum(600));  // Output: 180300
console.log(addUpNum(-5));   // Output: "Input should be a positive number."
