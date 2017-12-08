class Restaurant :
    menu = {}
    def __init__(self, atmosphere, name) :
         self.atmosphere = atmosphere
         self.name = name

    def show(self):
        print("This restaurant is %s. %s are %s " % self.name, self.name, self.atmosphere)

class CoupleRestaurant(Restaurant) :
    def __init__(self,maximum_people,atmosphere,name,activity,menu):
        super().__init__(self,atmosphere,name)
        self.activity = activity
        self.menu = dict(menu)
    def show(self,price):
        super().show(self)
        print("You can enjoy %s in here." % self.activity)
        name_menu = self.menu.keys()
        price_menu = self.menu.values()
        price_menu.sort()
        minimum = price_menu[0] + price_menu[1]
        if price < minimum :
            print("You can't eat nothing in here")
            print("At least you need \%f" % minimum)
        else :
            for length in range(0, len(name_menu)):
                for se_length in range(length,len(name_menu)):
                    if self.menu[name_menu[length]] + self.menu[name_menu[se_length]] < price :
                        print("You can eat %s and %s." % name_menu[length], name_menu[se_length])


class FamilyRestaurant(Restaurant) :
    def __init__(self,atmosphere,name,discount,menu):
        super().__init__(self,atmosphere,name)
        self.discount = float(discount)
        self.menu = dict(menu)
    def show(self,price,num_people):
        super().show(self)
        name_menu = self.menu.keys()
        price_menu = self.menu.values()
        price_menu.sort()
        if self.discount * num_people > 0.1 :
            total_discount = 0.1
        else :
            total_discount = self.discount * num_people
        minimum = price_menu[0] * (1 - total_discount) * num_people
        if price < minimum:
            print("You can't eat nothin in here")
            print("At least you need \%s" % minimum)
        else :
            for length in range(0, len(name_menu)) :
                if price > self.name_menu[length] * (1 - total_discount) * num_people :
                    print("You can eat %s", self.name_menu[length])
