def binary_search(list, item):
    
    #low and high are the limits for the List or array we want to search in.
    low = 0
    high = len(list) - 1
    mid = 0
    
    while low <= high:
        mid = (low + high) // 2
        guess = list[mid]
        
        if guess == item:
            return mid
        
        elif guess > item:
            high = mid - 1
        else:
            low = mid + 1
        return mid

my_list = [1, 3, 5, 7, 9]
print(binary_search(my_list, 3))
print("OK")