var listOfNames = listOf<String>("Hello","World")//cannot change it
var MutablelistOfNames = mutableListOf<String>("Hello","World")//cannot change it
var MutableArraylistOfNames = arrayListOf<String>("Hello","World")//cannot change it
var MapOfNames = mapOf<Int,String>(0 to "Gaurav")//similar to list and key pair in python
var hashMapOfNames = hashMapOf<Int,String>(0 to "Gaurav")//similar to list and key pair in python but it is mutable


fun main(){
   MutablelistOfNames.add("Gaurav") 
   println(MapOfNames[0])
   hashMapOfNames[1]="cool"
}
