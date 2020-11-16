# Largest palindrome product

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

[Link to problem on projecteuler.net](https://projecteuler.net/problem=4)

## Notes

To find the 'largest' palindrome number, it makes more sense to start a loop from the largest 3 digit number 999. So, choose a number, check all possibilities, choose next, repeat. It seems like a bruteforce solution. Let me give it a try.

Initially I tried running a nested loop of `[999-111]` inside a `[999-111]` a to print the first palendrome number that I get. This was not the right solutin. This is because the first palendrome in this order would be 580085 obtained by multiplying 995 and 583 which is not 'the largest' requried palindrome.

To solve this I added a variable called largest to which I compared each palindrome solution I would get.

While doing the solution I realized that <img src="https://render.githubusercontent.com/render/math?math=3\times5"> is the same as <img src="https://render.githubusercontent.com/render/math?math=5\times3"> and thus I could reduce the amount of work my code was doing if I take only each combination of two number to be multiplited and not permute them.

So instead of having to multiply <img src="https://render.githubusercontent.com/render/math?math=100\times100"> number, my program only need to multiply, at worst, <img src="https://render.githubusercontent.com/render/math?math=^nC_2"> numbers.

To do this I made the inner loop not use all the number less than what the outer loop was currently handling.

