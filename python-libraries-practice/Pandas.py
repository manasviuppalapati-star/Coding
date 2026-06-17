import pandas as pd

#series
"""marks = pd.Series([85, 92, 78, 88])
print(marks)"""

#data frame
"""data = {
    "Name": ["Rahul", "Priya", "Arjun"],
    "Marks": [85, 92, 78]
}
df = pd.DataFrame(data)
print(df)"""


#Reading EXCEL files:
df=pd.read_excel("students.xlsx")
"""print(df.head())
print(df.tail())
result=df[df["Marks"]>90]
print(result)"""

#Assigning Grades and adding column:
"""marks=list(df["Marks"])
Grades=[]
for mark in marks:
    if mark > 90:
        Grades.append("A")
    elif mark > 80:
        Grades.append("B")
    elif mark > 70:
        Grades.append("C")
    else:
        Grades.append("D")
df["Grade"]=Grades
df.to_excel("students.xlsx",index=False)
print(df)"""

#Find students scoring above average:
"""marks=list(df["Marks"])
length=len(marks)
avg=sum(marks)//length
result=df[df["Marks"]>avg]
print(result)"""

#Handling Missing Values:
"""import pandas as pd
data = {
    "Department": ["CSE", "CSE", "ECE", "ECE", "MECH"],
    "Marks": [90, 80, 70, 85, 75]
}
df = pd.DataFrame(data)
avg_marks = df.groupby("Department")["Marks"].mean()
print(avg_marks)"""

"""Dataset:
Name
Department
Marks
Attendance

Tasks:
Find topper
Average marks
Attendance analysis
Grade calculation
"""
avg_marks = df.groupby("Department")["Marks"].mean()
maximum=df.groupby("Department")["Marks"].max()
avg_attendance = df.groupby("Department")["Attendance"].mean()
marks=list(df["Marks"])
Grades=[]
for mark in marks:
    if mark > 90:
        Grades.append("A")
    elif mark > 80:
        Grades.append("B")
    elif mark > 70:
        Grades.append("C")
    else:
        Grades.append("D")
df["Grade"]=Grades
df.to_excel("students.xlsx",index=False)

print("avg marks",avg_marks)
print("Maximum marks",maximum)
print("Avg attendance",avg_attendance)






