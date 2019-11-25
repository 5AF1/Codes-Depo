fun main(){
    //print(Int.MAX_VALUE)
    val str = readLine()
    val s=str!!.split(' ')
    //var a=s[0]!!.toInt();var b=s[1]!!.toInt(),c=s[2]!!.toInt(),d=s[3]!!.toInt()
    var (a,b,c,d)= listOf(s[0]!!.toLong(),s[1]!!.toLong(),s[2]!!.toLong(),s[3]!!.toLong())
    var sum=(a+b+c+d)/3
    var ar = arrayOf(sum-a,sum-b,sum-c,sum-d)
    for(i in 0..3){
        if(ar[i]!=0.toLong()) {
            print(ar[i])
            print(' ')
        }
    }
}