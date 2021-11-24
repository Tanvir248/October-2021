struct town{
    let name = "Loveland"
    var citizen = ["Tanvir", "Smrity"]
    var resources = ["Grain": 200, "Ore": 42, "Wool": 75]
   
    //insider function of struct
    //Method
    func guest(){
        let n = 10
        print("Number of gues here is: \(n)")
        print("Batman will come tommorow!")
    }
}
var myTown = town()
print(myTown.name)
    //printing all the citizen name of my town
    myTown.citizen.append("Fatih")

print(myTown.citizen)
//call the method by object myTown

myTown.guest()
