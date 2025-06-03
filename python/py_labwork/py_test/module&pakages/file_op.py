FILENAME = "parth.txt"

def create():
    try:
        with open(FILENAME, 'x') as file:
            print(f"File '{FILENAME}' created successfully.")
    except FileExistsError:
        print(f"File '{FILENAME}' already exists.")

def write(lines):
    with open(FILENAME, 'w') as file:
        file.write(lines + '\n')
    print(f"Written to '{FILENAME}' successfully.")

def read():
    try:
        with open(FILENAME, 'r') as file:
            data = file.read()
        print(f"Contents of '{FILENAME}':\n{data}")
    except FileNotFoundError:
        print(f"File '{FILENAME}' not found.")

def append(lines):
    try:
        with open(FILENAME, 'a') as file:
            file.write(lines + '\n')
        print(f"Appended to '{FILENAME}' successfully.")
    except FileNotFoundError:
        print(f"File '{FILENAME}' not found.")

def file_op():
    while True:
        print(f"""
    File Operations on {FILENAME}:
    1. Create the file
    2. Write to the file
    3. Read from the file
    4. Append to the file
    5. Exit
    """)
        try:
            user_choice = int(input("Enter Your Choice: "))
        except ValueError:
            print("Please enter a valid integer choice.")
            continue
        except KeyboardInterrupt:
            print("\nProgram interrupted by user. Exiting.")
            break

        match user_choice:
            case 1:
                create()
            case 2:
                content = input("Enter content to write: ")
                write(content)
            case 3:
                read()
            case 4:
                content = input("Enter content to append: ")
                append(content)
            case 5:
                print("Returning to Main Menu...")                
                break
            case _:
                print("Invalid choice! Please try again.")
