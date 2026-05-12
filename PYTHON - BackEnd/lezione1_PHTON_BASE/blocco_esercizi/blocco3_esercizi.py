#ESERCIZIO 1
class Vehicle:
    type = "Car"
    
    def __init__(self, model):
        self.model = model

v1 = Vehicle("Modello 1")
v2 = Vehicle("Modello 2")

# print(v1.type)
# print(v2.type)

Vehicle.type = "new_Type"

# print(v1.type)
# print(v2.type)

# print(Vehicle.type)

# #ESERCIZIO 2
v1.type = "Type_v1"

# print(v1.type)
# print(v2.type)

# print(Vehicle.type)
# print(v1.__dict__)
# print(v2.__dict__)

#ESERCIZIO 3
class Student:
    def __init__(self, name, grade):
        self.name = name
        self.grade = grade
        print(f"CREAZIONE DELL'OGGETTO AVVENUTA con i seguenti attributi; name: {self.name}, grade: {self.grade}!")
    
    def __str__(self):
        a = f'''
        Student: {self.name} (grade:{self.grade})
        '''
        return a
    
    def __eq__(self, other):
        if isinstance(other, Student):
            if(self.name == other.name and self.grade == other.grade):
                return True
            else:
                return False
        else:
            return False

s1 = Student("Stefano", 8)
s2 = Student("Sara", 7)

#ESERCIZIO 4
# s1.age = 24

# print(s1.age)
# print(s2.age)

#ESERCIZIO 5
# print(s1)

#ESERCIZIO 6
# print(s1 == s2)

#ESERCIZIO 7
class Course:
    def __init__(self, name):
        self.name = name
        self.students = [] 

    def add_student(self, student):
        self.students.append(student)

    def __len__(self):
        return len(self.students)
    
    def __add__(self, other):
        if isinstance(other, Course):
            nuova_pldescr = f"Corso creata automaticmente unendo {self.name} + {other.name}"
            nuovo_corso = Course(nuova_pldescr)
            
            nuovo_corso.students = self.students + other.students

            return nuovo_corso
        else:
            print("Non posso sommare gli elementi richiesti")
            return
    
    def __str__(self):
        return f"Corso: {self.name}, Studenti: {self.students}"


course1 = Course("Python Base")

course1.add_student("Mario")
course1.add_student("Luca")
course1.add_student("Giulia")

# print(len(course))

#ESERCIZIO 8
course2 = Course("PHP")
course2.add_student("Anna")

course3 = course1 + course2

# print(course3)

#ESERCIZIO 9
print(dir(Student))
print(Student.__dict__)

#ESERCIZIO 10
