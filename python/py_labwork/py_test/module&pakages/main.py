import dat
import file_op
import maths
import random_module
import uuid_module

while True :
    print (
"""
Welcome to Multi-Uti1ity Toolkit
Choose an option:
1. Datetime and Time Operations
2. Mathematical Operations
3. Random Data Generation
4. Generate Unique Identifiers (UUID)
5. File Operations (Custom Module)
6. Explore Module Attributes (dir())
7. Exit
"""
    )

    user_choice = int(input("Enter Your Choice : "))
    match user_choice :
        case 1 :
            dat.dat()
        case 2 :
            maths.maths()
        case 3 :
            random_module.random_module()
        case 4 :
            uuid_module.uuid_module()
        case 5 :
            file_op.file_op()
        case 6 :
            user_input = input("Enter module name : ")
            print(dir(user_input))
        case 7 :
            print("Exiting the program")
            break
        case _:
            print("Invalid choice! Please try again.")
