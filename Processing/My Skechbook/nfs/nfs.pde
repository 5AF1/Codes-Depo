int n=1;
int dn=5;
void setup() {
	size(640, 640, P3D);
	background(0);
}

void draw() {
	//background(147, 156, 255, 155);
	point_plot(0,0);
	int i=0;
	//float x=mouseX-width/2,y=height/2-mouseY;
	float x=mouseX-width/2,y=-mouseY+height/2;
	float phi=(sqrt(5)-1)/2;
	float  dx=.3;
	while(i<n){
		x+=dx;
		i++;
		//point_plot(x,y);
		point_plot(rot_x(mouseX-width/2,x-(mouseX-width/2),phi*i),rot_y(-mouseY+height/2,x-(mouseX-width/2),phi*i));
	}
	if((n>=3200||n<=0))
		dn=-1*dn;
	n+=dn;
	println(n);
}
void mousePressed() {
	background(0);
	if(dn==5)
		dn=0;
	else {
		dn=5;
	}
	//background(247, 169, 255, 155);
}

float rot_x(float x ,float r, float rev){
	rev=rev*2*PI;
	//return x;
	return r*cos(rev)+x;
}
float rot_y(float y ,float r,float rev){
	rev=rev*2*PI;
	//return y;
	return r*sin(rev)+y;
}
void point_plot(float x ,float y ){
	x=x+width/2;
	y=height/2-y;
	stroke(0, 0, 0, 0);
	ellipse(x, y, 2, 2);
}