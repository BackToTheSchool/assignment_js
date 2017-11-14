class employee() :
    __next = None
    __name = ""
    def _set__next(self,employee):
        if self.__next == None :
            self.__next = employee
        else :
            self = self.__next
            self._set__next(employee)

    def __init__(self,name):
        self.__name = name

    def show(self):
        while self.__next != None :
            print(self.__name)
            self = self.__next
        print(self.__name)

    def _delete_(self,name) :
        while self.__next != None :
            if self.__next.__name == name :
                self.__next = self.__next.__next
            else :
                self = self.__next
