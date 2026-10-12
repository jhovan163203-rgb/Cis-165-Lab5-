Read me 

I used gemini to help me with the writing of the second code and i asked it 

Explain how to convert an annual percentage rate into a monthly decimal rate. Do not write the complete program.
It answered and explained the process and used the correct method which was to double monthly_rate = (annual_rate_percent / 100.0) / 12.0, This process was a little odd at first but it makes sense now how to do it. Another way i used Ai to help me in this process was to figure out an error i made in my parentheses for the loan payment code calculation and i fixed it with gemini showing the correct values and correct code. 



Program and test
Inputs
Expected results
Actual results
Match or correction
Compound interest — assigned
1000, 4.25%, 12
43.34
43.34
Match
Compound interest — changed
2500,6%,4
153.41
153.41
Match
Loan payment — assigned
10000, 12%, 36
Monthly payment - 332.14
Monthly payment 
332.14
Match
Loan payment — changed
15000,5%,60months 
283.07
283.07
Match 


Questions 
1.Because the percentage must be divided into decimal form 
2.Because its an exponent like a power of a number its just a shortened form for c++
3.increasing the compounding periods adds more earned interest to the balance 
4. You just divide the rate by 12 for the months 
5 double should be used cause its more accurate using the whole decimals 
6.because thats how money works it only goes to cents and not half of a cent 
7. Amount paid back = monthly payment times the number of payments 
Interest paid = amount paid back - loan amount 
8. Because it makes it easier for the code to pull from a variable then the number itself 

Tools used 
I used gemini and like i said i used it to fix some mistakes listed in the readme section. One ai suggestion to the code was that i should have simplified it after i wrote it but it needed the std cout and left and right for the formatting. 
I verified all the calculations with GDB compiler and it was all calculating and formatting the answers 
