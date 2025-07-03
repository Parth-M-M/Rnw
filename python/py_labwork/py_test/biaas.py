import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns

class bookstore :
    inventry_data = pd.read_csv("E:\Rnw\python\py_labwork\py_test\inventory_data.csv")
    sales_data = pd.read_csv("E:\Rnw\python\py_labwork\py_test\sales_data.csv")
    
    def add_book(self,title,author,genre,price,quantity):
        
        new_row = pd.DataFrame([{"Title":title,"Author":author,"Genre":genre,"Price":price,"Quantity":quantity}])
        pd.concat([self.inventry_data,new_row],ignore_index=True)
        print(self.inventry_data.tail())