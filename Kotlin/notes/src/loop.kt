fun main(){
    val names = listOf("Anne", "Peter", "Jeff")
    for (name in names) {
        println(name)
    }
    for (x in 0..10) println(x)

    for (x in 0 until 10) println(x)

    for (x in 0 until 10 step 2) println(x)

    for (x in 10 downTo 0 step 1) println(x)

    val numbers = (0..9).toList()
    println(numbers)

    var x = 0
    while (x < 10) {
        println(x)
        x++ // Same as x += 1
    }

    loopname@ for (n in 2..100) {
        for (d in 2 until n) {
            if (n % d == 0) continue@loopname
        }
        println("$n is prime")
    }


}