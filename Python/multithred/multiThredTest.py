import threading
import time
print('\nMain Thread Started')


def vader(n):
    print(f'\n Thread {n} is Started')
    time.sleep(3)
    print(f'\n Thread {n} is ended')
    
thread = threading.Thread(target=vader, args=[1]) #Creates a new Thread
thread.start() #Starts the Thread 
thread.join()  #This makes the main Thread to Wait for Thread named 'thread'to finish

#Create a List of Multiple Threads for us
threads = [threading.Thread(target=vader, args=[i]) for i in range(9)]
#with a For loop we start all of them
for th in threads:
    th.start()
#and we made the MainTread to wait for all of them
for th in threads:
    th.join()

print('\n Main Thread Finished')