class Singer:
    def __init__(self, name, genre, famousTrack):
        self.name = name
        self.genre = genre
        self.famousTrack = famousTrack
        
    def sing(self, name):
        print(name, 'is singing', self.famousTrack)
        
    def printSinger(self):
        print(f'name:', self.name ,'genre:', self.genre, 'famousTrack:', self.famousTrack)

#Inheritance is a way of creating a new class for using details of an 
#existing class without modifying it.
class Rapper(Singer):
    def __init__(self, name, genre, famousTrack, rapperName):
        super().__init__(name, genre, famousTrack)
        self.rapperName = rapperName
        
    def rap(self):
        print(self.rapperName ,'is Rapping', self.famousTrack)
        
    #Class Polymorphism    
    def printSinger(self):
        print(f'name:', self.name ,'genre:', self.genre, 'famousTrack:', self.famousTrack, 'rapperName:', self.rapperName)
        
eminem = Rapper('Marshal', 'Rap','Mocking Bird', 'SlimShady')
eminem.printSinger()