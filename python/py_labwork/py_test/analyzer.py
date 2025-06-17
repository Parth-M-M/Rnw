import numpy as np

flag = [0, 0, 0, 0, 0, 0]

class DataAnalyzer:
    def __init__(self):
        self.arr1d1 = None
        self.arr1d2 = None
        self.arr2d1 = None
        self.arr2d2 = None
        self.arr3d1 = None
        self.arr3d2 = None

    def array_1d(self, start, stop, step=1):
        if flag[0] == 0:
            self.arr1d1 = np.arange(start, stop, step)
            flag[0] = 1
        elif flag[1] == 0:
            self.arr1d2 = np.arange(start, stop, step)
            flag[1] = 1
        else:
            print("No 1D array slot available.")
            n = int(input("Override existing array? (1 for arr1d1, 2 for arr1d2, 0 to cancel): "))
            if n == 1:
                self.arr1d1 = np.arange(start, stop, step)
            elif n == 2:
                self.arr1d2 = np.arange(start, stop, step)
            elif n == 0:
                print("Data logging skipped.")
            else:
                print("Invalid input!")

    def array_2d(self, start, stop, row, column, step=1):
        total_elements = (stop - start + (step - 1)) // step
        if total_elements != row * column:
            print("Error: Total elements do not match row x column.")
            return
        if flag[2] == 0:
            self.arr2d1 = np.arange(start, stop, step).reshape(row, column)
            flag[2] = 1
        elif flag[3] == 0:
            self.arr2d2 = np.arange(start, stop, step).reshape(row, column)
            flag[3] = 1
        else:
            print("No 2D array slot available.")
            n = int(input("Override existing array? (1 for arr2d1, 2 for arr2d2, 0 to cancel): "))
            if n == 1:
                self.arr2d1 = np.arange(start, stop, step).reshape(row, column)
            elif n == 2:
                self.arr2d2 = np.arange(start, stop, step).reshape(row, column)
            else:
                print("Invalid input!")

    def array_3d(self, start, stop, row, column, no, step=1):
        total_elements = (stop - start + (step - 1)) // step
        if total_elements != row * column * no:
            print("Error: Total elements do not match row x column x depth.")
            return
        if flag[4] == 0:
            self.arr3d1 = np.arange(start, stop, step).reshape(no, row, column)
            flag[4] = 1
        elif flag[5] == 0:
            self.arr3d2 = np.arange(start, stop, step).reshape(no, row, column)
            flag[5] = 1
        else:
            print("No 3D array slot available.")
            n = int(input("Override existing array? (1 for arr3d1, 2 for arr3d2, 0 to cancel): "))
            if n == 1:
                self.arr3d1 = np.arange(start, stop, step).reshape(no, row, column)
            elif n == 2:
                self.arr3d2 = np.arange(start, stop, step).reshape(no, row, column)
            else:
                print("Invalid input!")

    def math_operations(self):
            print("""
--- Mathematical Operations ---
Choose two arrays to perform operations:
1. arr1d1
2. arr1d2
3. arr2d1
4. arr2d2
5. arr3d1
6. arr3d2
""")
            try:
                a = int(input("Select first array (1-6): "))
                b = int(input("Select second array (1-6): "))
            except ValueError:
                print("Invalid input! Must be numbers 1 to 6.")
                return

            arrays = [self.arr1d1, self.arr1d2, self.arr2d1, self.arr2d2, self.arr3d1, self.arr3d2]

            if a < 1 or a > 6 or b < 1 or b > 6:
                print("Invalid array selection!")
                return

            arr_a = arrays[a - 1]
            arr_b = arrays[b - 1]

            if arr_a is None or arr_b is None:
                print("One or both selected arrays are empty!")
                return

            if arr_a.shape != arr_b.shape:
                print("Array shapes do not match! Cannot perform element-wise operations.")
                return

            print("Select operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division")
            op = input("Enter your choice: ")

            if op == '1':
                print("Result (Addition):\n", arr_a + arr_b)
            elif op == '2':
                print("Result (Subtraction):\n", arr_a - arr_b)
            elif op == '3':
                print("Result (Multiplication):\n", arr_a * arr_b)
            elif op == '4':
                try:
                    result = np.divide(arr_a, arr_b)
                    print("Result (Division):\n", result)
                except ZeroDivisionError:
                    print("Error: Division by zero encountered.")
            else:
                print("Invalid operation choice.")
    def combine_or_split(self):
        print("""
--- Combine or Split Arrays ---
1. Combine arrays
2. Split an array
""")
        choice = input("Enter your choice: ")
        arrays = [self.arr1d1, self.arr1d2, self.arr2d1, self.arr2d2, self.arr3d1, self.arr3d2]

        if choice == '1':
            a = int(input("Select first array (1-6): "))
            b = int(input("Select second array (1-6): "))
            axis = int(input("Enter axis (0, 1, or 2 based on array dimension): "))
            if arrays[a-1] is None or arrays[b-1] is None:
                print("One of the arrays is empty.")
                return
            try:
                combined = np.concatenate((arrays[a-1], arrays[b-1]), axis=axis)
                print("Combined Array:\n", combined)
            except Exception as e:
                print("Error:", e)

        elif choice == '2':
            a = int(input("Select array to split (1-6): "))
            if arrays[a-1] is None:
                print("Selected array is empty.")
                return
            parts = int(input("Into how many parts? "))
            axis = int(input("Enter axis to split along (0, 1, or 2): "))
            try:
                result = np.array_split(arrays[a-1], parts, axis=axis)
                for idx, arr in enumerate(result):
                    print(f"Part {idx+1}:\n{arr}")
            except Exception as e:
                print("Error:", e)

    def search_sort_filter(self):
        print("""
--- Search, Sort, or Filter Arrays ---
1. Search a value
2. Sort the array
3. Filter values
""")
        choice = input("Enter your choice: ")
        arrays = [self.arr1d1, self.arr1d2, self.arr2d1, self.arr2d2, self.arr3d1, self.arr3d2]

        idx = int(input("Select array (1-6): "))
        if arrays[idx-1] is None:
            print("Array is empty.")
            return
        arr = arrays[idx-1]

        if choice == '1':
            val = int(input("Enter value to search: "))
            result = np.where(arr == val)
            print("Value found at indices:", result)

        elif choice == '2':
            try:
                sorted_arr = np.sort(arr, axis=None)
                print("Sorted array:\n", sorted_arr)
            except Exception as e:
                print("Error:", e)

        elif choice == '3':
            condition = int(input("Enter value to filter (keep values > this): "))
            filtered = arr[arr > condition]
            print("Filtered values:\n", filtered)

    def aggregate_statistics(self):
        print("""
--- Aggregate and Statistical Operations ---
1. Sum
2. Mean
3. Median
4. Standard Deviation
5. Variance
""")
        choice = input("Enter your choice: ")
        arrays = [self.arr1d1, self.arr1d2, self.arr2d1, self.arr2d2, self.arr3d1, self.arr3d2]

        idx = int(input("Select array (1-6): "))
        if arrays[idx-1] is None:
            print("Array is empty.")
            return
        arr = arrays[idx-1]

        if choice == '1':
            print("Sum:", np.sum(arr))
        elif choice == '2':
            print("Mean:", np.mean(arr))
        elif choice == '3':
            print("Median:", np.median(arr))
        elif choice == '4':
            print("Standard Deviation:", np.std(arr))
        elif choice == '5':
            print("Variance:", np.var(arr))
        else:
            print("Invalid choice.")


