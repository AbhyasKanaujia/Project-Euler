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

## After reading solution

After reading the solution at project euler I found that I had made a mistake. My program took 111 as the smallest 3 digit numer while 100 should have been. 

It also talked about the representation of palindrome number and how it was a multiple of 11: 
<!-- $100000x+10000y+1000z+100z+10y+x$ --> <img src="https://render.githubusercontent.com/render/math?math=100000x%2B10000y%2B1000z%2B100z%2B10y%2Bx">
<br>
<!-- $=100001x+10010y+1100z$ --> <img src="https://render.githubusercontent.com/render/math?math=%3D100001x%2B10010y%2B1100z">
<br>
<!-- $=11(9091x+910y+100z)$ --> <img src="https://render.githubusercontent.com/render/math?math=%3D11(9091x%2B910y%2B100z)">

The problem overview goes into more details about it. You sould not stop at this point since I have skipped many detailes about this being a multiple of 11.

I've correct my samallest 3 digit number problem and now I'm going to commit these changes.