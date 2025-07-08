my_list = [12, 45, 46, 90, 20, 17]
my_list.sort()
#print(my_list)

def binary_search(my_list, target):
    left = 0
    right = len(my_list) - 1
    
    while (left <= right):
        mid = (left + right) // 2

        if(target == my_list[mid]):
            return my_list[mid]
        elif (target < my_list[mid]):
            right = mid -1
        else:
            left = mid + 1

    
    return -1




result = binary_search(my_list, 46)

if(result != -1):
    print(f"The target value is present and it is: {result}")

else:
    print(f"The target value is not present ")


