import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns

class salesdataanalyzer:
    data = None

    def __init__(self):
        self.data = None

    def load_data(self):
        try:
            path = input("Enter the CSV file path: ")
            self.data = pd.read_csv(path)
            print("Data loaded successfully.")
        except FileNotFoundError:
            print("Error: The file was not found.")
        except pd.errors.EmptyDataError:
            print("Error: The file is empty.")
        except pd.errors.ParserError:
            print("Error: The file could not be parsed.")
        except Exception as e:
            print(f"An unexpected error occurred: {e}")

    def head(self):
        return self.data.head()

    def tail(self):
        return self.data.tail()

    def col(self):
        return self.data.columns

    def types(self):
        return self.data.dtypes

    def info(self):
        return self.data.info()

    def todatetime(self, name, no):
        try:
            if no == 1:
                self.data[name] = pd.to_datetime(self.data[name], dayfirst=True)
            elif no == 2:
                self.data[name] = pd.to_datetime(self.data[name], yearfirst=True)
            else:
                print("INVALID INPUT PLEASE TRY AGAIN !!!")
                return
            print("Data type Changed")
        except Exception as e:
            print(f"Error converting to datetime: {e}")

    def sort_by(self, by, ascending=True):
        try:
            sorted_df = self.data.sort_values(by=by, ascending=ascending)
            return sorted_df
        except KeyError:
            print(f"Error: Column '{by}' does not exist in the DataFrame.")
            return self.data
        except Exception as e:
            print(f"Unexpected error: {e}")
            return self.data

    def check_missing(self):
        try:
            print(self.data.isnull().sum())
        except Exception as e:
            print(f"Error checking missing values: {e}")

    def drop_missing(self, axis=0):
        try:
            self.data = self.data.dropna(axis=axis)
            print("Missing values dropped.")
        except Exception as e:
            print(f"Error dropping missing values: {e}")

    def fill_missing_with_value(self, value):
        try:
            self.data = self.data.fillna(value)
            print(f"Missing values filled with {value}.")
        except Exception as e:
            print(f"Error filling missing values: {e}")

    def fill_missing_with_statistic(self, column, method="mean"):
        try:
            if method == "mean":
                value = self.data[column].mean()
            elif method == "median":
                value = self.data[column].median()
            elif method == "mode":
                value = self.data[column].mode()[0]
            else:
                print("Invalid method.")
                return
            self.data[column] = self.data[column].fillna(value)
            print(f"{column} filled with {method}: {value}")
        except Exception as e:
            print(f"Error filling missing values using {method}: {e}")

    def forward_fill(self):
        try:
            self.data = self.data.ffill()
            print("Forward fill applied.")
        except Exception as e:
            print(f"Error in forward fill: {e}")

    def backward_fill(self):
        try:
            self.data = self.data.bfill()
            print("Backward fill applied.")
        except Exception as e:
            print(f"Error in backward fill: {e}")

    def interpolate_missing(self):
        try:
            self.data = self.data.interpolate()
            print("Interpolated missing values.")
        except Exception as e:
            print(f"Error in interpolation: {e}")

    def save_plot(self):
        try:
            save_opt = input("Do you want to save the plot? (y/n): ").lower()
            if save_opt == 'y':
                filename = input("Enter filename (without extension): ")
                extension = input("Enter extension (png/pdf): ").lower()
                if extension in ['png', 'pdf']:
                    plt.savefig(f"{filename}.{extension}")
                    print(f"Plot saved as {filename}.{extension}")
                else:
                    print("Invalid extension. Plot not saved.")
        except Exception as e:
            print(f"Error saving plot: {e}")

    def check_loaded(self):
        if self.data is None:
            print("No data loaded yet. Please load the dataset first.")
            return False
        return True
    def get_column_statistics(self, column):
        try:
            if column.isdigit():
                col_index = int(column)
                if 0 <= col_index < len(self.data.columns):
                    column = self.data.columns[col_index]
                else:
                    print("Column index out of range.")
                    return
            result = self.data[column].describe()
            print(result)
        except Exception as e:
            print(f"Error getting column statistics: {e}")


                    
