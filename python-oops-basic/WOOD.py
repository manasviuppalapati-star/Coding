"""This module maintains the inventory
and specifications of wood products."""
class Wood:
    """This class retrives and displays wood product data."""
    def __init__(self,product,form,price,inventory):
        """Construct class instance with wood product attributions."""
        self.__product=product
        self.__form=form
        self.__price=price
        self.__inventory=inventory
    def __eq__(self,other):
        """ Override the equal method"""
        if self.price==other.price:
            return True
    def __gt__(self,other):
        """Override the greater- tahn method."""
        if self.price > other.price:
            return True
    def __lt__(self,other):
        """Override the less - than method:"""
        if self.price<other.price:
            return True

            #Define properties for word products:
    @property
    def product(self):
        return self.__product
    @property
    def form(self):
        return self.__form
    @property
    def price(self):
        return self.__price
    @property
    def inventory(self):
        return self.__inventory
    @product.setter
    def product(self,product):
        self.__product=product
    @form.setter
    def form(self,form):
        self.__form=form
    @price.setter
    def price(self,price):
        self.__price=price
    @inventory.setter
    def inventory(self,inventory):
        self.__inventory=inventory


    def display(self):
        print(f"Product: {self.product}")
        print(f"Form: {self.form}")
        print(f"Price: {self.price}")
        print(f"Inventory: {self.inventory}")
    def sell_wood(self, quantity):
        self.__inventory -= quantity
        print(f"\nSold {quantity} pieces of {self.product}.\n")

class Plywood(Wood):
    """ This class retrieves and displays plywood data."""
    def __init__(self,product,form,price,inventory,width=48,length=96):

        """Construct class instance with plywood attributes."""
        super().__init__(product,form,price,inventory)
        self.__width=width
        self.__length=length

    #define properties for plywood products.
    @property
    def width(self):
        return self.__width
    @property
    def length(self):
        return self.__length
    @width.setter
    def width(self,width):
        self.__width=width
    @length.setter
    def length(self,length):
        self.__length=length

    def display(self):
        """ Display the attributes of plywood product."""
        print(f"This plywood is {self.width} inches wide."
          f" and {self.length} inches long.")
        
