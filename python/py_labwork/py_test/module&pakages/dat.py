from datetime import datetime
import time
import threading

stop_flag = False

def current_time():
    return datetime.now().strftime("[%Y-%m-%d %H:%M:%S]")

def days(date1_str, date2_str):
    date1 = datetime.strptime(date1_str, "%Y-%m-%d")
    date2 = datetime.strptime(date2_str, "%Y-%m-%d")
    return abs((date2 - date1).days)

def formatconverter(date_str, input_format, output_format):
    date_obj = datetime.strptime(date_str, input_format)
    return date_obj.strftime(output_format)

def wait_for_stop():
    global stop_flag
    while True:
        user_input = input()
        if user_input.lower() == 'x':
            stop_flag = True
            break

def stopwatch():
    global stop_flag
    stop_flag = False
    input("Press Enter to start the stopwatch...")
    start_time = time.time()
    print("Stopwatch started... (Press 'x' + Enter to stop)")

    stopper_thread = threading.Thread(target=wait_for_stop)
    stopper_thread.daemon = True
    stopper_thread.start()

    while not stop_flag:
        elapsed_time = time.time() - start_time
        minutes = int(elapsed_time // 60)
        seconds = int(elapsed_time % 60)
        milliseconds = int((elapsed_time * 1000) % 1000)
        print(f"\rElapsed time: {minutes:02d}:{seconds:02d}.{milliseconds:03d} (mm:ss.ms)", end="")
        time.sleep(0.1)
    print("\nStopwatch stopped.")

def timer(mins, secs):
    total_seconds = mins * 60 + secs
    if total_seconds <= 0:
        print("Time must be greater than zero.")
        return
    print("Countdown started...")
    while total_seconds > 0:
        m = total_seconds // 60
        s = total_seconds % 60
        print(f"\rTime left: {m:02d}:{s:02d}", end="")
        time.sleep(1)
        total_seconds -= 1
    print("\nTime's up!")

def dat():
    while True:
        print("""
Datetime and Time Operations:
1. Display current date and time
2. Calculate difference between two dates
3. Format date into custom format
4. Stopwatch
5. Countdown Timer
6. Back to Main Menu
""")
        try:
            user_input = int(input("Enter your choice: "))
            match user_input:
                case 1:
                    print(current_time())
                case 2:
                    print("Enter dates in the format YYYY-MM-DD")
                    date1_str = input("Enter the first date: ")
                    date2_str = input("Enter the second date: ")
                    print("Days difference:", days(date1_str, date2_str))
                case 3:
                    date = input("Enter your date: ")
                    input_format = input("Enter input format (e.g. %Y-%m-%d): ")
                    output_format = input("Enter output format (e.g. %d/%m/%Y): ")
                    try:
                        formatted = formatconverter(date, input_format, output_format)
                        print("Formatted Date:", formatted)
                    except Exception as e:
                        print("Error formatting date:", e)
                case 4:
                    stopwatch()
                case 5:
                    minute = int(input("Enter minutes: "))
                    seconds = int(input("Enter seconds: "))
                    timer(minute, seconds)
                case 6:
                    print("Returning to main menu.")
                    break
                case _:
                    print("Invalid choice. Try again.")
        except ValueError:
            print("Invalid input. Please enter a number.")

