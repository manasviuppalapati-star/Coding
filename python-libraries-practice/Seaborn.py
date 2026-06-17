#Used for trends over time.
import seaborn as sns
import pandas as pd
import matplotlib.pyplot as plt


#Line Plot
data1 = pd.DataFrame({
    "Day":[1,2,3,4,5],
    "Mood":[60,65,55,70,80]
})

"""sns.lineplot(x="Day", y="Mood", data=data)

plt.show()"""

#Bar Plot
"""data = pd.DataFrame({
    "Department":["CSE","ECE","MECH"],
    "AverageMarks":[80,75,65]
})

sns.barplot(x="Department",
            y="AverageMarks",
            data=data)

plt.show()
"""

#Scatter Plot
"""data = pd.DataFrame({
    "Sleep":[4,5,6,7,8],
    "Wellness":[40,50,60,75,90]
})

sns.scatterplot(
    x="Sleep",
    y="Wellness",
    data=data
)

plt.show()"""

#Histogram
"""tips = sns.load_dataset("tips")

sns.histplot(tips["total_bill"])

plt.show()"""

#Box Plot
"""sns.boxplot(
    x=data["Mood"]
)

plt.show()"""



#Violin Plot
"""sns.violinplot(
    x="Day",
    y="Mood",
    data=data1
)

plt.show()"""

#Count Plot
"""sns.countplot(
    x="Day",
    data=data1
)

plt.show()"""

#Heatmap:
"""corr = data1.corr(numeric_only=True)

sns.heatmap(
    corr,
    annot=True
)

plt.show()"""

#Pair Plot
"""sns.pairplot(data1)
plt.show()"""

#Regression Plot
"""sns.regplot(
    x="Day",
    y="Mood",
    data=data1
)
plt.show()"""

# Joint Plot
"""sns.jointplot(
    x="Day",
    y="Mood",
    data=data1,
    kind="scatter"
)

plt.show()"""

#Facet Grid
"""g = sns.FacetGrid(
    data1,
    col="Day"
)

g.map(
    plt.hist,
    "Mood"
)

plt.show()"""






