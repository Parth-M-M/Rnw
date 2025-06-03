import math

def compound_interest(principal, rate, time):
    amount = principal * (1 + rate / 100) ** time
    return amount

def factorial(n):
    if n < 0:
        return "Factorial is not defined for negative numbers."
    elif n == 0 or n == 1:
        return 1
    else:
        result = 1
        for i in range(2, n + 1):
            result *= i
        return result

def trig_calculation(angle, in_degrees=True):
    if in_degrees:
        angle = math.radians(angle)
    results = {}

    results['sin'] = math.sin(angle)
    results['cos'] = math.cos(angle)
    try:
        results['tan'] = math.tan(angle)
    except:
        results['tan'] = float('inf')

    try:
        results['csc'] = 1 / results['sin']
    except ZeroDivisionError:
        results['csc'] = float('inf')

    try:
        results['sec'] = 1 / results['cos']
    except ZeroDivisionError:
        results['sec'] = float('inf')

    try:
        results['cot'] = 1 / results['tan']
    except ZeroDivisionError:
        results['cot'] = float('inf')

    return results

def geometric_area(n):
    if n == 0:
        radius = float(input("Enter Radius of Circle: "))
        area = math.pi * radius ** 2
        print(f"Area of Circle is {area:.2f}")
    elif n == 3:
        base = float(input("Enter base of Triangle: "))
        height = float(input("Enter height of Triangle: "))
        area = 0.5 * base * height
        print(f"Area of Triangle is {area:.2f}")
    elif n == 4:
        length = float(input("Enter length: "))
        breadth = float(input("Enter breadth: "))
        area = length * breadth
        if length == breadth:
            print(f"Area of Square is {area:.2f}")
        else:
            print(f"Area of Rectangle is {area:.2f}")
    else:
        print(f"Function not available for shape with {n} sides.")

def maths():
    while True:
        print("""
Mathematical Operations:
1. Calculate Factorial
2. Solve Compound Interest
3. Trigonometric Calculations
4. Area of Geometric Shapes
5. Back to Main Menu
""")
        try:
            user_choice = int(input("Enter Your Choice: "))
        except ValueError:
            print("Invalid input. Please enter a number between 1 and 5.")
            continue

        match user_choice:
            case 1:
                user_input = int(input("Enter a number: "))
                print(f"Factorial of {user_input} is {factorial(user_input)}")
            case 2:
                principal = float(input("Enter Principal Amount: "))
                rate = float(input("Enter Interest Rate (%): "))
                time_1 = float(input("Enter Time (in years): "))
                amount = compound_interest(principal, rate, time_1)
                print(f"Compound Interest Amount is: {amount:.2f}")
            case 3:
                user_input = float(input("Enter angle (in degrees): "))
                trig_values = trig_calculation(user_input, in_degrees=True)
                for func, value in trig_values.items():
                    print(f"{func}({user_input}°) = {value:.4f}")
            case 4:
                user_input = int(input("Enter number of sides (e.g., 0 for Circle, 3 for Triangle, 4 for Square/Rectangle): "))
                geometric_area(user_input)
            case 5:
                print("Returning to Main Menu...")
                break
            case _:
                print("Invalid choice. Please select from the menu.")

