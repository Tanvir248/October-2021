struct town{
    let name = "Loveland"
    var citizen = ["Tanvir", "Smrity"]
    var resources = ["Grain": 200, "Ore": 42, "Wool": 75]
}
var myTown = town()
// print town name
print(myTown.name)
    //printing all the citizen name of my town

print(myTown.citizen)
    // printing all specifice citizen name of my town
print("Spcific citizen name is: \(myTown.citizen[1])")
    //printing all resorses of my town people
print(myTown.resources)

//printing specifice resorses of my town people
    print(myTown.resources["Grain"]!)
