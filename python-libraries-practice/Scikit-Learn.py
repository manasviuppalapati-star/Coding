from sklearn.linear_model import LinearRegression
"""#Y=mX+c, Y=20*X+0
X = [[1],[2],[3],[4],[5]]
y = [20,40,60,80,100]
model = LinearRegression()
model.fit(X,y)
prediction = model.predict([[10]])
print(prediction)"""



#Multiple Linear Regression
#Use

#Formula:
#y=b_0+b_1x_1+b_2x_2+b_3x_3
"""X = [
 [4,8,90],
 [6,7,95],
 [3,5,70]
]
y = [73,85,50]
model = LinearRegression()
model.fit(X, y)
prediction = model.predict([[10,7,85]])"""

"""from sklearn.linear_model import LinearRegression
from sklearn.model_selection import train_test_split
from sklearn.metrics import r2_score

X = [
    [4,8,90],
    [6,7,95],
    [3,5,70],
    [5,6,85],
    [7,8,98],
    [2,4,60],
    [8,7,99],
    [6,6,88],
    [4,7,80],
    [5,5,75]
]

y = [73,85,50,70,92,40,95,80,68,65]

# Split data
X_train, X_test, y_train, y_test = train_test_split(
    X,
    y,
    test_size=0.2,
    random_state=25
)

# Train model
model = LinearRegression()
model.fit(X_train, y_train)

# Test model
y_pred = model.predict(X_test)

print("Actual:", y_test)
print("Predicted:", y_pred)

# Accuracy
print("R² Score:", r2_score(y_test, y_pred))"""

"""from sklearn.tree import DecisionTreeClassifier

X = [
    [2],
    [3],
    [7],
    [8]
]

y = [
    "Fail",
    "Fail",
    "Pass",
    "Pass"
]

model = DecisionTreeClassifier()

model.fit(X, y)
print(model.predict([[5]]))"""


from sklearn.ensemble import RandomForestClassifier

# Training Data
X = [
    [2],  # Study Hours
    [3],
    [7],
    [8]
]

y = [
    "Fail",
    "Fail",
    "Pass",
    "Pass"
]

# Create Model
"""model = RandomForestClassifier(
    n_estimators=100,
    random_state=42
)

# Train Model
model.fit(X, y)

# Test Predictions
print("4 Hours:", model.predict([[4]]))
print("5 Hours:", model.predict([[5]]))
print("6 Hours:", model.predict([[6]]))
print("7 Hours:", model.predict([[7]]))"""
