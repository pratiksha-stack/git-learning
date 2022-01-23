class Vehicle:
    def _init_(self,number, price,name):
        self.number=number
        self.price=price
        self.name=name
class Store:
    def init(self,storeName, vehicleList):
        self.storeName=storeName
        self.vehicleList=vehicleList
    
    def findMinimumVehicleByPrice(self):
       min_obj=min(self.vehicleList, key=lambda x:x.price) 
       return min_obj
      
    def findMaximimVehicleByNumber(self):
       max_obj=max(self.vehicleList, key=lambda x:x.number) 
       return max_obj
    
    
    

limit=int(input())
vehicleList=[]
for b in range(limit):
    
    number=int(input())
    price=int(input())
    
    name=input()
    vehicleList.append(Vehicle(number, price, name))
p1=Store("ABC", vehicleList)
r1=p1.findMinimumVehicleByPrice()
r2=p1.findMaximimVehicleByNumber()

if(p1!=None):
    print(r1.number)
    print(r1.price)
    print(r1.name)
else:
    print('No Data Found')

if(p1!=None):
    print(r2.number)
    print(r2.price)
    print(r2.name)
else:
    print('No Data Found')