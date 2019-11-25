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
boolean will_born(int n) {
	if(n==3)
		return true;
	return false;
}
boolean will_die(int n) {
	if(n==2 || n==3)
		return true; 
	return false;
}
boolean is_alive(int i,int j){
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
boolean predeict(int x,int y){
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
void setup(){
	size(700,700);
	background(0);
	for (int i = 0; i < x; ++i) {
		for (int j = 0; j < x; ++j) {
			alive_flag[i][j]=false;
		}
	}
	for (int i = 0; i < ss; ++i) {
		int a=int(random(0,x));
		int b=int(random(0,x));
		alive_flag[a][b]=true;
		//println(a+" "+b);
	}
}
void draw(){
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
void keyReleased() {
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
			int a=int(random(0,x));
			int b=int(random(0,x));
			alive_flag[a][b]=true;
			score=0;
			lasttile=0;
			maxtile=0;
		}
	}
}
void mouseDragged() 
{
	int xx=int(pmouseX/l);
	int yy=int(pmouseY/l);
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
void mousePressed() 
{
	int xx=int(pmouseX/l);
	int yy=int(pmouseY/l);
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