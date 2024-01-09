import threading
import time

def print_numbers(thread_name):
    for i in range(1, 6):
        print(f"{thread_name}: {i}")
        time.sleep(1)

# Create two threads
thread1 = threading.Thread(target=print_numbers, args=("Thread-1",))
thread2 = threading.Thread(target=print_numbers, args=("Thread-2",))

# Start the threads
thread1.start()
thread2.start()

# Wait for both threads to finish
thread1.join()
thread2.join()

print("Both threads have finished execution!")
