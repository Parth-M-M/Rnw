# House Price Prediction and Regression Analysis

## Project Overview

This project demonstrates an end-to-end regression analysis workflow using Python for predicting house prices. The notebook includes:

- Data loading and preprocessing
- Exploratory Data Analysis (EDA)
- Correlation analysis and visualization
- Feature selection
- Train-test splitting
- Regression model preparation
- Data visualization using Matplotlib and Seaborn
- Automated profiling using Sweetviz

The project is implemented in a Jupyter Notebook environment and uses common data science libraries such as Pandas, NumPy, Matplotlib, Seaborn, and Scikit-learn.

---

# Dataset Information

The dataset used in this project is:

`Advanced_Regression_HousePrice_Dataset_3800.csv`

The dataset contains multiple housing-related features used to predict house prices.

## Example Features

- area_sqft
- bedrooms
- bathrooms
- location_score
- property_age
- distance_city_km
- near_school
- near_hospital
- parking_spaces
- crime_rate
- house_price

---

# Technologies Used

## Programming Language

- Python 3

## Libraries

- Pandas
- NumPy
- Matplotlib
- Seaborn
- Sweetviz
- Scikit-learn

---

# Project Workflow

## 1. Import Required Libraries

The notebook begins by importing the required Python libraries for:

- Data manipulation
- Visualization
- Machine learning
- Statistical analysis

---

## 2. Load Dataset

The CSV dataset is loaded into a Pandas DataFrame.

```python
import pandas as pd

df = pd.read_csv('Advanced_Regression_HousePrice_Dataset_3800.csv')
```

---

## 3. Data Cleaning

The notebook performs several preprocessing operations:

- Checking missing values
- Checking duplicate rows
- Dropping unnecessary columns
- Inspecting data types

Example:

```python
df.isnull().sum()
df.duplicated().sum()
```

---

## 4. Exploratory Data Analysis (EDA)

The project includes:

- Statistical summaries
- Correlation analysis
- Heatmaps
- Feature relationship visualization

### Correlation Heatmap

```python
sns.heatmap(df.corr(), annot=True)
```

---

## 5. Automated EDA Report

Sweetviz is used to generate a detailed automated analysis report.

```python
import sweetviz as sv
report = sv.analyze(df)
report.show_html('report.html')
```

The generated HTML report provides:

- Feature distributions
- Correlation insights
- Missing value analysis
- Data summaries

---

## 6. Feature Selection

Selected features are used to build the regression model.

Example:

```python
X = df[['area_sqft', 'bedrooms', 'bathrooms']]
Y = df['house_price']
```

---

## 7. Train-Test Split

The dataset is split into training and testing sets.

```python
from sklearn.model_selection import train_test_split

X_train, X_test, Y_train, Y_test = train_test_split(
    X,
    Y,
    test_size=0.2,
    random_state=42
)
```

---

# Installation Guide

## Clone Repository

```bash
git clone <repository-link>
cd <project-folder>
```

## Install Dependencies

```bash
pip install pandas numpy matplotlib seaborn scikit-learn sweetviz
```

---

# Running the Project

## Launch Jupyter Notebook

```bash
jupyter notebook
```

Open:

`PR2EXAM.ipynb`

Run all notebook cells sequentially.

---

# Outputs

The project generates:

- Statistical summaries
- Correlation matrices
- Heatmaps
- Sweetviz HTML report
- Training and testing datasets

---

# Folder Structure

```text
project-folder/
│
├── PR2EXAM.ipynb
├── Advanced_Regression_HousePrice_Dataset_3800.csv
├── report.html
├── README.md
└── requirements.txt
```

---

# Learning Objectives

This project helps understand:

- Data preprocessing techniques
- Exploratory Data Analysis (EDA)
- Correlation analysis
- Regression workflow preparation
- Data visualization techniques
- Machine learning preprocessing pipelines

