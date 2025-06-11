Problem Statement : You're given an array prices where prices p[i] is the price of a given stock on the i-th day. You want to maximise your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum your profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Solution -> Optimal Approach (O(n) time, O(1) space):
We will:

- Keep track of the minimum price so far.
- At each step, calculate the profit if we sold on the current day.
- Update the maximum profit if the current profit is higher.

Skills : Data Structures and Algorithms, C (Programming language), C++
