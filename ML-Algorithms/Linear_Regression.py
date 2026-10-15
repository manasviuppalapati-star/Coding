# Linear Regression

import numpy as np
from sklearn.linear_model import LinearRegression
import matplotlib.pyplot as plt

# Training data
X = np.array([[1], [2], [3], [4], [5]])
y = np.array([30, 40, 50, 60, 70])

# Create the model
model = LinearRegression()

# Train the model
model.fit(X, y)

# Predict marks for a student studying 6 hours
prediction = model.predict([[6]])

print("Slope:", model.coef_[0])
print("Intercept:", model.intercept_)
print("Predicted marks:", prediction[0])

# Visualize the results
plt.scatter(X, y, color="blue", label="Actual data")
plt.plot(X, model.predict(X), color="red", label="Regression line")
plt.xlabel("Study Hours")
plt.ylabel("Marks")
plt.title("Linear Regression")
plt.legend()
plt.show()
