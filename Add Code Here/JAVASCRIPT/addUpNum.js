// add up numbers from a single number

// example

// addUp(4) ➞ 10

// addUp(13) ➞ 91

// addUp(600) ➞ 180300

function addUpNum(num) {
  if (num === 1) return 1;
  return num + addUpNum(num - 1);
}

addUpNum(4); //10
