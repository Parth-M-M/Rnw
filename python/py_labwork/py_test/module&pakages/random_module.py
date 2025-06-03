import random
import string
def gen_ran_num(start,stop):
    result = random.randint(start,stop)
    return result

def generate_random_list(length, start, end):
    random_list = [random.randint(start, end) for _ in range(length)]
    return random_list

def generate_random_password(length):
    if length < 4:
        raise ValueError("Password length should be at least 4 characters")

    lowercase = string.ascii_lowercase
    uppercase = string.ascii_uppercase
    digits = string.digits
    symbols = string.punctuation

    password = [ random.choice(lowercase) , random.choice(uppercase) , random.choice(digits) , random.choice(symbols) ]

    all_chars = lowercase + uppercase + digits + symbols
    password += random.choices(all_chars, k=length - 4)

    random.shuffle(password)

    return ''.join(password)

def generate_otp(length):
    if length <= 0:
        raise ValueError("OTP length must be greater than 0")

    otp = ''.join(str(random.randint(0, 9)) for _ in range(length))
    return otp

def random_module():
    while True:
        print(
            """
        Random Data Generation:
        1. Generate Random Number
        2. Generate Random List
        3. Create Random Password
        4. Generate Random OTP
        5. Back to Main Menu
            """
        )
        try:
            user_choice = int(input("Enter your choice: "))
            match user_choice:
                case 1:
                    start = int(input("Enter your Starting Number: "))
                    end = int(input("Enter your Ending Number: "))
                    print(f"Random Number: {gen_ran_num(start, end)}")
                case 2:
                    start = int(input("Enter your Starting Number: "))
                    end = int(input("Enter your Ending Number: "))
                    length = int(input("Enter length of the list: "))
                    print(f"Random List: {generate_random_list(length, start, end)}")
                case 3:
                    length = int(input("Enter your length of your password: "))
                    print(f"Password: {generate_random_password(length)}")
                case 4:
                    length = int(input("Enter your length of your OTP: "))
                    print(f"OTP: {generate_otp(length)}")
                case 5:
                    print("Returning to Main Menu...")
                    break
                case _:
                    print("Invalid choice. Please select from the menu.")
        except ValueError:
            print("Invalid input. Please enter numeric values where required.")

