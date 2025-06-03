def create(filename):
    try:
        with open(filename, 'x') as file:
            print(f"File '{filename}' created successfully.")
    except FileExistsError:
        print(f"File '{filename}' already exists.")

def write(filename, lines):
    with open(filename, 'w') as file:
        file.write(lines)
    print(f"Written to '{filename}' successfully.")

def read(filename):
    try:
        with open(filename, 'r') as file:
            data = file.read()
        print(f"Contents of '{filename}':\n{data}")
    except FileNotFoundError:
        print(f"File '{filename}' not found.")

def append(filename, lines):
    try:
        with open(filename, 'a') as file:
            file.write(lines)
        print(f"Appended to '{filename}' successfully.")
    except FileNotFoundError:
        print(f"File '{filename}' not found.")
def file_op():
    while True:
        print("""
    File Operations:
    1. Create a new file
    2. Write to a file
    3. Read from a file
    4. Append to a file
    5. Exit
    """)
        user_choice = int(input("Enter Your Choice: "))
        match user_choice:
            case 1:
                name = input("Enter the name of the file you want to create: ")
                create(name)
            case 2:
                name = input("Enter the name of the file to write: ")
                content = input("Enter content to write: ")
                write(name, content)
            case 3:
                name = input("Enter the name of the file to read: ")
                read(name)
            case 4:
                name = input("Enter the name of the file to append: ")
                content = input("Enter content to append: ")
                append(name, content)
            case 5:
                print("Exiting the program.")
                break
            case _:
                print("Invalid choice! Please try again.")
