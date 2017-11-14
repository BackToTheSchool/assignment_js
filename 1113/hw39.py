class employee():
    __first_name = ""
    __second_name = ""
    __position = ""
    __separation_date = ""
    __next = None
    __before = None

    def __init__(self, first_name, second_name, position, *separation_date):
        self.__first_name = first_name
        self.__second_name = second_name
        self.__position = position
        if not separation_date :
            self.__separation_date = ""
        else :
            self.__separation_date = str(separation_date)

    def _set_sort(self, employee):
        if self.__second_name < employee.__second_name:
            if self.__next is None:
                self.__next = employee
                employee.__before = self
            else:
                if self.__next.__second_name > employee.__second_name :
                    employee.__next = self.__next
                    employee.__before = self
                    self.__next.__before = employee
                    self.__next = employee
                else :
                    self = self.__next
                    self._set_sort(employee)
        elif self.__second_name > employee.__second_name:
            if self.__before is None:
                self.__before = employee
                employee.__next = self
            else:
                if self.__before.__second_name < employee.__second_name :
                    self.__before.__next = employee
                    employee.__before = self.__before
                    employee.__next = self
                    self.__before = employee
                else :
                    self = self.__before
                    self._set_sort(employee)

    def show(self):
        while self.__before is not None:
            self = self.__before
        while self.__next is not None:
            print(self.__first_name, "\t", self.__second_name, "\t", self.__position, "\t", self.__separation_date)
            self = self.__next
        print(self.__first_name, "\t", self.__second_name, "\t", self.__position, "\t", self.__separation_date)

    def search(self,name):
        while self.__before != None :
            self = self.__before
        while self.__next != None :
            if name in self.__first_name or name in self.__second_name :
                print(self.__first_name, "\t", self.__second_name, "\t", self.__position, "\t", self.__separation_date)
            self = self.__next
        if name in self.__first_name or name in self.__second_name:
            print(self.__first_name, "\t", self.__second_name, "\t", self.__position, "\t", self.__separation_date)


