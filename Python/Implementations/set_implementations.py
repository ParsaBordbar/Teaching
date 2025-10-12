
class Set:
    # Implementation of Characteristic Function for sets 
    def __init__(self, name, elements):
        self.name = name
        self.elements = elements
        
    def _get_elements(self):
        return f"{self.name} = {self.elements}"
    
    
    def is_in_set(self, element):
        for e in self.elements:
            if (element == e):
                return 1
            return 0

# U = {a, b, c, d, e,f ,g ,h, i, j ,k}
set_A = Set(name = 'A', elements=['a', 'b', 'c', 'd', 'e']);
set_B = Set(name = '‌B', elements=['d', 'e', 'f', 'g', 'h', 'i']);

print(set_A.is_in_set('a'))

print(set_A._get_elements())
print(set_B._get_elements())