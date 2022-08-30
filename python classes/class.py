from importlib.util import set_loader
from xml.etree.ElementInclude import default_loader


class Employee: 

    num_of_employees= 0 
    
    raise_amount=1.04
# there are 4 methods regular method( which pass instance automatically ), class method ( which pass class automatically )
# , static method (which does not pass anything automatically ), special method (like dunder init )
    def __init__ ( self , first , last , pay):
        self.first = first 
        self.last = last
        self.pay = pay
        # self.email= first + '.' + last + '@jainit.com' since we are using property method 
        Employee.num_of_employees+=1 
        # why we used employee.num instead of self.num ?? because it does not make sense to use instanceas the number of emplyees will be same for all 


    # property decorator can change method to attribute
    @property
    def email(self):
        return '{}.{}@jainit.com'.format( self.first, self.last )

    @property
    def fullname(self):
        #this is regular method i.e. methods which take instance as first argument
        return '{} {}'.format(self.first,self.last)

    @fullname.setter
    def fullname(self ,name):
        first,last=name.split(' ')
        self.first= first
        self.last=last 


    @fullname.deleter
    def fullname(self ):
        print("delete naem !")
        self.first= None
        self.last= None 
    

    


    
    def raise_pay( self ):
        self.pay= int( self.pay* self.raise_amount) 
        # you can access class variables through class instance or by class_name.classvariablr; 
        # but there is a catch if try the first method , the instance will see whether there is an attribute or not 
        #  if there isnt then it will search for it in class and inheritances and create separate attribute for that instance 

    @classmethod
    def set_raise_amt(cls , amount ):
        cls.raise_amount=amount


    @classmethod # we will be making constructor , name of constructor usually starts with from 
    def  from_string( cls , emp_str):
        first,last,pay=  emp_str.split('-')
        return cls(first , last, pay)


    @staticmethod
    def is_workday( day ): 
        if day.weekday()== 5 or day.weekday()== 6 : 
            return False
        return True  


# it is good to have repr as minimum because if it is not defined then 
    def __repr__(self):
       return "Employee('{}', '{}' , '{}')".format(self.first , self.last, self.pay)


    def __str__(self):
        return '{} - {}'.format( self.fullname(), self.email)

    def __add__( self , other ):
        return self.pay + other.pay 
    def __len__(self):
        return len( self.fullname())




    


class Developer(Employee):
    #we can overwrite some functions  like 
    raise_amount= 1.10  
    #there is another shortcut 
    def __init__ ( self , first , last , pay, prog):
        super().__init__(first, last ,pay )
        # or one can do  , Employee.__init__( self  , first , last , pay)
        self.prog= prog 


class Manager( Employee): 
    def __init__(self, first, last, pay, employees=None):
        super().__init__(first, last, pay)
        if employees is None: 
            self.employees  =[]
        else : 
            self.employees=employees
    def add_emp( self , emp):
        if emp not in self.employees: 
            self.employees.append(emp)
    def remove_emp( self , emp ): 
        if emp  in self.employees: 
            self.employees.remove(emp)

    def print_emps( self):
        for emps in self.employees: 
            print( '---> ', emps.fullname())


dev_1 = Developer('sarthak', 'bansal', 150 , 'python') 
dev_2 = Developer('amey', 'choudary', 150000 , 'rust') 


# print(dev_1.pay)
dev_1.raise_pay() 
# print( dev_1.pay)

mgr_1 = Manager( 'krishna', 'singh', 900000000, [dev_1])
print( mgr_1)
mgr_1.add_emp(dev_2)

mgr_1.remove_emp(dev_1)
mgr_1.print_emps()

emp_1 = Employee( 'jainit','bafna', 40000)
emp_2 = Employee( 'suyash','sethia', 606000)
emp_3 = Employee( 'hardik','mittal', 658585)

# print( emp_2.fullname())
# print( Employee.num_of_employees)

Employee.set_raise_amt(1.059) # you can also use class instance but generally that doesnot make sense 

# print( emp_1.pay)
emp_1.raise_amount=1.0004

# emp_1.raise_pay()
# print( emp_1.pay)
# print( Employee.__dict__)
# print( emp_1.__dict__)

emp_str1 = "johm-doe-20000"
emp_str2 = "jm-doffffe-2440000"
emp_str3 = "jom-dofe-2004400"


# there are two methods ; 
#1 very basic using basic python 

first,last,pay=  emp_str1.split('-')
new_emp_1 = Employee(first , last, pay)



# 2 using constructor 

new_emp2 = Employee.from_string(emp_str2)

# print( new_emp2.__dict__ )


#importing 
import datetime
my_date= datetime.date( 2016 ,12 ,14)

# print( Employee.is_workday(my_date))



# some python functions 

# print( issubclass( Manager, Employee))
# print( issubclass( Manager, Developer))
# print( isinstance( dev_1 , Developer))
# print( isinstance( dev_1 , Manager))


# print( int.__add__( 1, 3 ))
# print( str.__add__ ( 'a' ,'b'))

# print( emp_1+ emp_2)

# print( len(emp_1))


# there is problem  , now , when we change first name of employee the email does not get changed 


emp_1.first='june'
print( emp_1)

#but the full name is changed 

print( emp_1.fullname())


del emp_1.fullname

