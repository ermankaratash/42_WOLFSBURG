WHEN CODE RUNS

If n=2

=>ft_loop(x[],0,2)

1. 0!=2 so we go to else 
2. our array [0]
3. now in while loop

    a. =>ft_loop(x[0],1,2)

    b. 1=1 so we go to if

    c. our array [0,1]

    d. now in while loop

        i. =>ft_check(x[0,1],2)

        ii. 0<1 so now in while loop and not in if in the while and i=1, 1<1 not correct so while loop finished

        ii. yes=1 so now in while loop, i=0, i<2 so in while loop AND WRITE 0, i=1, 1<2 so WRITE 1, i=2 and 2<2 not correct while loop ended

        ii. 0!=6 correct, we write , and a space. ft_check ended

    now we write our first combination 01,

        iv. in the while loop (line 47) array changed to [1,1], and starting while loop again 1<9 =>ft_check(x[1,1],2)
but this time yes changed to 1 in the functions first while loop and it didn't write anything, ft_check ended

         v. in the while loop (line 47) array changed to [2,1]

so goes on...