obj = DataAnalyzer()

while True:
    print("""
=================================================
Choose an option:
1. Create a Numpy Array
2. Perform Mathematical Operations
3. Combine or Split Arrays
4. Search, Sort, or Filter Arrays
5. Compute Aggregates and Statistics
6. Exit
""")
    try: 
        userchoice = int(input("Enter your choice: "))
    except ValueError:
        print("Invalid input! Please enter a number.")
        continue

    if userchoice == 1:
        while True:
            print("""
--- Array Creation Menu ---
1. 1D ARRAY
2. 2D ARRAY
3. 3D ARRAY
4. EXIT
""")
            try:
                usernumber = int(input("Enter your choice: "))
            except ValueError:
                print("Invalid input! Try again.")
                continue

            if usernumber == 1:
                print("Creating 1D Array:")
                start = int(input("Start: "))
                stop = int(input("Stop: "))
                step = input("Step (press Enter to default=1): ")
                step = int(step) if step.strip() else 1
                obj.array_1d(start, stop, step)

            elif usernumber == 2:
                print("Creating 2D Array:")
                start = int(input("Start: "))
                stop = int(input("Stop: "))
                step = input("Step (press Enter to default=1): ")
                step = int(step) if step.strip() else 1
                row = int(input("Rows: "))
                column = int(input("Columns: "))
                obj.array_2d(start, stop, row, column, step)

            elif usernumber == 3:
                print("Creating 3D Array:")
                start = int(input("Start: "))
                stop = int(input("Stop: "))
                step = input("Step (press Enter to default=1): ")
                step = int(step) if step.strip() else 1
                no = int(input("Depth (no of matrices): "))
                row = int(input("Rows: "))
                column = int(input("Columns: "))
                obj.array_3d(start, stop, row, column, no, step)

            elif usernumber == 4:
                break
            else:
                print("Invalid choice. Try again.")
    
    elif userchoice == 2:
        obj.math_operations()
    
    elif userchoice == 3:
        obj.combine_or_split()

    elif userchoice == 4:
        obj.search_sort_filter()

    elif userchoice == 5:
        obj.aggregate_statistics()


    elif userchoice == 6:
        print("Exiting program.")
        break

    else:
        print("INVALID INPUT PLEASE TRY AGAIN !!! ")
