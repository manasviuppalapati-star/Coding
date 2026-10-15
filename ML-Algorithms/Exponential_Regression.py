
import numpy as np
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression

# Training data
X = np.array([0, 1, 2, 3, 4, 5])
y = np.array([2.00, 3.30, 5.44, 8.96, 14.78, 24.36])

# Convert input into a 2D array
X = X.reshape(-1, 1)

# Apply logarithmic transformation
log_y = np.log(y)

# Train the regression model
model = LinearRegression()
model.fit(X, log_y)

# Recover exponential parameters
a = np.exp(model.intercept_)
b = model.coef_[0]

print("Initial value (a):", a)
print("Growth rate (b):", b)

# Predict for x = 6
x_new = np.array([[6]])
prediction = np.exp(model.predict(x_new))

print("Predicted value:", prediction[0])

# Plot the data and fitted curve
x_curve = np.linspace(0, 6, 100).reshape(-1, 1)
y_curve = np.exp(model.predict(x_curve))

plt.scatter(X, y, color="blue", label="Actual data")
plt.plot(x_curve, y_curve, color="red", label="Exponential curve")
plt.xlabel("X")
plt.ylabel("Y")
plt.title("Exponential Regression")
plt.legend()
plt.show()
