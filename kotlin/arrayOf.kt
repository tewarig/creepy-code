var number= arrayOf(1,2,3,4,5)// we haven't given any type to this array
var num = arrayOf<Int>(51,52,53)//int type array
var name = arrayOf<String>("Gaurab","Gaurav","Gourav","Gaourav")//string type array
var new = intArrayOf(1)
// var nullArray = arrayOfNulls<String>(size:10)
fun main() {
    println(num[0])
    println(name.get(1))
}
