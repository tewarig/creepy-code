 var f:String = "Gaurav"
//late init
fun main() {
    var size = f?.length ?:0
   
    println("$f length of my name is ${f.length}")
}
