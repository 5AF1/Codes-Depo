fun main(){
    var m: Map<String, String> =mapOf("name" to "Luke", "age" to "23")
    //val type map or immutable for mapof()
    print(m)
    var n= mapOf<Int,Int>((1 to 2),(2 to 4))
    print(n)

    m=mutableMapOf(
        "name" to "Luke",
        "age" to "283"
    )
    println(m)


    val person = mutableMapOf("name" to "Luke", "age" to "23")
//> {name=Luke, age=23}

    person.put("location","Oslo")
//> {name=Luke, age=23, location=Oslo}

    val onlyName = person.filter { it.key == "name" }

    println(person) // All data is still in the original map
//> {name=Luke, age=23}

    println(onlyName) // onlyName is a new map with the filtered name property
//> {name=Luke}

    person.remove("age")
//> {name=Luke, location=Oslo}

    person.clear()
//> {}

    ///
    val person2 = sortedMapOf("name" to "Luke", "age" to "23", "location" to "Oslo")
    person2.put("birthday", "1995-01-01")
    println(person2)

    var h=hashMapOf("name" to "Luke", "age" to "23", "location" to "Oslo")
    var l=linkedMapOf("name" to "Luke", "age" to "23", "location" to "Oslo")
    print(h.run { any()})
    var lf=1..25

}
