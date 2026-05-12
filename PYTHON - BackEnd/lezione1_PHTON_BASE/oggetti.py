class Student: 
    name = ""
    role = "student"
    description = "this  class is supposed to be used anytime you will create a new student" #CLASS ATTRIBUTES!
    
    def saluta(self):
        print(f"Ciao a tutti, io mi chiamo {self.name}!")
    
    def __init__(self, name, surname, age, course):
        self.name = name.strip().capitalize()
        self.surname = surname.strip().capitalize()
        self.age = age
        self.course = course
        self.fullName = self.name + " " + self.surname
        #INSTANCE ATTRIBUTES!
    
    def __eq__(self, other):
        if isinstance(other, Student):
            if(self.name == other.name and self.surname == other.surname and self.age == other.age):
                return True
            else:
                return False
        else:
            return False
    
    # def __add__(self, other):
    #     if()
    
    
# s1 = Student()
# s1.name= "Stefano"
# s1.age= 34

# s2 = Student
# s2.name = "Lorenzo"

# print(s1.name, s2.name)
# print(s1, s2)
# print(s1.description)
# s1.saluta()


s1 = Student("stefano", "fortezza", 27, "Web Developer")
# print(s1)
# print(s1.name)
# print(s1.surname)
# print(s1.age)
# print(s1.fullName)
# s1.prova = "Test"
# print(s1.prova)

s2 = Student("stefano", "fortezza", 40, "Web Developer")

print(s1 == s2)

s3 = Student("stefano", "fortezza", 27, "new_Course")

print(s1 == s3)
