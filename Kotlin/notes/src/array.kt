

import java.util.*
fun main()
{

/**GFG
In Kotlin, arrays are not a native data type, but
a mutable collection of similar items which are represented by
the Array class.
There are two ways to define an array in Kotlin.

Using the arrayOf() function –
Using the Array constructor –

 **/

    // declaring an array using arrayOf()
    val arrayname = arrayOf(1, 2, 3, 4, 5)
    for (i in 0 until arrayname.size)
    {
        print(" "+arrayname[i])
    }
    println()
    // declaring an array using arrayOf<Int>
    val arrayname2 = arrayOf<Int>(10, 20, 30, 40, 50)
    for (i in 0..arrayname2.size-1)
    {
        print(" "+arrayname2[i])
    }

    val arrayname3 = Array(5, { i -> i * i })
    for (i in 0 until arrayname3.size)
    {
        println(arrayname3[i])
    }
    val arrayname4 = Array(5) { i -> 1 }
    for (i in 0 until arrayname4.size)
    {
        var a=arrayname4[i]
        println("$a ")
    }

     //////////////////////////////////////////////////
    ///zetcode.com////////////////////////////////////
    val nums = arrayOf(1, 2, 3, 4, 5)
    println(Arrays.toString(nums))

    val nums2 = (3..12).toList().toTypedArray()
    println(Arrays.toString(nums2))

    val nums3 = IntArray(5, { i -> i * 2 + 3})
    println(Arrays.toString(nums3))
    /////
    val nums4 = arrayOf(1, 2, 3, 4, 5)
    println(nums4.get(0))

    nums4.set(0, 0)
    println(Arrays.toString(nums4))

    val nums5 = nums4.plus(1)
    println(Arrays.toString(nums5))

    val slice = nums4.sliceArray(1..3)
    println(Arrays.toString(slice))
    slice.forEach { i -> print(i)  }

    println(nums4.first())
    println(nums4.last())
    println(nums4.indexOf(2))

    ///2d array//
    // A 6x5 array of Int, all set to 0.
    var m = Array(6) {Array(5) {0} }
    print(Arrays.toString(m.first()))
    val n = Array(3) {IntArray(2){-1}}
    print(n.forEach { i->i.forEach { j-> } })

}

