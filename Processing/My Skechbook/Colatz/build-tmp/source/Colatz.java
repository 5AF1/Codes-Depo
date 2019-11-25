import processing.core.*; 
import processing.data.*; 
import processing.event.*; 
import processing.opengl.*; 

import processing.pdf.*; 

import java.util.HashMap; 
import java.util.ArrayList; 
import java.io.File; 
import java.io.BufferedReader; 
import java.io.PrintWriter; 
import java.io.InputStream; 
import java.io.OutputStream; 
import java.io.IOException; 

public class Colatz extends PApplet {



public long collatz(long n){
	if(n%2==0){
		return n/2;
	}
	else {
		return (n*3+1);
	}
}
public void setup() {
	
	beginRecord(PDF,"collatz2.pdf");
	background(0);
	/*translate(0,height/2);
	stroke(255);
	line(0, 0, 50, 0);
	translate(50, 0);
	rotate(PI/4);
	line(0, 0, 50, 0);*/
	for(long i=1;i<10000;i++){
		long num=i;
		LongList sqn=new LongList();
		do{
			sqn.append(num);
			num=collatz(num);
		}while (num!=1);
		sqn.append(1);
		sqn.reverse();

		float len=6.5f;
		float ang=PI/16;

		resetMatrix();
		translate(width/16*8,height/16*5);

		stroke(255);
		line(0, 0, len, 0);
		translate(len, 0);

		for(int j=1;j<sqn.size();j++){
			if(sqn.get(j)%2==0){
				stroke(255,50);
				rotate(ang);
				line(0, 0, len, 0);
				translate(len, 0);
			}
			else{
				stroke(255,255,0,50);
				rotate(-ang);
				line(0, 0, len, 0);
				translate(len, 0);
			}

		}
	}
	endRecord();
	println("DONE");
}

public void draw() {
	
}
  public void settings() { 	size(1020, 1020); }
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "Colatz" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
