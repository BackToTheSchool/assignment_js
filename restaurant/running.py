import Restaurant
import Human

japanese_menu = {'Gudong' : 8000 , 'Miso Ramen' : 8000, 'Onigiri' : 3000,'Sushi' : 12000}
chinese_menu = {'Black Noodles' : 4500, 'Seafood Noodles' : 5500,'Fried Pork' : 12000,'Fried Chicken' : 14000}
korean_menu = {'Army Soup' : 8300, 'Kimch pork Soup' : 10000, 'Pork Soup' : 12000}
american_menu = {'Cheese Pizza' : 8000, 'Fried Chicken' : 12000, 'Hawaiian Pizza' : 10000}

japanese_restaurant = Restaurant.CoupleRestaurant("Quite","Izakaya","Comic Book",japanese_menu)
chinese_restaurant = Restaurant.CoupleRestaurant("Little bit noisy","Nam Gang","Chinese Drama",chinese_menu)
korean_restaurant = Restaurant.FamilyRestaurant("Noisy","Doolae",0.025,korean_menu)
american_restaurant = Restaurant.FamilyRestaurant("Noisy but roamantic","Tom's fry",0.03,american_menu)

person = int(input("How many people are there ? "))
money = int(input("How much money do you have ? "))

customer = Human.Human(person,money)
if person < 3 :
    japanese_restaurant.show(customer)
    chinese_restaurant.show(customer)
elif person >= 3 :
    korean_restaurant.show(customer)
    american_restaurant.show(customer)
else :
    print("Enter the number of people properly")