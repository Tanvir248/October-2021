func  loveCalculator(){
    let lovescore  = Int.random(in: 1...100) 
    if lovescore>80{
        print("You love each other like kanye and kante.")
    }else if lovescore >= 40 && lovescore <= 80 {
        print("You go together like coke and mentos.")
    }else {
        print("You'll be forever alone.")
    }
}
loveCalculator()