import matplotlib.pyplot as plt

"""months = ["Jan","Feb","Mar","Apr","May"]
sales = [100,150,200,250,300]
#plt.plot(months,sales)
#plt.plot(months,sales,
         linestyle='--')
#plt.grid(True)
plt.title("Monthly Sales")
plt.xlabel("Months")
plt.ylabel("Sales")
plt.show()
#plt.plot(months,sales,marker='o')
#plt.grid(True)"""
#First one is X axis and 2nd one is Y axis

"""Problem 1
Student marks:
marks = [50,60,75,80,95]

Create line graphs.
"""
"""marks=[50,60,75,80,95]
stus=["stu1","stu2","stu3","stu4","stu5"]
plt.plot(stus,marks,marker="o")
plt.title("Class Report")
plt.xlabel("Students")
plt.ylabel("Marks")
plt.show()"""


"""Problem 2
Daily temperatures:
temps = [30,31,29,35,34]

Add title and labels.
"""
"""temps = [30,31,29,35,34]
days=["Day1","Day2","Day3","Day4","Day5"]
plt.plot(days,temps,marker="o")
plt.title("Temperature Report")
plt.xlabel("Week")
plt.ylabel("Temperature")
plt.show()"""

#Bar Chart

"""departments = ["CSE","ECE","MECH"]
students = [120,100,80]

plt.bar(departments,students)"""

#Pie Chart

"""subjects = ["Python","Java","AI"]

students = [40,35,25]

plt.pie(students,
        labels=subjects,
        autopct="%1.1f%%")

plt.show()"""


#Histogram
"""marks = [55,60,65,70,72,75,80,85,90]
plt.hist(marks)
plt.show()"""

#Scatter Plot
"""hours = [1,2,3,4,5]
marks = [40,50,60,70,90]
plt.scatter(hours,marks)
plt.show()"""

"""Multiple Lines
Compare two products."""
"""months = ["Jan","Feb","Mar","Apr"]

productA = [100,120,150,180]
productB = [90,110,140,200]

plt.plot(months,productA,label="A")
plt.plot(months,productB,label="B")
plt.legend()
plt.show()"""

"""Subplots
Multiple charts in one figure.
plt.subplot(1,2,1)
plt.plot([1,2,3],[4,5,6])
plt.subplot(1,2,2)
plt.bar([1,2,3],[4,5,6])
plt.show()"""


"""Saving Graph
plt.plot(months,sales)

plt.savefig("sales.png")"""

#Real-Time Style Dashboard

"""import pandas as pd
import matplotlib.pyplot as plt
df = pd.read_csv("sales.csv")
plt.plot(df["Month"],
         df["Revenue"])
plt.show()"""

"""days = [1,2,3,4,5]
burnout = [20,25,30,40,55]
print(plt.show())
plt.axhline(y=55)
plt.axvline(x=5)
plt.axhline(y=50, linestyle='--')
plt.axvline(x=80, linestyle='--')
print(plt.show())"""



















