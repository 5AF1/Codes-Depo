import java.util.Scanner
val cin = Scanner(System.`in`)

fun main(){
    print("Hello, Geeks! ")
    println("This is Kotlin tutorial.")
    var a:Int = cin.nextInt()
    a+=cin.nextInt()
    print("The sum is $a ")


    print("Enter an Integer value: ")
    val string1 = readLine()!!

    // .toInt() function converts the string into Integer
    var integerValue: Int = string1.toInt()
    println("You entered: $integerValue")

    print("Enter a double value: ")
    val string2= readLine()!!

    // .toDouble() function converts the string into Double
    var doubleValue: Double = string2.toDouble()
    println("You entered: $doubleValue")




}