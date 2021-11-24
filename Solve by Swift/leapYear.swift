func isLeapYear(year: Int){
    if year%4 == 0 || year%100 == 0{
       print("Yes It is a leap year!")
    }else{
        print("That is not a leap year")
    }
}
var x = 2013
isLeapYear(year: x)

