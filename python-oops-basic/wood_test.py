"""This modules imports the Wood and
Plywood classes and tests them."""

from WOOD import Wood,Plywood

#Create instance of the Wood and Plywood classes.
#wood1=Wood("Lumber - 2x4 inch","Untreated",5.50,10)
plywood1=Plywood("Plywood - 1/4 inch","Sanded",33.00,20)

#Display the Wood and Plywood instance values.
#wood1.display()
plywood1.display()

#sell three pieces of wood and display the results.
#wood1.sell_wood(3)
#wood1.display()

#Change plywood width to 24 inches and display the results.
#plywood1.width=24
#plywood1.display()
plywood2=Plywood("Plywood - 1/8 inch","Rough",27.00,25)

if plywood1== plywood2:
    print("Both products cost the same.")
elif plywood1 > plywood2:
    print(f"{plywood1.product} is more expensive than {plywood1.product}.")
    
