import uuid
def uuid1():
    time_uuid = uuid.uuid1()
    return time_uuid
def uuid4():
    random_uuid = uuid.uuid4()
    return random_uuid

def uuid_module():

    while True :
        print(
            """
            Generate Unique Identifiers:
            1. Generate UUIDI (based on timestamp and MAC address)
            2. Generate UUID4 (random UUID)
            3. Back to Main Menu
            """
            )
        user_choice = int(input("Enter Your Choice : "))
        match user_choice : 
            case 1 :
                print(uuid1())
            case 2 :
                print(uuid4())
            case 3 :
                print("Returning to Main Menu...")
                break
            case _:
                print("Invalid choice. Please select from the menu.")