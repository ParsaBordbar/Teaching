
class Set:
    # Implementation of Characteristic Function for sets 
    def __init__(self, name, elements, universe = None):
        self.name = name
        self.elements = elements
        self.universe = universe
        
    def _get_elements(self):
        return f"{self.name} = {self.elements}"
    
    
    def is_in_set(self, element):
        for e in self.elements:
            if (element == e):
                 return 1 
        return 0
    
    def universe_values(self):
        universe_values_in_set = []
        for e in self.universe:
            item = self.is_in_set(e)
            print(e, item)
            universe_values_in_set.append(item)
            self.universe = universe_values_in_set
    
    def bar(self):
        bar_elements = []
        for e in self.universe: 
            bar_elements.append((1 - e))
        return bar_elements


# Operations
def max(num1: int, num2: int):
    if (num1 > num2): return num1
    return num2

def min(num1: int, num2: int):
    if (num1 < num2): return num1
    return num2

def union(set_1, set_2):
    union_set_values = [max(int(a), int(b)) for a, b in zip(set_1, set_2)]
    return Set('union', elements=union_set_values)

def intersection(set_1, set_2):
    intersection_set_values = [min(int(a), int(b)) for a, b in zip(set_1, set_2)]
    return Set('intersection', elements=intersection_set_values)


# U = {a, b, c, d, e,f ,g ,h, i, j ,k}
UNIVERSE = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k']

# Initialization of two sets
set_A = Set(name = 'A', elements=['a', 'b', 'c', 'd', 'e'], universe=UNIVERSE)
set_B = Set(name = 'B', elements=['d', 'e', 'f', 'g', 'h', 'i'], universe=UNIVERSE)

# Some Basic Tests
print(f"univers values present in the set: {set_A.universe}")
print(set_A.elements)
set_A.universe_values()
set_B.universe_values()
print(f"univers values present in the set: {set_A.universe}")
print(f"A` = {set_A.bar()}")

u = union(set_A.universe, set_B.universe)
inter = intersection(set_A.universe, set_B.universe)
print("A U B = ", u.elements)
print(f"A ∩ B = ", inter.elements)