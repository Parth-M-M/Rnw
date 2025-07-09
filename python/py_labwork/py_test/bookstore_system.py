import os
from pickle import TRUE
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
import datetime
inventory_data_filepath = "E:\Rnw\python\py_labwork\py_test\inventory_data.csv"
sales_data_filepath = "E:\Rnw\python\py_labwork\py_test\sales_data.csv"
class inventry :
    inventory_data = pd.read_csv()
    def __init__(self, filepath):
        self.filepath = "E:\Rnw\python\py_labwork\py_test\inventory_data.csv"
        if os.path.exists(filepath):
            self.data = pd.read_csv(filepath)
        else:
            self.data = pd.DataFrame(columns=["Title", "Author", "Genre", "Price", "Quantity"])
            self.save_data()

    def save_data(self):
        self.data.to_csv(self.filepath, index=False)

    def display_inventory(self):
        print("\nCurrent Inventory:\n")
        print(self.data.to_string(index=False))

    def add_book(self, title, author, genre, price, quantity):
        if price <= 0 or quantity < 0:
            print("Error: Price must be > 0 and Quantity >= 0.")
            return

        if self.data['Title'].str.lower().eq(title.lower()).any():
            print("Error: Book with this title already exists.")
            return

        new_entry = {
            "Title": title,
            "Author": author,
            "Genre": genre,
            "Price": price,
            "Quantity": quantity
        }
        self.data = self.data.append(new_entry, ignore_index=True)
        self.save_data()
        print(f"Book '{title}' added successfully!")

    def remove_book(self, title):
        if title not in self.data['Title'].values:
            print("Error: Book not found.")
            return

        self.data = self.data[self.data['Title'] != title]
        self.save_data()
        print(f"Book '{title}' removed successfully!")

    def update_book(self, title, price=None, quantity=None, genre=None):
        if title not in self.data['Title'].values:
            print("Error: Book not found.")
            return

        idx = self.data[self.data['Title'] == title].index[0]
        if price is not None:
            if price <= 0:
                print("Error: Price must be > 0.")
                return
            self.data.at[idx, "Price"] = price
        if quantity is not None:
            if quantity < 0:
                print("Error: Quantity must be >= 0.")
                return
            self.data.at[idx, "Quantity"] = quantity
        if genre is not None:
            self.data.at[idx, "Genre"] = genre

        self.save_data()
        print(f"Book '{title}' updated successfully!")


                
class sales:
        sales_data = pd.read_csv()
        
        def add_sales_record(self, record_dict):
                new_record = pd.DataFrame([record_dict])
                self.data = pd.concat([self.data, new_record], ignore_index=True)
                print("Record added successfully.")
                self.save_data()
        
        def search_by_sales_column(self, column_name, value):
            if column_name in self.data.columns:
                result = self.data[self.data[column_name] == value]
                print(f"\n--- Records where {column_name} == {value} ---")
                print(result)
            else:
                print("Column not found.")
        
        def update_sales_record(self, search_col, search_val, update_col, new_val):
            if search_col in self.data.columns and update_col in self.data.columns:
                condition = self.data[search_col] == search_val
                self.data.loc[condition, update_col] = new_val
                print("Record updated successfully.")
                self.save_data()
            else:
                print("Column(s) not found.")

        def delete_sales_record(self, column_name, value):
            if column_name in self.data.columns:
                self.data = self.data[self.data[column_name] != value]
                print(f"Records with {column_name} == {value} deleted.")
                self.save_data()
            else:
                print("Column not found.")

class bookstore(inventry,sales) :    
        def add_book(self,title,author,genre,price,quantity):
            self.add_book(title = title, author = author, genre = genre, price = price , quantity = quantity)
        
        def update_inventory(self,title, price=None, quantity=None, genre=None):
            self.update_book(self,title, price=price, quantity=quantity, genre=genre)

        def record_sales(self,title,Quantity,Total):
            x = datetime.datetime.now()
            self.add_sales_record({"Date":x.strftime("%x"),"Title":title,"Quantity Sold":Quantity,"Total Revenue":Total})

            
            

