#How to define a Class 
class Singer:
    #what is __init__ ? What is an attribute?
    def __init__(self, name, genre, famousTrack):
        self.name = name
        self.genre = genre
        self.famousTrack = famousTrack
        
    def sing(self):
        print(self.name, 'is singing', self.famousTrack)
        
    def printSinger(self):
        print(f'name:', self.name ,'genre:', self.genre, 'famousTrack:', self.famousTrack)

#What is an Instance
mj = Singer('Michel Jackson', 'pop', 'Billie Jean')
mj.sing()
mj.printSinger()

taylorSwift = Singer('Taylor Swift', 'pop', 'You Belong with Me.')
taylorSwift.sing()