obj = salesdataanalyzer()
while True :
        print(" Please select an option: \n1. Load Dataset\n2. Explore Data\n3. Change colunm data type\n4. Perform DataFrame Operations\n5. Handle Missing Data\n6. Generate Descriptive Statistics\n7. Data Visualization/save visualization\n9. Exit\n===============================================================================")
        userinput = int(input("Enter your choice : "))
        if userinput == 1 :
            obj.load_data()  # train.csv
        elif userinput == 2 :
            while True :
                print("== Explore Data ==\n1. Display the first 5 rows\n2. Display the last 5 rows\n3. Display column names\n4. Display data types\n5. Display basic info\n6. Back to Main Menu ")
                user_in_2 = int(input("Enter your choice : "))
                if user_in_2 == 1 :
                    print(obj.head())
                elif user_in_2 == 2 :
                    print(obj.tail())
                elif user_in_2 == 3 : 
                    print(obj.col())
                elif user_in_2 == 4 :
                    print(obj.types())
                elif user_in_2 == 5 :
                    print(obj.info())
                elif user_in_2 == 6 :
                    print("GOING BACK TO MAIN MENU")
                    break
                else:
                    print("INVALID INPUT PLEASE TRY AGAIN !!!")
        elif userinput == 3 :
            while True :
                print("== Change colunm data type == \n1. To datetime \n2. To integer \n3. Exit")
                user_in_3 = int(input("Enter Your Choice : "))
                if user_in_3 == 1 :
                    while True :
                        print("== Type of Date == \n1. Day First \n2. Year First \n3. Exit")
                        user_in_4 = int(input("Enter your choice : "))
                        print(obj.info())
                        choice = obj.data.columns
                        count = 1
                        print("== name of colunms ==")
                        for i in choice :
                                    print(f"{count}. {i}")
                                    count += 1
                        user_in_5 = int(input("Enter Your choice"))
                        obj.todatetime(obj.data[user_in_5],user_in_4)
                elif user_in_3 == 2 :
                        print(obj.info())
                        choice = obj.data.columns
                        count = 1
                        print("== name of colunms ==")
                        for i in choice :
                                    print(f"{count}. {i}")
                                    count += 1
                        user_in_5 = int(input("Enter Your choice"))
                        obj.data[user_in_5 - 1] = pd.to_numeric([obj.data[user_in_5]])
                elif user_in_3 == 3 :
                    print("GOING BACK TO MAIN MENU")
                    break
                else :
                    print("INVALID INPUT TRY AGAIN !!!")
        
        elif userinput == 4 :
            while True :
                    print("== Preform dataframe operation == \n1. ADD COLUNM \n2. DROP COLUNM \n3. RENAME COLUNM \n4. Group by \n5. Sort by \n6. Exit")
                    user_in_6 = int(input("ENTER YOUR CHOICE : "))
                    choice = obj.data.columns
                    if user_in_6 == 1 :
                        count = 1
                        print("== name of colunm ==")
                        for i in choice :
                                    print(f"{count}. {i}")
                                    count += 1
                        col_name = input("Enter colunm name :")
                        obj.data[col_name] = input("Enter your data : ")
                    elif user_in_6 == 2 :
                        count = 1
                        print("== name of colunm ==")
                        for i in choice :
                                    print(f"{count}. {i}")
                                    count += 1
                        col_name = input("Enter colunm name :")
                        print(obj.data.drop(columns=[col_name],inplace=True))
                    elif user_in_6 ==  3:
                        count = 1
                        print("== name of colunm ==")
                        for i in choice :
                                    print(f"{count}. {i}")
                                    count += 1
                        col_name = input("Enter colunm name :")
                        print(obj.data.rename(columns={col_name:input("Enter new colunm name :")},inplace=True))
                    elif user_in_6 == 4 :
                        count = 1
                        print("== name of colunm ==")
                        for i in choice :
                                    print(f"{count}. {i}")
                                    count += 1
                        col_name = input("Enter colunm name :")
                        print(obj.data.groupby(col_name))
                    elif user_in_6 == 5 :
                        count = 1
                        print("== name of colunm ==")
                        for i in choice :
                                    print(f"{count}. {i}")
                                    count += 1
                        col_name = input("Enter colunm name :")
                        result = obj.sort_by(col_name,ascending=input("Enter True or False exactly : "))
                    elif user_in_6 == 6 :
                        print("GOING BACK TO MAIN MENU")
                        break
                    else :
                        print("INVALID INPUT TRY AGAIN !!!")

        elif userinput == 5 :
            while True :
                print("== HANDLE MISSING VALUE == \n1. Check Missing Values \n2. Drop Missing Values \n3. Fill Missing Values with a Specific Value \n4. Fill Missing Values with Mean/Median/Mode \n5. Forward Fill (Propagate last valid value forward) \n6. Backward Fill (Use next valid value to fill) \n7. Interpolate Missing Values (for numeric data) \n8. EXIT ")
                user_in_7 = int(input("ENTER YOUR CHOICE : "))
                if user_in_7 == 1 :
                    obj.check_missing()
                elif user_in_7 == 2 :
                    print("axis=0 → drop rows with missing values\naxis=1 → drop columns with missing values")
                    axis = int(input("Enter o or 1 according your choice :"))
                    if axis == 0 :
                        obj.drop_missing(0)
                    elif axis == 1 :
                        obj.drop_missing(1)
                    else :
                        print("INVALID INPUT PLEASE TRY AGAIN !!!")
                elif user_in_7 == 3 :
                    value = int(input("Enter your value you want to place : "))
                    obj.fill_missing_with_value(value) 
                elif user_in_7 == 4 :
                        count = 1
                        print("== name of colunm ==")
                        for i in choice :
                                    print(f"{count}. {i}")
                                    count += 1
                        col_name = input("Enter colunm name :")
                        method = input("Enter method name (mean , median , mode) :")
                        obj.fill_missing_with_statistic(col_name,method=method)
                elif user_in_7 == 5 :
                    obj.forward_fill()
                elif user_in_7 == 6 :
                    obj.backward_fill()
                elif user_in_7 == 7 :
                    obj.interpolate_missing()
                elif user_in_7 == 8 :
                    print("GOING BACK TO MAIN MENU") 
                    break
                else :
                    print("INVALID INPUT PLEASE TRY AGAIN !!!")
        elif userinput == 6 :
            while True :
                print("== Generate Descriptive Statistics == \n1. get_summary_statistics() (mean, std, min, max, etc.)\n2. get_column_statistics(column)\n3. calculate_median(column)\n4. calculate_mode(column)\n5.calculate_variance(column)\n6. calculate_std_dev(column)\n7. EXIT")
                user_in_8 = int(input("ENTER YOUR CHOICE : "))
                if user_in_8 == 1 :
                    result = obj.data.describe() 
                    print(result)
                elif user_in_8 == 2 :
                        count = 1
                        print("== name of colunm ==")
                        for i in choice :
                                    print(f"{count}. {i}")
                                    count += 1
                        col_name = input("Enter colunm name :")
                        result = obj.data[col_name].describe()
                        print(result)
                elif user_in_8 == 3 :
                        count = 1
                        print("== name of colunm ==")
                        for i in choice :
                                    print(f"{count}. {i}")
                                    count += 1
                        col_name = input("Enter colunm name :")
                        result = obj.data[col_name].median()
                        print(result)
                elif user_in_8 == 4 :
                        count = 1
                        print("== name of colunm ==")
                        for i in choice :
                                    print(f"{count}. {i}")
                                    count += 1
                        col_name = input("Enter colunm name :")
                        result = obj.data[col_name].mode()
                elif user_in_8 == 5 :
                        count = 1
                        print("== name of colunm ==")
                        for i in choice :
                                    print(f"{count}. {i}")
                                    count += 1
                        col_name = input("Enter colunm name :")
                        result = obj.data[col_name].var(axis=0)
                elif user_in_8 == 6 :
                        count = 1
                        print("== name of colunm ==")
                        for i in choice :
                                    print(f"{count}. {i}")
                                    count += 1
                        col_name = input("Enter colunm name :")
                        result = obj.data[col_name].std(axis=0)
                elif user_in_8 == 7 :
                    print("GOING BACK TO MAIN MENU") 
                    break  
                else :
                    print("INVALID INPUT PLEASE TRY AGAIN !!!")
        elif userinput == 7 :
            while True :
                    choice = obj.data.columns
                    print("== Data Visualization ==\n1. Bar Plot\n2. Line Plot\n3. Scatter Plot\n4. Pie Chart\n5. Histogram\n6. Stack Plot\n7. EXIT")
                    user_in_9 =  int(input("ENTER YOUR CHIOCE : "))
                    if user_in_9 == 1:
                        count = 1
                        print("== name of colunm ==")
                        for i in choice :
                                    print(f"{count}. {i}")
                                    count += 1
                        x_axis = int(input("Enter Categorical Column Number for X-axis: "))
                        y_axis = int(input("Enter Numerical Column Number for Y-axis: "))
                        sns.barplot(x=obj.data.columns[x_axis], y=obj.data.columns[y_axis], data=obj.data)
                        plt.title("Bar Plot")
                        plt.xticks(rotation=45)
                        plt.tight_layout()
                        plt.show()
                        obj.save_plot()
                    elif user_in_9 == 2 :
                        count = 1
                        print("== name of colunm ==")
                        for i in choice :
                                    print(f"{count}. {i}")
                                    count += 1
                        x_axis = int(input("Enter X-axis Column Number: "))
                        y_axis = int(input("Enter Y-axis Column Number: "))
                        sns.lineplot(x=obj.data.columns[x_axis], y=obj.data.columns[y_axis], data=obj.data, marker='o')
                        plt.title("Line Plot")
                        plt.xticks(rotation=45)
                        plt.tight_layout()
                        plt.show()
                        obj.save_plot()
                    elif user_in_9 == 3 :
                        count = 1
                        print("== name of colunm ==")
                        for i in choice :
                                    print(f"{count}. {i}")
                                    count += 1
                        x_axis = int(input("Enter X-axis Column Number: "))
                        y_axis = int(input("Enter Y-axis Column Number: "))
                        sns.scatterplot(x=obj.data.columns[x_axis], y=obj.data.columns[y_axis], data=obj.data)
                        plt.title("Scatter Plot")
                        plt.tight_layout()
                        plt.show()
                        obj.save_plot()
                    elif user_in_9 == 4:
                        count = 1
                        print("== name of colunm ==")
                        for i in choice :
                                    print(f"{count}. {i}")
                                    count += 1
                        col_index = int(input("Enter Column Number for Pie Labels and Counts: "))
                        col_name = obj.data.columns[col_index]
                        pie_data = obj.data[col_name].value_counts()
                        plt.pie(pie_data, labels=pie_data.index, autopct='%1.1f%%', startangle=90)
                        plt.title(f"Pie Chart of {col_name}")
                        plt.axis('equal')
                        plt.tight_layout()
                        plt.show()
                        obj.save_plot()
                    elif user_in_9 == 5 :
                        count = 1
                        print("== name of colunm ==")
                        for i in choice :
                                    print(f"{count}. {i}")
                                    count += 1
                        col_index = int(input("Enter Numerical Column Number for Histogram: "))
                        sns.histplot(data=obj.data, x=obj.data.columns[col_index], kde=True, bins=20)
                        plt.title("Histogram")
                        plt.tight_layout()
                        plt.show()
                        obj.save_plot()
                    elif user_in_9 == 6 :
                        count = 1
                        print("== name of colunm ==")
                        for i in choice :
                                    print(f"{count}. {i}")
                                    count += 1
                        cols = input("Enter multiple numerical column numbers separated by commas (e.g. 2,3,4): ")
                        col_nums = [int(i) for i in cols.split(',')]
                        col_names = [obj.data.columns[i] for i in col_nums]
                        data_to_plot = obj.data[col_names].dropna()
                        plt.stackplot(range(len(data_to_plot)), data_to_plot.T, labels=col_names)
                        plt.legend(loc='upper left')
                        plt.title("Stack Plot")
                        plt.tight_layout()
                        plt.show()
                        
                    else :
                        print("INVALID INPUT PLEASE TRY AGAIN !!!")
        else :
            print("Funtion not available")