obj = bookstore()
while True :
    print("== Bookstore Inventory and Analytics System == \n1. view inventry \n2. view sales \n3.record sales \n4.update inventory \n5. sales analysis and computation \n6. visualization \n7. EXIT PROGRAM")
    user_choice = int(input("ENTER USER CHOICE : "))
    if user_choice  == 1 :
        obj.inventory_data.head(10)
    elif user_choice == 2 :
        obj.sales_data.head(10)
    elif user_choice == 3 :
        title = input("Enter title of the book ")
        quantity = input("enter quantity sold ")
        total = input("Enter Total revenue")
        obj.record_sales(title,quantity,total)
    elif user_choice == 4 :
        title = input("Enter title of the book ")
        price = input("Enter price -(skip if not available) ")
        quantity = input("Enter quantity sold (skip if not available)")
        genre = input("Enter Book genre (skip if not available)")
        obj.update_inventory(title,price,quantity,genre)
    elif user_choice == 5 :
        inventory = pd.read_csv(inventory_data_filepath)
        sales_data = pd.read_csv(sales_data_filepath)
        print("== sales analysis and computation == \n1. Total revenue per mounth \n2. avearage price of book purchased \n3.sales growth rates per mounth \n4. sales Trends \n5.best selling books \n6. EXIT")
        choice = int(input("Enter your choice : "))
        if choice == 1 :
            sales_data['Date'] = pd.to_datetime(sales_data['Date'])
            sales_data['Year-Month'] = sales_data['Date'].dt.to_period('M')
            monthly_revenue = sales_data.groupby('Year-Month')['Total Revenue'].apply(lambda x: np.sum(x))
            print(monthly_revenue)
        elif choice == 2 :
            sales_data['Price per Book'] = sales_data['Total Revenue'] / sales_data['Quantity Sold']
            average_price = np.mean(sales_data['Price per Book'])
            print(average_price)
        elif choice == 3 :
            monthly_revenue_df = monthly_revenue.reset_index()
            monthly_revenue_df.columns = ['Month', 'Total Revenue']
            monthly_revenue_df['Growth Rate (%)'] = monthly_revenue_df['Total Revenue'].pct_change() * 100
            print(monthly_revenue_df['Growth Rate (%)'])
        elif choice == 4 :
            while TRUE :
                sales_data['Date'] = pd.to_datetime(sales_data['Date'])
                sales_data['Year-Month'] = sales_data['Date'].dt.to_period('M')
                merged_data = pd.merge(sales_data, inventory, on='Title', how='left')
                print("== sales trends == \n1. by title \n2. by genre \n3. by Authour \n4. Exit")
                choice4 = int(input("Enter Your choice : "))
                if choice4 == 1:
                    sales_by_title = merged_data.groupby(['Title', 'Year-Month'])['Total Revenue'].sum().reset_index()
                    print("Sales by Title:\n", sales_by_title.head())
                elif choice4 == 2 :
                    sales_by_genre = merged_data.groupby(['Genre', 'Year-Month'])['Total Revenue'].sum().reset_index()
                    print("Sales by Genre:\n", sales_by_genre.head())
                elif choice4 == 3 :
                    sales_by_author = merged_data.groupby(['Author', 'Year-Month'])['Total Revenue'].sum().reset_index()
                    print("Sales by Author:\n", sales_by_author.head())
                elif choice4 == 4 :
                    print("back to main menu")
                    break
                else :
                    print("INVALID INPUT PLEASE TRY AGAIN !!!")
        elif choice == 5 :
            sales_data['Date'] = pd.to_datetime(sales_data['Date'])
            sales_data['Year-Month'] = sales_data['Date'].dt.to_period('M')
            monthly_sales = sales_data.groupby(['Year-Month', 'Title'])['Quantity Sold'].sum().reset_index()
            best_selling_books = monthly_sales.loc[monthly_sales.groupby('Year-Month')['Quantity Sold'].idxmax()].reset_index(drop=True)
            print(best_selling_books)

        elif choice == 6 :                   
            print("back to  main menu ")
            break
        else :
            print("INVALID INPUT PLEASE TRY AGAIN !!!")
    elif user_choice == 6:
        merged_data = pd.merge(sales_data, inventory, on='Title', how='left')
        print("==visualization == \n1. barplot \n2. line graph \n3. pie chart \n4.heatmap")
        choice6 = int(input("Enter your choice : "))
        if choice6 == 1 :
            genre_sales = merged_data.groupby('Genre')['Total Revenue'].sum().sort_values(ascending=False)
            plt.figure(figsize=(10,6))
            sns.barplot(x=genre_sales.values, y=genre_sales.index, palette='viridis')
            plt.title('Total Sales by Genre')
            plt.xlabel('Total Revenue')
            plt.ylabel('Genre')
            plt.tight_layout()
            plt.show()
        elif choice6 == 2 :
            merged_data['Date'] = pd.to_datetime(merged_data['Date'])
            merged_data['Year-Month'] = merged_data['Date'].dt.to_period('M')
            monthly_sales = merged_data.groupby('Year-Month')['Total Revenue'].sum()
            plt.figure(figsize=(10,6))
            monthly_sales.plot(marker='o', color='teal')
            plt.title('Monthly Sales Trends')
            plt.xlabel('Month')
            plt.ylabel('Total Revenue')
            plt.grid(True)
            plt.tight_layout()
            plt.show()
        elif choice6 == 3 :
            genre_revenue = merged_data.groupby('Genre')['Total Revenue'].sum()
            plt.figure(figsize=(8,8))
            plt.pie(genre_revenue, labels=genre_revenue.index, autopct='%1.1f%%', startangle=140)
            plt.title('Revenue Share by Book Genre')
            plt.tight_layout()
            plt.show()
        elif choice6 == 4 :
            merged_data['Price per Book'] = merged_data['Total Revenue'] / merged_data['Quantity Sold']
            book_stats = merged_data.groupby('Title').agg({
                'Price per Book': 'mean',
                'Quantity Sold': 'sum',
                'Total Revenue': 'sum'
            }).reset_index()
            corr = book_stats[['Price per Book', 'Quantity Sold', 'Total Revenue']].corr()
            plt.figure(figsize=(6,5))
            sns.heatmap(corr, annot=True, cmap='coolwarm', fmt=".2f")
            plt.title('Correlation Between Price and Sales')
            plt.tight_layout()
            plt.show()
        elif choice6 == 5 :
            print("Back to min menu")
            break
        else :
            print("INVALID INPUT PLEASE TRY AGAIN !!!")
    else :
        print("INVALID INPUT PLEASE TRY AGAIN !!!")
    

