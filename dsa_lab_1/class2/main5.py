def binary_search(data, item):
    beg = 0
    end = len(data) - 1
    loc = None  # To indicate if the item is not found

    while beg <= end:
        mid = (beg + end) // 2  # INT(beg + end) / 2
        
        if data[mid] == item:
            loc = mid
            return loc  # Item found, return location (index)
        elif item < data[mid]:
            end = mid - 1
        else:
            beg = mid + 1

    return loc  # If item is not found, loc remains None

# Example usage
data = [1, 3, 5, 7, 9, 11]
item = 7
result = binary_search(data, item)

if result is not None:
    print(f"Item found at index {result}")
else:
    print("Item not found")


