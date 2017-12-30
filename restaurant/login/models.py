from django.db import models

# Create your models here.
class Restaurant :
    def __init__(self, atmosphere, name) :
         self.atmosphere = atmosphere
         self.name = name
    def show(self):
        print("This restaurant is %s. %s are %s" % (self.name, self.name, self.atmosphere))
