import java.util.Scanner
//val cin=Scanner(System.`in`)

fun main(){
    var n=cin.nextInt()
    var root=IntArray(n+1){0}
    var sum=LongArray(n+1){0}
    var flag= BooleanArray(n+1){false}
    for (i in 2..n)
        root[i]=cin.nextInt()
    for(i in 1..n) {
        sum[i] = cin.nextLong()
        if(sum[i]== (-1).toLong()) {
            flag[i]=true
        }
    }

    for(i in 2..n){
        if(flag[root[i]] && sum[root[i]]==(-1).toLong())
            sum[root[i]]=sum[i]
        else if(flag[root[i]]){
            sum[root[i]]= minOf(sum[i],sum[root[i]])
        }
    }
    var ans=sum[1]
    var i=2
    while (ans!=(-1).toLong() && i<=n){
        if(sum[i]==(-1).toLong()) {
            i++
            continue
        }
        if(sum[root[i]]>sum[i])
            ans=-1
        else
            ans+=sum[i]-sum[root[i]]
        i++
    }
    print("$ans")
}