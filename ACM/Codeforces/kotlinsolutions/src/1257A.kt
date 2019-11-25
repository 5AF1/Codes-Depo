import java.util.Scanner
import kotlin.math.abs
import kotlin.math.min

//val cin=Scanner(System.`in`)
fun main(){
    var t=cin.nextInt()
    while (t!=0){
        t--
        var n=cin.nextInt()
        var x=cin.nextInt()
        var a=cin.nextInt()
        var b=cin.nextInt()
        var ans:Int= min(n-1, abs(a-b)+x)
        println(ans)
    }
}
