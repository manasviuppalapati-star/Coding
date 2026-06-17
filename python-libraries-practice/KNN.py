
#Classification Example
from sklearn.neighbors import KNeighborsClassifier
X = [[1],[2],[3],[5],[6],[7]]
y = ["Fail","Fail","Fail",
     "Pass","Pass","Pass"]
model = KNeighborsClassifier(
    n_neighbors=3
)
model.fit(X,y)
prediction = model.predict([[11]])
print(prediction)


# KNN Regression Code
from sklearn.neighbors import KNeighborsRegressor
X = [[1000],[1200],[1500]]
y = [20,25,30]
model = KNeighborsRegressor(
    n_neighbors=3
)
model.fit(X,y)
prediction = model.predict([[1300]])
print(prediction)

