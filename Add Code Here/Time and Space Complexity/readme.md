## An introduction to Time and Space complexity

#### What is Time Complexity?
Amount of time taken by an algorithm to run as a **function of length of input**. 

For example, 
```
  for(int i = 0; i<N; i++){
  cout<<i;
  };
```

- f &prop; N
- N &uarr; &rArr; time taken &uarr; or number of operations &uarr;

#### What is Space Complexity?
Amount of space taken by an algorithm to run as a function of length of input. 

For example, SC: O(1)
```
  int a = 5;
```
For example, SC: O(N)
```
  int *b = new int[N];
```
For example, SC: O(N<sup>2</sup>)
```
  int *c = new int[N^2];
```

#### Units to represent complexity
1. Big O: upper bound(worst case)
2. Theta &Theta;: average case
3. Omega &Omega;: lower bound(best case)

#### Big O Complexities
- Constant Time : O(1)
- Linear Time : O(n)
- Logarithmic Time : O(logn)
- Quadratic Time : O(n<sup>2</sup>)
- Cubic Time : O(n<sup>3</sup>)
- Exponential time: O(2<sup>n</sup>)
- Factorial time : O(n!)
  
<img src="https://miro.medium.com/v2/resize:fit:1358/1*dWet_YU-5072Kcko7LzsuQ.jpeg">

- increasing order of complexity
  
  O(1), O(logn), O(&radic;n), O(n), O(nlogn), O(n<sup>2</sup>), O(n<sup>3</sup>), O(2<sup>n</sup>), O(N!), O(N<sup>n</sup>)

[Do checkout this DSA questions list](https://cpp-dsa-sheet.vercel.app/)