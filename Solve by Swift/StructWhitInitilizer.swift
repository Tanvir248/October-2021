struct town{
    //define variable
    let name: String
    var citizen: [String]
    var resources: [String: Int]
    
    //creating an intializer
    init(townName: String, peopleName: [String], inventory: [String: Int]){
      name = townName
     citizen = peopleName
        resources = inventory
    }
}
// insert value by initializer
var myTown = town(townName: "Loveland", peopleName: ["smrity" , "tanvir", "fatih"], inventory: ["Onion" : 13, "Rice": 69])
// print all by mytown
print(myTown)
// print resorces
print(myTown.resources["Rice"]!)
