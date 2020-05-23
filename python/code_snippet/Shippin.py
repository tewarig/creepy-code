def ground_shipping(weight):
  if weight <= 2:
    return 1.50*weight+20
  if weight <= 6:
    return 3.00*weight+20
  if weight <= 10:
    return 4.00*weight+20
  else:
   return 4.75*weight+20

print(ground_shipping(8.4))

def drone_shipping(weight):
  if weight <= 2:
    return 4.50*weight+0
  if weight <= 6:
    return 9.00*weight+0
  if weight <= 10:
    return 12.00*weight+0
  else:
   return 14.25*weight+0

print(drone_shipping(1.5))
def cheap(weight):
  if(drone_shipping(weight)>ground_shipping(weight)):
    print("ground_shipping")
    print(ground_shipping(weight))
  else:
    print("drone_shipping")
    print(drone_shipping(weight))
cheap(41.5)
