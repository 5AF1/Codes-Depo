import processing.core.*; 
import processing.data.*; 
import processing.event.*; 
import processing.opengl.*; 

import java.util.HashMap; 
import java.util.ArrayList; 
import java.io.File; 
import java.io.BufferedReader; 
import java.io.PrintWriter; 
import java.io.InputStream; 
import java.io.OutputStream; 
import java.io.IOException; 

public class GameOfLife extends PApplet {

int l=50;
int x=(700/l);
int ss=100;
int t=5;
int ran=100;
boolean paused = true;

int maxtile=0;
int lasttile=0;
int score=0;

boolean [][] alive_flag = new boolean [x][x];
public boolean will_born(int n) {
	if(n==3)
		return true;
	return false;
}
public boolean will_die(int n) {
	if(n==2 || n==3)
		return true; 
	return false;
}
public boolean is_alive(int i,int j){
	if(i>=x)
		i=i%x;
	if(j>=x)
		j=j%x;
	if(i<0)
		i=x+i;
	if(j<0)
		j+=x;
	return alive_flag[i][j];
}
public boolean predeict(int x,int y){
	int n=0;
	for(int i=-1;i<2;i++){
		for(int j=-1;j<2;j++){
			if(i==0&&j==0)
				continue;
			if(is_alive(x+i,y+j))
				n++;
		}
	}
	if(alive_flag[x][y])
		return will_die(n);
	else
		return will_born(n);
}
public void setup(){
	
	background(0);
	for (int i = 0; i < x; ++i) {
		for (int j = 0; j < x; ++j) {
			alive_flag[i][j]=false;
		}
	}
	for (int i = 0; i < ss; ++i) {
		int a=PApplet.parseInt(random(0,x));
		int b=PApplet.parseInt(random(0,x));
		alive_flag[a][b]=true;
		//println(a+" "+b);
	}
}
public void draw(){
	background(0);
	boolean [][] next_flag = new boolean [x][x];
	
	for (int i = 0; i < x; ++i) {
		for (int j = 0; j < x; ++j) {
			if (alive_flag[i][j]==true) {
				fill(255);
				stroke(0);
				square(0,0,l);
			}
			else {
				fill(0);
				stroke(50);
				square(0,0,l);
			}
			translate(l,0);
			next_flag[i][j]=predeict(i,j);
		}
		translate(-l*x, l);
	}/*
	for (int i = 0; i < 10; ++i) {
		for(int j = 0;j<10;j++){
			square(0,0,5);
			translate(5,0);
		}
		translate(-5*10, 5);
	}*/
	int c=0;
	if(!paused){
		for (int i = 0; i < x; ++i) {
			for (int j = 0; j < x; ++j) {
				alive_flag[i][j]=next_flag[i][j];
				if(alive_flag[i][j])
					c++;
			}
		}
	}
	else{
		c=lasttile;
	}
	if(lasttile!=c && c!=0 ){
		score+=c;
		//println("score: "+score);
	}
	lasttile=c;
	if(c==0 && !paused){
		println("Dead");
		background(0);
		if(score!=0);
			exit();
	}
	delay(t);
	
}
public void keyReleased() {
	//println(keyCode);
	if(keyCode==' ')
		paused=!paused;
	else if (keyCode==67) {
		for (int i = 0; i < x; ++i) {
			for (int j = 0; j < x; ++j) {
				alive_flag[i][j]=false;
			}
		}
	}
	if(keyCode==86){
		for (int i = 0; i < ran; ++i) {
			int a=PApplet.parseInt(random(0,x));
			int b=PApplet.parseInt(random(0,x));
			alive_flag[a][b]=true;
			score=0;
			lasttile=0;
			maxtile=0;
		}
	}
}
public void mouseDragged() 
{
	int xx=PApplet.parseInt(pmouseX/l);
	int yy=PApplet.parseInt(pmouseY/l);
  	//println(xx+" "+yy);
  	if(xx>=x)
		xx=x;
	if(yy>=x)
		yy=x;
	if(xx<0)
		xx=0;
	if(yy<0)
		yy=0;
  	alive_flag[yy][xx]=!alive_flag[yy][xx];
}
public void mousePressed() 
{
	int xx=PApplet.parseInt(pmouseX/l);
	int yy=PApplet.parseInt(pmouseY/l);
  	//println(xx+" "+yy);
  	if(xx>=x)
		xx=x;
	if(yy>=x)
		yy=x;
	if(xx<0)
		xx=0;
	if(yy<0)
		yy=0;
  	alive_flag[yy][xx]=!alive_flag[yy][xx];
}
  public void settings() { 	size(700,700); }
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "GameOfLife" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
