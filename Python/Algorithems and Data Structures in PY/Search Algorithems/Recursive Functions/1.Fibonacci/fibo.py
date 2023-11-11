def recur_fibonacci(n):
   if n <= 1:
       return n
   else:
       return(recur_fibonacci(n-1) + recur_fibonacci(n-2))

n = 10 
if n <= 0:
   print("Enter a positive integer dude")
else:
   print("Fibonacci sequence is:")
   for i in range(n):
       print(recur_fibonacci(i))
