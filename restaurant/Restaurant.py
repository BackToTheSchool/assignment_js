
class Restaurant :
    def __init__(self, atmosphere, name) :
         self.atmosphere = atmosphere
         self.name = name
    def show(self):
        print("This restaurant is %s. %s are %s" % (self.name, self.name, self.atmosphere))

class CoupleRestaurant(Restaurant) :
    def __init__(self,atmosphere,name,activity,menu):
        self.activity = activity
        self.menu = dict(menu)
        super().__init__(atmosphere, name)

    def show(self,Human):
        super().show()
        print("You can enjoy %s in here." % self.activity)
        name_menu = list(self.menu.keys())
        price_menu = list(self.menu.values())
        price_menu.sort()
        minimum = price_menu[0] + price_menu[1]
        if Human.money < minimum :
            print("You can't eat nothing in here")
            print("At least you need \%f" % minimum)
        else :
            for length in range(0, len(name_menu)):

                for se_length in range(length,len(name_menu)):
                    if self.menu[name_menu[length]] + self.menu[name_menu[se_length]] <= Human.money :
                        print("You can eat %s and %s." % (name_menu[length], name_menu[se_length]))
        print('\n')


class FamilyRestaurant(Restaurant) :
    def __init__(self,atmosphere,name,discount,menu):
        self.discount = float(discount)
        self.menu = dict(menu)
        super().__init__(atmosphere, name)
    def show(self,Human):
        super().show()
        name_menu = list(self.menu.keys())
        price_menu = list(self.menu.values())
        price_menu.sort()
        if self.discount * Human.person > 0.1 :
            total_discount = 0.1
        else :
            total_discount = self.discount * Human.person
        minimum = price_menu[0] * (1 - total_discount) * Human.person
        price_menu = list(self.menu.values())
        if Human.money < minimum:
            print("You can't eat nothing in here")
            print("At least you need \%s" % minimum)
        else :
            for length in range(0, len(name_menu)) :
                if Human.money >= price_menu[length] * (1 - total_discount) * Human.person :
                    print("You can eat %s and price is %.1f" % (name_menu[length], price_menu[length] *(1 - total_discount) *Human.person))
        print('\n')