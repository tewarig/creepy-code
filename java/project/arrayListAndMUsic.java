import java.util.ArrayList;

class Playlist {
  
  public static void main(String[] args) {
ArrayList<String> desertIslandPlaylist = new ArrayList<String>();    
desertIslandPlaylist.add("THe local Train");
desertIslandPlaylist.add("Ritviz");
desertIslandPlaylist.add("Talor SWift");
desertIslandPlaylist.add("Vilan");
desertIslandPlaylist.add("Ketty perry");
desertIslandPlaylist.add("yak ak yak");
System.out.println(desertIslandPlaylist);
System.out.println(desertIslandPlaylist.size());
desertIslandPlaylist.remove("yak ak yak");
System.out.println(desertIslandPlaylist.size());
int A = desertIslandPlaylist.indexOf("Ritviz");
int B = desertIslandPlaylist.indexOf("Talor SWift");
System.out.println(A);
System.out.println(B);
String tempA = "Ritviz";
desertIslandPlaylist.set(1,"Talor SWift");
desertIslandPlaylist.set(2,tempA);
System.out.println(desertIslandPlaylist);

  }
  
}
